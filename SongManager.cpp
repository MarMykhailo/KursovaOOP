#include "SongManager.h"

void SongManager::sort(int (Compare)(const Song& A, const Song& B), Dlist<Song>& list)
{
	QuickSort(list, 0, list.getSize() - 1, Compare);
}

void SongManager::search(Dlist<Song>& fromList, Dlist<Song>& inList, const std::wstring& key)
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
        std::vector<std::wstring> fieldValues = {
            song.getSongers()[0],
            song.getName(),
            song.getAlbom(),
            std::to_wstring(song.getYear()),
            std::to_wstring(song.getDuration()),
            song.getFormat(),
            std::to_wstring(song.getSize()),
            song.getIsImport() ? L"1" : L"0"
        };


        // Перевірка входження ключа у всі поля пісні
        bool found = false;

        // Перевіряємо всі поля
        for (const std::wstring& fieldValue : fieldValues) {
            std::wstring lowerCaseField = fieldValue;
            std::transform(lowerCaseField.begin(), lowerCaseField.end(), lowerCaseField.begin(), ::tolower);

            std::wstring lowerCaseKey = key;
            std::transform(lowerCaseKey.begin(), lowerCaseKey.end(), lowerCaseKey.begin(), ::tolower);

            if (lowerCaseField.find(lowerCaseKey) != std::wstring::npos) {
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

void SongManager::searchByFields(Dlist<Song>& fromList, Dlist<Song>& inList, const std::vector<std::wstring>& searchValues)
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
        std::vector<std::wstring> fieldValues;
        fieldValues.push_back(song.getSongers()[0]); // Виконавець
        fieldValues.push_back(song.getName()); // Назва
        fieldValues.push_back(song.getAlbom()); // Альбом
        fieldValues.push_back(std::to_wstring(song.getYear())); // Рік
        fieldValues.push_back(std::to_wstring(song.getDuration())); // Тривалість
        fieldValues.push_back(song.getFormat()); // Формат
        fieldValues.push_back(std::to_wstring(song.getSize())); // Розмір
        fieldValues.push_back(song.getIsImport() ? L"Так" : L"Ні"); // Зарубіжна.//проблема через те що пишук українською

        // Перевірка входження searchValues у вибрані поля пісні
        bool found = true;
        for (int j = 0; j < 8; j++) {
            // Перевірка, чи поле для пошуку не є порожнім рядком
            if (!searchValues[j].empty()) {
                std::wstring lowerCaseField = fieldValues[j];
                std::transform(lowerCaseField.begin(), lowerCaseField.end(), lowerCaseField.begin(), ::tolower);

                std::wstring lowerCaseStr = searchValues[j];
                std::transform(lowerCaseStr.begin(), lowerCaseStr.end(), lowerCaseStr.begin(), ::tolower);

                if (lowerCaseField.find(lowerCaseStr) == std::wstring::npos) {
                    found = false;
                    //break;  // Якщо хоча б одне поле не співпадає, виходимо з циклу
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






