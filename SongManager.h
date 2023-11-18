#pragma once
#include "Song.h"
#include "Dlist.h"
#include "QuickSort.h"


class SongManager
{
public:

	Dlist<Song> songList;
	Dlist<Song> tempList;

	/*
	пошук певних елементів
	сортування за певним критерієм
	
	*/
	//std::vector<std::string> printEl(int index);

	void sort(int (Compare)(const Song& A, const Song& B));

	friend std::ofstream& operator<< (std::ofstream& Out, const SongManager& songManager);
	friend std::ifstream& operator>> (std::ifstream& In, SongManager& songManager);

};

std::ofstream& operator<< (std::ofstream& Out, const SongManager& songManager);
std::ifstream& operator>> (std::ifstream& In, SongManager& songManager);

