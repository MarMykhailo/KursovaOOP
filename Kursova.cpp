#include "Kursova.h"
#include <locale>
#include <codecvt>


System::Void KursovaOOP::Kursova::msbFileOut_Click(System::Object^ sender, System::EventArgs^ e)
{
	//беру назу файла і додаю до ньоо .txt
	//записую в файл
	System::String^ managedString = mstbNameFileOut->Text;
	std::wstring stdString = msclr::interop::marshal_as<std::wstring>(managedString) + L".txt";

	std::wofstream out;
	out.imbue(std::locale(out.getloc(), new std::codecvt_utf8<wchar_t>));

	out.open(stdString, std::ios::out);
	if (!out.is_open())
	{
		MessageBox::Show("Error");
	}
	else
	{
		out << *Current;
        out.close();
	}
	return System::Void();
}

System::Void KursovaOOP::Kursova::msbFileIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	//беру назу файла і додаю до ньоо .txt
	//записую в файл
	System::String^ managedString = mstbNameFileIn->Text;
	std::wstring stdString = msclr::interop::marshal_as<std::wstring>(managedString) + L".txt";

	std::wifstream in;
	in.imbue(std::locale(in.getloc(), new std::codecvt_utf8<wchar_t>));

	in.open(stdString, std::ios::in);
	if (!in.is_open())
	{
		MessageBox::Show(L"Помилка зчитування з файла");
	}
	else
	{
		in >> *Current;
		in.close();
	}
    
	UpdateTable(songManager->songList);
	Current = &songManager->songList;
	return System::Void();
}

System::Void KursovaOOP::Kursova::UpdateTable(Dlist<Song>& DList)
{
    // Очистити TableLayoutPanel
    tlpTable->Controls->Clear();

    // Додати лейбли для заголовків
    tlpTable->Controls->Add(lNumber, 0, 0);
    tlpTable->Controls->Add(lSonger, 1, 0);
    tlpTable->Controls->Add(lName, 2, 0);
    tlpTable->Controls->Add(lAlbom, 3, 0);
    tlpTable->Controls->Add(lYear, 4, 0);
	tlpTable->Controls->Add(lDuration, 5, 0);
    tlpTable->Controls->Add(lFormat, 6, 0);
    tlpTable->Controls->Add(lSize, 7, 0);
    tlpTable->Controls->Add(lIsImport, 8, 0);

    // Додати дані про пісні
    for (int i = 0; i < DList.getSize(); i++) {
        auto currentSong = DList[i];

        Label^ numberLabel = gcnew Label();
        numberLabel->Text = (i + 1).ToString();
        numberLabel->AutoSize = true;
        tlpTable->Controls->Add(numberLabel, 0, i + 1);

        std::wstring allSongers;
        for (int j = 0; j < currentSong.getSongers().size(); j++) {
            if (j > 0) {
                allSongers += L", ";
            }
            allSongers += currentSong.getSongers()[j];
        }

        Label^ songerLabel = gcnew Label();
        songerLabel->Text = gcnew String(allSongers.c_str());
        songerLabel->AutoSize = true;
        songerLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);  
        tlpTable->Controls->Add(songerLabel, 1, i + 1);

        Label^ nameLabel = gcnew Label();
        nameLabel->Text = gcnew String(currentSong.getName().c_str());
        nameLabel->AutoSize = true;
        nameLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
        tlpTable->Controls->Add(nameLabel, 2, i + 1);

        Label^ albomLabel = gcnew Label();
        albomLabel->Text = gcnew String(currentSong.getAlbom().c_str());
        albomLabel->AutoSize = true;
        albomLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
        tlpTable->Controls->Add(albomLabel, 3, i + 1);

        Label^ yearLabel = gcnew Label();
        yearLabel->Text = currentSong.getYear().ToString();
        yearLabel->AutoSize = true;
        yearLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
        tlpTable->Controls->Add(yearLabel, 4, i + 1);

		Label^ durationLabel = gcnew Label();
		durationLabel->Text = currentSong.getDuration().ToString();
		durationLabel->AutoSize = true;
		durationLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
		tlpTable->Controls->Add(durationLabel, 5, i + 1);

        Label^ formatLabel = gcnew Label();
        formatLabel->Text = gcnew String(currentSong.getFormat().c_str());
        formatLabel->AutoSize = true;
        formatLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
        tlpTable->Controls->Add(formatLabel, 6, i + 1);

        Label^ sizeLabel = gcnew Label();
        sizeLabel->Text = currentSong.getSize().ToString();
        sizeLabel->AutoSize = true;
        sizeLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
        tlpTable->Controls->Add(sizeLabel, 7, i + 1);

        Label^ isImportLabel = gcnew Label();
        isImportLabel->Text = currentSong.getIsImport() ? L"Так" : L"Ні";
        isImportLabel->AutoSize = true;
        isImportLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
        tlpTable->Controls->Add(isImportLabel, 8, i + 1);
    }

    // Встановити авто розмір для колонок і рядків
    tlpTable->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    tlpTable->AutoScroll = true;
    tlpTable->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowOnly;
}

