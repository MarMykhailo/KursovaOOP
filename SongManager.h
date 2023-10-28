//#pragma once
//#include "Song.h"
//#include "Dlist.h"
////#include <fstream>
//
//class SongManager
//{
//public:
//
//	Dlist<Song> songList;
//	Dlist<Song> tempList;
//
//	SongManager()
//	{
//
//	}
//
//
//	/*
//	пошук певних елементів
//	сортування за певним критерієм
//	зчитування з файла
//	запис у файл*/
//	std::vector<std::string>& printEl(int index)
//	{
//		std::vector<std::string> temp;
//		Song& tempEl = songList[index];
//		temp.push_back(tempEl.getName());
//		temp.push_back(tempEl.getAlbom());
//		tempEl.getSongers();
//		std::string tempSongers = "";
//		for (int i = 0; i < tempEl.getSongers().size(); i++)
//		{
//			tempSongers += tempEl.getSongers()[i];
//			if (i != tempEl.getSongers().size() - 1)
//			{
//				tempSongers += ", ";
//			}
//		}
//		temp.push_back(tempSongers);
//		std::string tempYear = std::to_string(tempEl.getYear());
//		temp.push_back(tempYear);
//		temp.push_back(tempEl.getFormat());
//		std::string tempSize = std::to_string(tempEl.getSize());
//		temp.push_back(tempSize);
//		std::string tempIsImport = std::to_string(tempEl.getIsImport());
//		temp.push_back(tempIsImport);
//		return temp;
//	}
//
//	/*friend std::fstream& operator<< (std::fstream& Out, SongManager& songManager);
//	friend std::fstream& operator>> (std::fstream& In, SongManager& songManager);*/
//	
//};
//
//
////std::fstream& operator<< (std::fstream& Out, SongManager& songManager);
////std::fstream& operator>> (std::fstream& In, SongManager& songManager);
//
//
//
//
//
////std::fstream& operator<< (std::fstream& Out, SongManager& songManager)
////{
////	Out << songManager.songList;
////	return Out;
////}
////std::fstream& operator>> (std::fstream& In, SongManager& songManager)
////{
////	In << songManager.songList;
////	return In;
////}
//
//int CompareSongers(const Song& A, const Song& B);
//int CompareName(const Song& A, const Song& B);
//int CompareAlbom(const Song& A, const Song& B);
//int CompareYear(const Song& A, const Song& B);
//int CompareFormat(const Song& A, const Song& B);
//int CompareSize(const Song& A, const Song& B);
//int CompareIsImport(const Song& A, const Song& B);
//
