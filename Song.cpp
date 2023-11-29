#include "Song.h"


Song::Song()
{
	this->songers.push_back(L"Non");
	this->name = L"Non";
	this->albom = L"Non";
	this->year = 0;
	this->duration = 0.0;
	this->format = L"Non";
	this->size = 0;
	this->isImport = false;
}

Song::Song(std::vector<std::wstring> Songers, std::wstring Name)
{
	// Заповнюю по чеговості
	songers.clear();
	for (size_t i = 0; i < Songers.size(); i++)
	{
		songers.push_back(Songers[i]);
	}

	this->albom = L"-";
	this->year = 0;
	this->duration = 0.0;
	this->format = L"-";
	this->size = 0;
	this->isImport = false;
}

Song::Song(std::vector<std::wstring> Songers, std::wstring Name, std::wstring Albom = L"Unknown", int Year = 0, double Duration = 0.0, std::wstring Format = L".mp3", double Size = 0, bool IsImport = false)
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
	duration = Duration;
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
std::vector<std::wstring> Song::getSongers() const
{
	return this->songers;
}

std::wstring Song::getName() const
{
	return this->name;
}

std::wstring Song::getAlbom() const
{
	return this->albom;
}

int Song::getYear() const
{
	return this->year;
}

double Song::getDuration() const
{
	return this->duration;
}

std::wstring Song::getFormat() const
{
	return this->format;
}

double Song::getSize() const
{
	return this->size;
}

bool Song::getIsImport() const
{
	return this->isImport;
}

void Song::setSongers(std::vector<std::wstring> Songers)
{
	this->songers.clear();
	for (size_t i = 0; i < Songers.size(); i++)
	{
		this->songers.push_back(Songers[i]);
	}
}

void Song::setName(std::wstring Name)
{
	this->name = Name;
}

void Song::setAlbom(std::wstring Albom)
{
	this->albom = Albom;
}

void Song::setYear(int Year)
{
	this->year = Year;
}

void Song::setDuration(double Duration)
{
	this->duration = Duration;
}

void Song::setFormat(std::wstring Format)
{
	this->format = Format;
}

void Song::setSize(double Size)
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
	this->year = Other.year;
	this->duration = Other.duration;
	this->format = Other.format;
	this->size = Other.size;
	this->isImport = Other.isImport;
	return *this;
}


bool Song::operator==(const Song& Other) const
{
	return  this->name == Other.name && this->albom == Other.albom && this->year == Other.year && this->duration == Other.duration &&this->format == Other.format && this->size == Other.size && this->isImport == Other.isImport;
}

void Song::clear()
{
	this->songers.clear();
	this->name.clear();
	this->albom.clear();
	this->year = 0;
	this->duration = 0.0;
	this->format.clear();
	this->size = 0;
	this->isImport = false;
}

std::wofstream& operator<<(std::wofstream& out, const Song& song) {
	out << song.songers.size() << L"$";
	for (const std::wstring& singer : song.songers) {
		out << singer << L"$";
	}
	out << song.name << L"$" << song.albom << L"$" << song.year << L"$" << song.duration << L"$" << song.format << L"$" << song.size << L"$" << (song.isImport ? L"1" : L"0") << L"$";
	return out;
}

std::wifstream& operator>>(std::wifstream& in, Song& song) {
	std::wstring line;
	std::getline(in, line, L'$');
	try {
		int numEl = std::stoi(line);
		song.songers.clear();  // Очистимо попередні дані про співаків
		for (int i = 0; i < numEl; i++) {
			std::getline(in, line, L'$');
			song.songers.push_back(line);
		}
		std::getline(in, song.name, L'$');
		std::getline(in, song.albom, L'$');
		std::getline(in, line, L'$');
		song.year = std::stoi(line);
		std::getline(in, line, L'$');
		song.duration = std::stod(line);
		std::getline(in, song.format, L'$');
		std::getline(in, line, L'$');
		song.size = std::stod(line);
		std::getline(in, line, L'$');
		song.isImport = (line == L"1") ? true : false;
	}
	catch (const std::exception& e) {
		// Обробка винятку при конвертації рядка в число
		std::wcerr << L"Error reading from file: " << e.what() << std::endl;
		// Можливо, потрібно виконати інші дії для обробки помилки
	}
	return in;
}
