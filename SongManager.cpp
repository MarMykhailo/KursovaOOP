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




void SongManager::sort(int (Compare)(const Song& A, const Song& B), Dlist<Song>& list)
{
	QuickSort(list, 0, list.getSize() - 1, CompareName);
}

void SongManager::search(Dlist<Song>& fromList, Dlist<Song>& inList, const std::string& key)
{
    // Очистіть список результатів пошуку перед кожним пошуком
    inList.clear();

    // Перевірка на пустий ключ
    if (key.empty()) {
        // Якщо ключ порожній, просто копіюємо весь вихідний список
        inList = fromList;
        return;
    }

    // Перебір всіх пісень і додавання збігів до списку результатів
    for (int i = 0; i < fromList.getSize(); i++) {
        // Перевірка, чи індекс не перевищує розмір fromList
        if (i >= fromList.getSize()) {
            break;
        }

        const Song& song = fromList[i];

        // Збереження значень полів для порівняння
        std::vector<std::string> fieldValues = {
            song.getSongers()[0],
            song.getName(),
            song.getAlbom(),
            std::to_string(song.getYear()),
            song.getFormat(),
            std::to_string(song.getSize()),
            song.getIsImport() ? "yes" : "not"
        };

        // Перевірка входження ключа у всі поля пісні
        bool found = false;

        // Перевіряємо всі поля
        for (const std::string& fieldValue : fieldValues) {
            std::string lowerCaseField = fieldValue;
            std::transform(lowerCaseField.begin(), lowerCaseField.end(), lowerCaseField.begin(), ::tolower);

            std::string lowerCaseKey = key;
            std::transform(lowerCaseKey.begin(), lowerCaseKey.end(), lowerCaseKey.begin(), ::tolower);

            if (lowerCaseField.find(lowerCaseKey) != std::string::npos) {
                found = true;
                break;  // Якщо хоча б одне поле містить ключ, виходимо з циклу
            }
        }

        if (found) {
            // Знайдено збіг, додайте пісню до списку результатів пошуку
            inList.push_back(song);
        }
    }
}


void SongManager::searchByFields(Dlist<Song>& fromList, Dlist<Song>& inList, const std::vector<std::string>& searchValues)
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

        // Вибір полів для пошуку
        std::vector<std::string> fieldValues;
        fieldValues.push_back(song.getSongers()[0]); // Виконавець
        fieldValues.push_back(song.getName()); // Назва
        fieldValues.push_back(song.getAlbom()); // Альбом
        fieldValues.push_back(std::to_string(song.getYear())); // Рік
        fieldValues.push_back(song.getFormat()); // Формат
        fieldValues.push_back(std::to_string(song.getSize())); // Розмір
        fieldValues.push_back(song.getIsImport() ? "yes" : "not"); // Зарубіжна

        // Перевірка входження searchValues у вибрані поля пісні
        bool found = true;
        for (int j = 0; j < 7; j++) {
            // Перевірка, чи поле для пошуку не є порожнім рядком
            if (!searchValues[j].empty()) {
                std::string lowerCaseField = fieldValues[j];
                std::transform(lowerCaseField.begin(), lowerCaseField.end(), lowerCaseField.begin(), ::tolower);

                std::string lowerCaseStr = searchValues[j];
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

