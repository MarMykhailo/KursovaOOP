#pragma once

template<typename C, typename T>
void QuickSort(C& container, int first, int last, int (*pCompare)(const T& A, const T& B))
{
    if (first < last)
    {
        int left = first;
        int right = last;
        int pivotIndex = (left + right) / 2;

        if (pivotIndex >= 0 && pivotIndex < container.getSize())
        {
            T pivot = container[pivotIndex];

            while (left <= right)
            {
                while (pCompare(container[left], pivot) < 0)
                    left++;
                while (pCompare(pivot, container[right]) < 0)
                    right--;

                if (left <= right)
                {
                    container.swap(left, right);
                    left++;
                    right--;
                }
            }

            QuickSort(container, first, right, pCompare);
            QuickSort(container, left, last, pCompare);
        }
    }
}
