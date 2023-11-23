#pragma once
#include "Song.h"
#include "Dlist.h"
#include "QuickSort.h"
#include <algorithm>  // для std::transform
#include <cctype>      // для std::tolower


class SongManager
{
public:

	Dlist<Song> songList;
	Dlist<Song> tempList1;
	Dlist<Song> tempList2;

	/*
	пошук певних елементів
	сортування за певним критерієм
	
	*/
	//std::vector<std::string> printEl(int index);

	void sort(int (Compare)(const Song& A, const Song& B));
	void search(Dlist<Song>& fromList, Dlist<Song>& inList, const std::vector<std::string>& str, int field);
	void searchByFields(Dlist<Song>& fromList, Dlist<Song>& inList, const std::vector<std::string>& searchValues);
	friend std::ofstream& operator<< (std::ofstream& Out, const SongManager& songManager);
	friend std::ifstream& operator>> (std::ifstream& In, SongManager& songManager);

};

std::ofstream& operator<< (std::ofstream& Out, const SongManager& songManager);
std::ifstream& operator>> (std::ifstream& In, SongManager& songManager);
