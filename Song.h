#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <corecrt_wstring.h>
#include <vector>
#include <sstream>


class Song
{

    std::vector<std::wstring> songers;
    std::wstring name;
    std::wstring albom;
    int year;
    double duration;
    std::wstring format;
    double size;
    bool isImport;
public:
    Song();
    Song(std::vector<std::wstring> Songers, std::wstring Name);
    Song(std::vector<std::wstring> Songers, std::wstring Name, std::wstring Albom, int Year, double Duration, std::wstring Format, double Size, bool IsImport);
    Song(const Song& other);
    Song(Song&& other);
    ~Song();

    std::vector<std::wstring> getSongers() const;
    std::wstring getName() const;
    std::wstring getAlbom() const;
    int getYear() const;
    double getDuration() const;
    std::wstring getFormat() const;
    double getSize() const;
    bool getIsImport() const;

    void setSongers(std::vector<std::wstring> Songers);
    void setName(std::wstring Name);
    void setAlbom(std::wstring Albom);
    void setYear(int Year);
    void setDuration(double Duration);
    void setFormat(std::wstring Format);
    void setSize(double Size);
    void setIsImport(bool IsImport);



    Song& operator=(const Song& Other);
    bool operator==(const Song& Other) const;
    void clear();

    
    friend std::wofstream& operator<<(std::wofstream& out, const Song& song);
    friend std::wifstream& operator>>(std::wifstream& in, Song& song);
};

std::wofstream& operator<<(std::wofstream& out, const Song& song);

std::wifstream& operator>>(std::wifstream& in, Song& song);

