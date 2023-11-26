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

int CompareAlbom(const Song& A, const  Song& B)
{
	if (A.getAlbom() > B.getAlbom())
	{
		return -1; // A перед B
	}
	else if (A.getAlbom() < B.getAlbom())
	{
		return 1; // A після B
	}
	else
	{
		return 0; // рядки однакові
	}
}

int CompareYear(const Song& A, const Song& B)
{
	if (A.getYear() > B.getYear())
	{
		return -1; // A перед B
	}
	else if (A.getYear() < B.getYear())
	{
		return 1; // A після B
	}
	else
	{
		return 0; // рядки однакові
	}
}

int CompareDuration(const Song& A, const Song& B)
{
	if (A.getDuration() > B.getDuration())
	{
		return -1;
	}
	else if (A.getDuration() < B.getDuration())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int CompareFormat(const Song& A, const Song& B)
{
	if (A.getFormat() > B.getFormat())
	{
		return -1;
	}
	else if (A.getFormat() < B.getFormat())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int CompareSize(const Song& A, const Song& B)
{
	if (A.getSize() > B.getSize())
	{
		return -1;
	}
	else if (A.getSize() < B.getSize())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int CompareIsImport(const Song& A, const Song& B)
{
	if (A.getIsImport() > B.getIsImport())
	{
		return -1;
	}
	else if (A.getIsImport() < B.getIsImport())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}