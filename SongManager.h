﻿#pragma once
//#include "Song.h"
#include "Dlist.h"
#include "QuickSort.h"
#include <algorithm>  // для std::transform
#include <cctype>      // для std::tolower
#include "Compare.h"

class SongManager
{
public:

	Dlist<Song> songList;
	Dlist<Song> tempList1;
	Dlist<Song> tempList2;


	void sort(int (Compare)(const Song& A, const Song& B), Dlist<Song>& list);

	void search(Dlist<Song>& fromList, Dlist<Song>& inList, const std::wstring& key);
	void searchByFields(Dlist<Song>& fromList, Dlist<Song>& inList, const std::vector<std::wstring>& searchValues);


};






