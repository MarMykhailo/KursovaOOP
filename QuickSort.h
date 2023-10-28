#pragma once

template<typename T>
static void QuickSort(T* arr, int first, int last, int (pCompare)(T& A, T& B), void (pSwap)(T* arr, int a, int b))
{
	if (first < last)
	{
		int left = first;
		int right = last;
		T pivot = arr[left + right) / 2]; // Обираємо середній елемент як опорний

		while (left <= right)
		{
			while (pCompare(arr[left], pivot))
				left++;
			while (pCompare(pivot, arr[right]))
				right--;

			if (left <= right)
			{
				pSwap(arr, left, right);
				left++;
				right--;
			}
		}

		// Рекурсивно сортуємо підмасиви
		QuickSort(arr, first, right, pCompare, pSwap);
		QuickSort(arr, left, last, pCompare, pSwap);
	}
}








