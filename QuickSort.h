#pragma once

template<typename C, typename T>
void QuickSort(C& container, int first, int last, int (pCompare)(const T& A,const T& B))
{
	if (first < last)
	{
		int left = first;
		int right = last;
		T pivot = container[(left + right) / 2]; // Обираємо середній елемент як опорний

		while (left <= right)
		{
			while (pCompare(container[left], pivot))
				left++;
			while (pCompare(pivot, container[right]))
				right--;

			if (left <= right)
			{
				container.swap(left, right);
				left++;
				right--;
			}
		}

		// Рекурсивно сортуємо підмасиви
		QuickSort(container, first, right, pCompare);
		QuickSort(container, left, last, pCompare);
	}
}








