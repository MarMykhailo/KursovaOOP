//#include "Song.h"
//
//
////Song::
////	std::vector<std::string> songers;
////	std::string name;
////	std::string albom;
////	int year;
////	//тривалість
////	std::string format;//первірити чи правильно 
////	int size;//розмір
////	bool isImport;
//
//
//
//Song::Song()
//{
//	this->songers.clear();
//	this->name.clear();
//	this->albom.clear();
//	this->year = 0;
//	this->format.clear();
//	this->size = 0;
//	this->isImport = false;
//}
//
//Song::Song(std::vector<std::string> Songers, std::string Name)
//{
//	// Заповнюю по чеговості
//	songers.clear();
//	for (size_t i = 0; i < Songers.size(); i++)
//	{
//		songers.push_back(Songers[i]);
//	}
//}
//
//Song::Song(std::vector<std::string> Songers, std::string Name, std::string Albom, int Year, std::string Format, int Size, bool IsImport)
//{
//	// Заповнюю по чеговості
//	songers.clear();
//	for (size_t i = 0; i < Songers.size(); i++)
//	{
//		songers.push_back(Songers[i]);
//	}
//	name = Name;
//	albom = Albom;
//	year = Year;
//	format = Format;
//	size = Size;
//	isImport = IsImport;
//}
//
//Song::Song(const Song& other)
//{
//	this->operator=(other);
//}
//
//Song::Song(Song&& other)
//{
//	this->operator=(other);
//	other.clear();
//}
//
//Song::~Song()
//{
//	this->clear();
//}
//
//std::vector<std::string> Song::getSongers() const
//{
//	return this->songers;
//}
//
//std::string Song::getName() const
//{
//	return this->name;
//}
//
//std::string Song::getAlbom() const
//{
//	return this->albom;
//}
//
//int Song::getYear() const
//{
//	return this->year;
//}
//
//std::string Song::getFormat() const
//{
//	return this->format;
//}
//
//int Song::getSize() const
//{
//	return this->size;
//}
//
//bool Song::getIsImport() const
//{
//	return this->isImport;
//}
//
//void Song::setSongers(std::vector<std::string> Songers)
//{
//	this->songers.clear();
//	for (size_t i = 0; i < Songers.size(); i++)
//	{
//		this->songers.push_back(Songers[i]);
//	}
//}
//
//void Song::setName(std::string Name)
//{
//	this->name = Name;
//}
//
//void Song::setAlbom(std::string Albom)
//{
//	this->albom = Albom;
//}
//
//void Song::setYear(int Year)
//{
//	this->year = Year;
//}
//
//void Song::setFormat(std::string Format)
//{
//	this->format = Format;
//}
//
//void Song::setSize(int Size)
//{
//	this->size = Size;
//}
//
//void Song::setIsImport(bool IsImport)
//{
//	this->isImport = IsImport;
//}
//
//Song& Song::operator = (const Song& Other)
//{
//	this->songers = Other.songers;
//	this->name = Other.name;
//	this->albom = Other.albom;
//	this->format = Other.format;
//	this->size = Other.size;
//	this->isImport = Other.isImport;
//	this->year = Other.year;
//	return *this;
//}
//
//
//bool Song::operator==(const Song& Other) const
//{
//	return  this->name == Other.name && this->albom == Other.albom && this->year == Other.year && this->format == Other.format && this->size == Other.size && this->isImport == Other.isImport;
//}
//
//void Song::clear()
//{
//	this->songers.clear();
//	this->name.clear();
//	this->albom.clear();
//	this->year = 0;
//	this->format.clear();
//	this->size = 0;
//	this->isImport = false;
//}
//
//
//
//////перевантаження виводу у файл
////std::ofstream& operator <<(std::ofstream& out, const Song& song)
////{
////	out << song.songers.size() << " ";
////	for (size_t i = 0; i < song.songers.size(); i++)
////	{
////		out << song.songers[i] << " ";
////	}
////	out << song.name << " " << song.albom << " " << song.year << " " << song.format << " " << song.size << " " << song.isImport;
////	return out;
////}
////
//////перевантаження вводу у файл
////std::ifstream& operator >>(std::ifstream& in, Song& song)
////{
////	int numEl = 0;
////	in >> numEl;
////	for (size_t i = 0; i < numEl; i++)
////	{
////		in >> song.songers[i];
////	}
////	in >> song.name >> song.albom >> song.year >> song.format >> song.size >> song.isImport;
////	return in;
////}
//
//
//
////std::fstream& operator<<(std::fstream& out, const Song& song) 
////{
////	out << song.songers.size() << " ";
////	for (size_t i = 0; i < song.songers.size(); i++) {
////		out << song.songers[i] << " ";
////	}
////	out << song.name << " " << song.albom << " " << song.year << " " << song.format << " " << song.size << " " << song.isImport;
////	return out;
////}
////
////std::fstream& operator>>(std::fstream& in, Song& song) 
////{
////
////	int numEl = 0;
////	in >> numEl;
////	for (size_t i = 0; i < numEl; i++) {
////		in >> song.songers[i];
////	}
////	in >> song.name >> song.albom >> song.year >> song.format >> song.size >> song.isImport;
////	return in;
////}
//
//
