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


void SongManager::search(Dlist<Song>& fromList, Dlist<Song>& inList, const std::vector<std::string>& str, int field)
{
    // Очистіть список результатів пошуку перед кожним пошуком
    inList.clear();

    // Перебір всіх пісень і додавання збігів до списку результатів
    for (int i = 0; i < fromList.getSize(); i++) {
        // Перевірка, чи індекс не перевищує розмір fromList
        if (i >= fromList.getSize()) {
            break;
        }

        const Song& song = fromList[i];

        // Вибір полів для пошуку відповідно до значення field
        std::vector<std::string> fieldValues;
        switch (field) {
        case 0: fieldValues.push_back(song.getSongers()[0]); break; // Виконавець
        case 1: fieldValues.push_back(song.getName()); break; // Назва
        case 2: fieldValues.push_back(song.getAlbom()); break; // Альбом
        case 3: fieldValues.push_back(std::to_string(song.getYear())); break; // Рік
        case 4: fieldValues.push_back(song.getFormat()); break; // Формат
        case 5: fieldValues.push_back(std::to_string(song.getSize())); break; // Розмір
        case 6: fieldValues.push_back(song.getIsImport() ? "yes" : "not"); break; // Зарубіжна
        default: // Пошук за всіма полями
            fieldValues.push_back(song.getSongers()[0]);
            fieldValues.push_back(song.getName());
            fieldValues.push_back(song.getAlbom());
            fieldValues.push_back(std::to_string(song.getYear()));
            fieldValues.push_back(song.getFormat());
            fieldValues.push_back(std::to_string(song.getSize()));
            fieldValues.push_back(song.getIsImport() ? "yes" : "not");
            break;
        }

        // Перевірка входження str у вибрані поля пісні
        bool found = false;
        if (str.size() == 7) {
            found = true;

            // Перевіряємо відповідні поля
            for (int j = 0; j < 7; j++) {
                std::string lowerCaseField = fieldValues[j];
                std::transform(lowerCaseField.begin(), lowerCaseField.end(), lowerCaseField.begin(), ::tolower);

                std::string lowerCaseStr = str[j];
                std::transform(lowerCaseStr.begin(), lowerCaseStr.end(), lowerCaseStr.begin(), ::tolower);

                if (lowerCaseField.find(lowerCaseStr) == std::string::npos) {
                    found = false;
                    break;  // Якщо хоча б одне поле не співпадає, виходимо з циклу
                }
            }
        }

        if (found) {
            // Знайдено збіг, додайте пісню до списку результатів пошуку
            inList.push_back(song);
        }
    }

    // Якщо tempList пустий, беремо елементи з songList
    if (inList.getSize() == 0) {
        inList = fromList;
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

