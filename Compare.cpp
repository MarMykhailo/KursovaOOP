#include "Compare.h"
int CompareSongers(const Song& A, const Song& B)
{
	if (A.getSongers() == B.getSongers())
	{
		return 1;
	}
	else if (A.getSongers() > B.getSongers())
	{
		return 0;
	}
	else
	{
		return 2;
	}
}

int CompareName(const Song& A, const Song& B)
{
	if (A.getName() > B.getName())
	{
		return -1; // A перед B
	}
	else if (A.getName() < B.getName())
	{
		return 1; // A після B
	}
	else
	{
		return 0; // рядки однакові
	}
}


//int CompareName(const Song& A, const Song& B)
//{
//	if (A.getName() == B.getName())
//	{
//		return 1;
//	}
//	else if (A.getName() > B.getName())
//	{
//		return 0;
//	}
//	else
//	{
//		return 2;
//	}
//}
//
//int CompareAlbom(const Song& A, const  Song& B)
//{
//	if (A.getAlbom() == B.getAlbom())
//	{
//		return 1;
//	}
//	else if (A.getAlbom() > B.getAlbom())
//	{
//		return 0;
//	}
//	else
//	{
//		return 2;
//	}
//}
//
//int CompareYear(const Song& A, const Song& B)
//{
//	if (A.getYear() == B.getYear())
//	{
//		return 1;
//	}
//	else if (A.getYear() > B.getYear())
//	{
//		return 0;
//	}
//	else
//	{
//		return 2;
//	}
//}
//
//int CompareFormat(const Song& A, const Song& B)
//{
//	if (A.getFormat() == B.getFormat())
//	{
//		return 1;
//	}
//	else if (A.getFormat() > B.getFormat())
//	{
//		return 0;
//	}
//	else
//	{
//		return 2;
//	}
//}
//
//int CompareSize(const Song& A, const Song& B)
//{
//	if (A.getSize() == B.getSize())
//	{
//		return 1;
//	}
//	else if (A.getSize() > B.getSize())
//	{
//		return 0;
//	}
//	else
//	{
//		return 2;
//	}
//}
//
//int CompareIsImport(const Song& A, const Song& B)
//{
//	if (A.getIsImport() == B.getIsImport())
//	{
//		return 1;
//	}
//	else if (A.getIsImport() > B.getIsImport())
//	{
//		return 0;
//	}
//	else
//	{
//		return 2;
//	}
//}