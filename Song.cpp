#include "Song.h"


Song::Song()
{
	this->songers.push_back("Non");
	this->name = "Non";
	this->albom = "Non";
	this->year = 0;
	this->format = "Non";
	this->size = 0;
	this->isImport = false;
}

Song::Song(std::vector<std::string> Songers, std::string Name)
{
	// Заповнюю по чеговості
	songers.clear();
	for (size_t i = 0; i < Songers.size(); i++)
	{
		songers.push_back(Songers[i]);
	}

	this->albom = "Non";
	this->year = 0;
	this->format = "Non";
	this->size = 0;
	this->isImport = false;
}

Song::Song(std::vector<std::string> Songers, std::string Name, std::string Albom, int Year, std::string Format, int Size, bool IsImport)
{
	// Заповнюю по чеговості
	songers.clear();
	for (size_t i = 0; i < Songers.size(); i++)
	{
		songers.push_back(Songers[i]);
	}
	name = Name;
	albom = Albom;
	year = Year;
	format = Format;
	size = Size;
	isImport = IsImport;
}

Song::Song(const Song& other)
{
	this->operator=(other);
}

Song::Song(Song&& other)
{
	this->operator=(other);
	other.clear();
}

Song::~Song()
{
	this->clear();
}

#pragma region Гетери і Сетери 
std::vector<std::string> Song::getSongers() const
{
	return this->songers;
}

std::string Song::getName() const
{
	return this->name;
}

std::string Song::getAlbom() const
{
	return this->albom;
}

int Song::getYear() const
{
	return this->year;
}

std::string Song::getFormat() const
{
	return this->format;
}

int Song::getSize() const
{
	return this->size;
}

bool Song::getIsImport() const
{
	return this->isImport;
}

void Song::setSongers(std::vector<std::string> Songers)
{
	this->songers.clear();
	for (size_t i = 0; i < Songers.size(); i++)
	{
		this->songers.push_back(Songers[i]);
	}
}

void Song::setName(std::string Name)
{
	this->name = Name;
}

void Song::setAlbom(std::string Albom)
{
	this->albom = Albom;
}

void Song::setYear(int Year)
{
	this->year = Year;
}

void Song::setFormat(std::string Format)
{
	this->format = Format;
}

void Song::setSize(int Size)
{
	this->size = Size;
}

void Song::setIsImport(bool IsImport)
{
	this->isImport = IsImport;
}
#pragma endregion

Song& Song::operator = (const Song& Other)
{
	this->songers = Other.songers;
	this->name = Other.name;
	this->albom = Other.albom;
	this->format = Other.format;
	this->size = Other.size;
	this->isImport = Other.isImport;
	this->year = Other.year;
	return *this;
}


bool Song::operator==(const Song& Other) const
{
	return  this->name == Other.name && this->albom == Other.albom && this->year == Other.year && this->format == Other.format && this->size == Other.size && this->isImport == Other.isImport;
}

void Song::clear()
{
	this->songers.clear();
	this->name.clear();
	this->albom.clear();
	this->year = 0;
	this->format.clear();
	this->size = 0;
	this->isImport = false;
}

std::ofstream& operator<<(std::ofstream& out, const Song& song)
{

	out.fill('$');
	out << song.songers.size()<<"$";

	for (size_t i = 0; i < song.songers.size(); i++)
	{
		out << song.songers[i] << "$";
	}
	out << song.name << "$" << song.albom << "$" << song.year << "$" << song.format << "$" << song.size << "$" << song.isImport << "$";
	return out;
}

std::ifstream& operator>>(std::ifstream& in, Song& song) {
	std::string line;
	std::getline(in, line, '$');
	int numEl = std::stoi(line);
	for (size_t i = 0; i < numEl; i++) {
		std::getline(in, song.songers[i], '$');
	}
	std::getline(in, song.name, '$');
	std::getline(in, song.albom, '$');
	std::getline(in, line, '$');
	song.year = std::stoi(line);
	std::getline(in, song.format, '$');
	std::getline(in, line, '$');
	song.size = std::stoi(line);
	std::getline(in, line, '$');
	song.isImport = line == "1" ? true : false;
	return in;
}



