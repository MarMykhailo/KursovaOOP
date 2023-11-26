﻿#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


class Song
{

    std::vector<std::string> songers;
    std::string name;
    std::string albom;
    int year;
    double duration;
    std::string format;
    double size;
    bool isImport;
public:
    Song();
    Song(std::vector<std::string> Songers, std::string Name);
    Song(std::vector<std::string> Songers, std::string Name, std::string Albom, int Year, double Duration, std::string Format, double Size, bool IsImport);
    Song(const Song& other);
    Song(Song&& other);
    ~Song();

    std::vector<std::string> getSongers() const;
    std::string getName() const;
    std::string getAlbom() const;
    int getYear() const;
    double getDuration() const;
    std::string getFormat() const;
    double getSize() const;
    bool getIsImport() const;

    void setSongers(std::vector<std::string> Songers);
    void setName(std::string Name);
    void setAlbom(std::string Albom);
    void setYear(int Year);
    void setDuration(double Duration);
    void setFormat(std::string Format);
    void setSize(double Size);
    void setIsImport(bool IsImport);



    Song& operator=(const Song& Other);
    bool operator==(const Song& Other) const;
    void clear();

    
    friend std::ofstream& operator<<(std::ofstream& out, const Song& song);
    friend std::ifstream& operator>>(std::ifstream& in, Song& song);
};

std::ofstream& operator<<(std::ofstream& out, const Song& song);

std::ifstream& operator>>(std::ifstream& in, Song& song);

