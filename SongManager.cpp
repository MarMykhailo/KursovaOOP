#include "SongManager.h"

//std::vector<std::string> SongManager::printEl(int index)
//{
//    std::vector<std::string> temp;
//    Song& tempEl = songList[index];
//    temp.push_back(tempEl.getName());
//    temp.push_back(tempEl.getAlbom());
//    // Припустимо, що getSongers повертає std::vector<std::string>
//    std::vector<std::string> songers = tempEl.getSongers();
//    std::string tempSongers = "";
//    for (int i = 0; i < songers.size(); i++)
//    {
//        tempSongers += songers[i];
//        if (i != songers.size() - 1)
//        {
//            tempSongers += ", ";
//        }
//    }
//    temp.push_back(tempSongers);
//    std::string tempYear = std::to_string(tempEl.getYear());
//    temp.push_back(tempYear);
//    temp.push_back(tempEl.getFormat());
//    std::string tempSize = std::to_string(tempEl.getSize());
//    temp.push_back(tempSize);
//    std::string tempIsImport = std::to_string(tempEl.getIsImport());
//    temp.push_back(tempIsImport);
//    return temp;
//}

void SongManager::sort(int (Compare)(const Song& A, const Song& B))
{
    QuickSort<Dlist<Song>, Song>(songList, 0, songList.getSize() - 1, Compare);
}


void SongManager::search(const std::string& str)
{
    // Очистіть список результатів пошуку перед кожним пошуком
    tempList.clear();

    // Перебір всіх пісень і додавання збігів до списку результатів
    for (int i = 0; i < songList.getSize(); i++) {
        const Song& song = songList[i];

        // Переведіть рядки у нижній регістр для регістронезалежного пошуку
        std::string lowerCaseName = song.getName();
        std::transform(lowerCaseName.begin(), lowerCaseName.end(), lowerCaseName.begin(), ::tolower);

        std::string lowerCaseAlbom = song.getAlbom();
        std::transform(lowerCaseAlbom.begin(), lowerCaseAlbom.end(), lowerCaseAlbom.begin(), ::tolower);

        std::string lowerCaseSonger = song.getSongers()[0]; // Виберіть першого виконавця для прикладу
        std::transform(lowerCaseSonger.begin(), lowerCaseSonger.end(), lowerCaseSonger.begin(), ::tolower);

        std::string lowerCaseFormat = song.getFormat();
        std::transform(lowerCaseFormat.begin(), lowerCaseFormat.end(), lowerCaseFormat.begin(), ::tolower);

        // Конвертуйте рік та розмір в рядки для порівняння
        std::string yearString = std::to_string(song.getYear());
        std::string sizeString = std::to_string(song.getSize());

        // Переведіть str у нижній регістр для регістронезалежного порівняння
        std::string lowerCaseStr = str;
        std::transform(lowerCaseStr.begin(), lowerCaseStr.end(), lowerCaseStr.begin(), ::tolower);

        // Перевірка входження str у різні поля пісні
        if (lowerCaseName.find(lowerCaseStr) != std::string::npos ||
            lowerCaseAlbom.find(lowerCaseStr) != std::string::npos ||
            lowerCaseSonger.find(lowerCaseStr) != std::string::npos ||
            lowerCaseFormat.find(lowerCaseStr) != std::string::npos ||
            yearString.find(lowerCaseStr) != std::string::npos ||
            sizeString.find(lowerCaseStr) != std::string::npos ||
            (lowerCaseStr == "yes" && song.getIsImport()) ||
            (lowerCaseStr == "not" && !song.getIsImport())) {
            // Знайдено збіг, додайте пісню до списку результатів пошуку
            tempList.push_back(song);
        }
    }

}


std::ofstream& operator<< (std::ofstream& Out, const SongManager& songManager)
{
    //Out << songManager.songList;
    return Out;
}

std::ifstream& operator>> (std::ifstream& In, SongManager& songManager)
{
    //In >> songManager.songList;
    return In;
}