System::Void KursovaOOP::Kursova::tsmiSSonger_Click(System::Object^ sender, System::EventArgs^ e)
{
	songManager->sort(CompareSongers, songManager->songList);
    UpdateTable(songManager->songList);
	Current = &songManager->songList;
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSName_Click(System::Object^ sender, System::EventArgs^ e)
{
	songManager->sort(CompareName,songManager->songList);
    UpdateTable(songManager->songList);
	Current = &songManager->songList;
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSAlbom_Click(System::Object^ sender, System::EventArgs^ e)
{
    songManager->sort(CompareAlbom,songManager->songList);
    UpdateTable(songManager->songList);
	Current = &songManager->songList;
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSYear_Click(System::Object^ sender, System::EventArgs^ e)
{
    songManager->sort(CompareYear,songManager->songList);
    UpdateTable(songManager->songList);
	Current = &songManager->songList;
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSDuration_Click(System::Object^ sender, System::EventArgs^ e)
{
	songManager->sort(CompareDuration,songManager->songList);
	UpdateTable(songManager->songList);
	return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSFormat_Click(System::Object^ sender, System::EventArgs^ e)
{
    songManager->sort(CompareFormat,songManager->songList);
    UpdateTable(songManager->songList);
	Current = &songManager->songList;
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSSize_Click(System::Object^ sender, System::EventArgs^ e)
{
    songManager->sort(CompareSize,songManager->songList);
    UpdateTable(songManager->songList);
	Current = &songManager->songList;
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSImport_Click(System::Object^ sender, System::EventArgs^ e)
{
    songManager->sort(CompareIsImport,songManager->songList);
    UpdateTable(songManager->songList);
	Current = &songManager->songList;
    return System::Void();
}

System::Void KursovaOOP::Kursova::tlpTable_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Перевірка, чи подія відноситься до клікання мишкою
	if (e->GetType() == System::Windows::Forms::MouseEventArgs::typeid) {
		System::Windows::Forms::MouseEventArgs^ mouseEvent = (System::Windows::Forms::MouseEventArgs^)e;

		// Перевірка, чи клацнуто правою кнопкою миші
		if (mouseEvent->Button == System::Windows::Forms::MouseButtons::Right) {
			// Ваш код для відображення контекстного меню
			cmsMenu->Show(tlpTable, mouseEvent->Location);
		}
	}
	return System::Void();
}

System::Void KursovaOOP::Kursova::cmsDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Беремо текст з текстового поля
	String^ deleteIndexText = cmstbDelete->Text;

	// Перевірка на пустий рядок
	if (String::IsNullOrEmpty(deleteIndexText)) {
		MessageBox::Show(L"Введіть індекс щоб видалити.", L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Перевірка на коректний формат числа
	int deleteIndex;
	if (!Int32::TryParse(deleteIndexText, deleteIndex)) {
		MessageBox::Show(L"Непарвильинй індекс. Введіть число.", L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Перевірка на допустимий діапазон індексів
	if (deleteIndex-1 < 0 || deleteIndex-1 >= songManager->songList.getSize()) {
		MessageBox::Show(L"Вихід за межі. Введіть коректний індекс.", L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Видалення пісні та оновлення таблиці
	songManager->songList.removeAt(deleteIndex - 1);
	UpdateTable(songManager->songList);
	Current = &songManager->songList;
	return System::Void();
}

System::Void KursovaOOP::Kursova::tlpTable_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e)
{
    if (e->KeyCode == Keys::Enter) {
        MessageBox::Show("Enter");
    }
    return System::Void();
}

System::Void KursovaOOP::Kursova::cmsAdd_Click(System::Object^ sender, System::EventArgs^ e)
{

	Song* song = new Song();

	// Дані про виконавців
	if (!String::IsNullOrEmpty(cmstbSongers->Text))
	{
		std::vector<std::wstring> songers;
		// Виконавці розділені комою
		std::wstring songersString = msclr::interop::marshal_as<std::wstring>(cmstbSongers->Text);
		std::wstring delimiter = L",";
		size_t pos = 0;
		std::wstring token;
		while ((pos = songersString.find(delimiter)) != std::wstring::npos) {
			token = songersString.substr(0, pos);
			songers.push_back(token);
			songersString.erase(0, pos + delimiter.length());
		}
		// Додаємо залишок рядка після останньої коми (або весь рядок, якщо ком не знайдено)
		songers.push_back(songersString);
		song->setSongers(songers);
	}

	// Дані про назву
	if (!String::IsNullOrEmpty(cmstbName->Text))
	{
		std::wstring name = msclr::interop::marshal_as<std::wstring>(cmstbName->Text);
		song->setName(name);
	}


	// Дані про альбом
	if (!String::IsNullOrEmpty(cmstbAlbom->Text))
	{
		std::wstring albom = msclr::interop::marshal_as<std::wstring>(cmstbAlbom->Text);
		song->setAlbom(albom);
	}

	// Дані про рік
	if (!String::IsNullOrEmpty(cmstbYear->Text))
	{
		int year;
		if (Int32::TryParse(cmstbYear->Text, year)) {
			song->setYear(year);
		}
		else {
			MessageBox::Show(L"Введіть правильний рік");
			return;
		}
	}

	// Дані про тривалість
	if (!String::IsNullOrEmpty(cmstbDuration->Text))
	{
		double duration;
		if (Double::TryParse(cmstbDuration->Text, duration)) {
			song->setDuration(duration);
		}
		else {
			MessageBox::Show(L"Введіть правильну тривалість");
			return;
		}
	}

	// Дані про формат
	if (!String::IsNullOrEmpty(cmstbFormat->Text))
	{
		std::wstring format = msclr::interop::marshal_as<std::wstring>(cmstbFormat->Text);
		song->setFormat(format);
	}

	// Дані про розмір
	if (!String::IsNullOrEmpty(cmstbSize->Text))
	{
		double size;
		if (Double::TryParse(cmstbSize->Text, size)) {
			song->setSize(size);
		}
		else {
			MessageBox::Show(L"Введіть правильний розмір");
			return;
		}
	}

	// Дані про зарубіжність
	if (!String::IsNullOrEmpty(cmstbIsImport->Text))
	{
		std::wstring isImport = msclr::interop::marshal_as<std::wstring>(cmstbIsImport->Text);
		if (isImport == L"Так") {
			song->setIsImport(true);
		}
		else
		{
			song->setIsImport(false);
		}
	}

	songManager->songList.push_front(*song);
	UpdateTable(songManager->songList);
	Current = &songManager->songList;

    return System::Void();
}

System::Void KursovaOOP::Kursova::bSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!String::IsNullOrEmpty(tbSearch->Text))
	{
		// Отримуємо рядок з TextBox
		String^ searchString = tbSearch->Text;

		std::wstring str = msclr::interop::marshal_as<std::wstring>(searchString);
		songManager->search(songManager->songList, songManager->tempList1,str);
		
		UpdateTable(songManager->tempList1);
		Current = &songManager->tempList1;
	}

	return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	Dlist<Song>* tempList1 = new Dlist<Song>();
	Dlist<Song>* tempList2 = new Dlist<Song>();
	std::vector<std::wstring> Info;
	Info.push_back(msclr::interop::marshal_as<std::wstring>(tstbSongers->Text));
	Info.push_back(msclr::interop::marshal_as<std::wstring>(tstbName->Text));
	Info.push_back(msclr::interop::marshal_as<std::wstring>(tstbAlbom->Text));
	Info.push_back(msclr::interop::marshal_as<std::wstring>(tstbYear->Text));
	Info.push_back(msclr::interop::marshal_as<std::wstring>(tstbDuration->Text));
	Info.push_back(msclr::interop::marshal_as<std::wstring>(tstbFormat->Text));
	Info.push_back(msclr::interop::marshal_as<std::wstring>(tstbSize->Text));
	Info.push_back(msclr::interop::marshal_as<std::wstring>(tstbIsImport->Text));

	songManager->searchByFields(songManager->songList, songManager->tempList1, Info);
	UpdateTable(songManager->tempList1);
	Current = &songManager->tempList1;

	return System::Void();
}

System::Void KursovaOOP::Kursova::cmsClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	Current->clear();
	return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiFont_Click(System::Object^ sender, System::EventArgs^ e)
{
	FontDialog^ fontDialog = gcnew FontDialog();
	fontDialog->ShowDialog();
	tlpTable->Font = fontDialog->Font;//
	//Встановлення шрифта для всіх елементів Kursova в циклі

	for (int i = 0; i < this->Controls->Count; i++)
	{
		this->Controls[i]->Font = fontDialog->Font;
	}
	//перевірка чи шрифт є не завеликий (не більше 12)
	if (fontDialog->Font->Size > 12)
	{
		
		//встановлення 14 шрифта
		tlpTable->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12);
		//Встановлення шрифта для всіх елементів Kursova в циклі
		for (int i = 0; i < this->Controls->Count; i++)
		{
			this->Controls[i]->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12);
		}
	}

	

	return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiTheme_Click(System::Object^ sender, System::EventArgs^ e)
{
	ColorDialog^ colorDialog = gcnew ColorDialog();
	colorDialog->ShowDialog();
	tlpTable->BackColor = colorDialog->Color;
	//Встановлення кольору для всіх елементів Kursova в циклі
	for (int i = 0; i < this->Controls->Count; i++)
	{
		this->Controls[i]->BackColor = colorDialog->Color;
	}
	//встановлюємо колір букв сірим для всіх елементів Kursova в циклі
	for (int i = 0; i < this->Controls->Count; i++)
	{
		this->Controls[i]->ForeColor = System::Drawing::Color::Gray;
	}
	//зміна кольору усіх кнопок і загалом 
	for (int i = 0; i < this->Controls->Count; i++)
	{
		if (this->Controls[i]->GetType() == System::Windows::Forms::Button::typeid)
		{
			this->Controls[i]->ForeColor = System::Drawing::Color::Black;
		}
		if (this->Controls[i]->GetType() == System::Windows::Forms::MenuStrip::typeid)
		{
			this->Controls[i]->ForeColor = System::Drawing::Color::Black;
		}

	}
	return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiDarck_Click(System::Object^ sender, System::EventArgs^ e)
{
	ColorDialog^ colorDialog = gcnew ColorDialog();
	colorDialog->ShowDialog();
	tlpTable->BackColor = colorDialog->Color;
	//Встановлення кольору для всіх елементів Kursova в циклі
	for (int i = 0; i < this->Controls->Count; i++)
	{
		this->Controls[i]->BackColor = colorDialog->Color;
	}
	//встановлюємо колір букв сірим для всіх елементів Kursova в циклі
	for (int i = 0; i < this->Controls->Count; i++)
	{
		this->Controls[i]->ForeColor = System::Drawing::Color::Gray;
	}
	return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiLight_Click(System::Object^ sender, System::EventArgs^ e)
{
	ColorDialog^ colorDialog = gcnew ColorDialog();
	colorDialog->ShowDialog();
	tlpTable->BackColor = colorDialog->Color;
	//Встановлення кольору для всіх елементів Kursova в циклі
	for (int i = 0; i < this->Controls->Count; i++)
	{
		this->Controls[i]->BackColor = colorDialog->Color;
	}
	//встановлюємо колір букв чорним для всіх елементів Kursova в циклі
	for (int i = 0; i < this->Controls->Count; i++)
	{
		this->Controls[i]->ForeColor = System::Drawing::Color::Black;
	}
	return System::Void();
}



