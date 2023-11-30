#include "Kursova.h"
#include <locale>
#include <codecvt>
#include <msclr/marshal_cppstd.h>

System::Void KursovaOOP::Kursova::msbFileOut_Click(System::Object^ sender, System::EventArgs^ e)
{
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

void KursovaOOP::Kursova::UpdateTable(Dlist<Song>& DList)
{

	// Create an instance of ProgressForm
	Form^ progressForm = gcnew Form();

	// Add progress bar and label
	Label^ lProgress = gcnew Label();
	lProgress->Text = L"Оновлення...";
	lProgress->AutoSize = true;
	lProgress->Location = System::Drawing::Point(10, 10);
	progressForm->Controls->Add(lProgress);

	ProgressBar^ progressBar = gcnew ProgressBar();
	progressBar->Minimum = 0;
	progressBar->Maximum = DList.getSize(); // Set the maximum value
	progressBar->Step = 1; // Set the step value
	progressBar->Value = 0; // Set the initial value
	progressBar->Location = System::Drawing::Point(10, 30);
	progressBar->Width = 200; // Set the width
	progressForm->Controls->Add(progressBar);

	// Set the size of the progress form
	progressForm->Width = 240;
	progressForm->Height = 120;

	System::Drawing::Point formLocation = this->Location;
	formLocation.X += (this->Width - progressForm->Width) / 2;
	formLocation.Y += (this->Height - progressForm->Height) / 2;
	// Set the location of the progress form in the center of the main form
	progressForm->Location = formLocation;
	//позбавляю кнопок
	progressForm->ControlBox = false;
	progressForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	progressForm->ShowIcon = false;
	progressForm->ShowInTaskbar = false;
	progressForm->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
	progressForm->TopMost = true;

	// Show the progress form
	progressForm->Show();

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
	int DListSize = DList.getSize(); // Cache the size to avoid multiple calls
	if (DListSize > 0) {
		for (int i = 0; i < DListSize; i++) {
			auto currentSong = DList[i];

			// Update progress bar value
			progressBar->Value = i + 1;


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
		//System::Threading::Thread::Sleep(50);

		// Refresh the progress form to update the display
		Application::DoEvents();
		}
	}

	// Close the progress form after completion
	progressForm->Close();

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

	// Set font for the table layout panel
	tlpTable->Font = fontDialog->Font;

	// Iterate through all controls on the form and set the font
	for each (Control ^ control in this->Controls)
	{
		control->Font = fontDialog->Font;
	}

	// Iterate through items in the context menu and set the font
	for each (ToolStripItem ^ item in cmsMenu->Items)
	{
		item->Font = fontDialog->Font;
	}

	// Check if the font size is greater than 12
	if (fontDialog->Font->Size > 12)
	{
		// Set font size to 12
		System::Drawing::Font^ newFont = gcnew System::Drawing::Font("Microsoft Sans Serif", 12);

		// Set font for the table layout panel
		tlpTable->Font = newFont;

		// Iterate through all controls on the form and set the font
		for each (Control ^ control in this->Controls)
		{
			control->Font = newFont;
		}

		// Iterate through items in the context menu and set the font
		for each (ToolStripItem ^ item in cmsMenu->Items)
		{
			item->Font = newFont;
		}
	}

	return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiTheme_Click(System::Object^ sender, System::EventArgs^ e)
{
	ColorDialog^ colorDialog = gcnew ColorDialog();
	colorDialog->ShowDialog();

	// Set background color for the table layout panel
	tlpTable->BackColor = colorDialog->Color;

	// Determine contrasting color for text using colorDialog->Color
	int r = colorDialog->Color.R;
	int g = colorDialog->Color.G;
	int b = colorDialog->Color.B;
	int contrast = (r * 299 + g * 587 + b * 114) / 1000;

	// Determine contrasting color for text
	Color textColor = (contrast > 125) ? System::Drawing::Color::Black : System::Drawing::Color::White;

	// Iterate through all controls on the form and set the background and text color
	for each (Control ^ control in this->Controls)
	{
		if (dynamic_cast<TextBox^>(control) != nullptr)
		{
			// Set TextBox background color to white
			control->BackColor = System::Drawing::Color::White;
		}
		else
		{
			// Set other controls' background color to the chosen color
			control->BackColor = colorDialog->Color;
		}

		control->ForeColor = textColor;
	}

	// Iterate through items in the context menu and set the background and text color
	for each (ToolStripItem ^ item in cmsMenu->Items)
	{
		item->BackColor = colorDialog->Color;
		item->ForeColor = textColor;
	}

	// Iterate through items in tbMenu and set the background and text color
	for each (ToolStripItem ^ item in tbMenu->Items)
	{
		item->BackColor = colorDialog->Color;
		item->ForeColor = textColor;
	}

	// Iterate through items in msFile (ToolStripDropDownButton) and set the background and text color
	for each (ToolStripItem ^ item in msFile->DropDownItems)
	{
		item->BackColor = colorDialog->Color;
		item->ForeColor = textColor;
	}

	// Iterate through items in msSort (ToolStripDropDownButton) and set the background and text color
	for each (ToolStripItem ^ item in msSort->DropDownItems)
	{
		item->BackColor = colorDialog->Color;
		item->ForeColor = textColor;
	}

	// Iterate through items in tsddbStyle (ToolStripDropDownButton) and set the background and text color
	for each (ToolStripItem ^ item in tsddbStyle->DropDownItems)
	{
		item->BackColor = colorDialog->Color;
		item->ForeColor = textColor;
	}

	// Set render mode to Professional to force color changes
	if (cmsMenu->Renderer != nullptr)
	{
		ToolStripProfessionalRenderer^ renderer = gcnew ToolStripProfessionalRenderer();
		renderer->ColorTable->UseSystemColors = false;
		cmsMenu->Renderer = renderer;
	}

	return System::Void();
}

System::Void KursovaOOP::Kursova::tsddmSelect_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::String^ text = tsddmtbSelect->Text;

	try {
		int index = Convert::ToInt32(text);

		if (index > 0 && index <= Current->getSize()) {
			Song& song = Current->at(index - 1).data;

			std::wstring songersString;
			for (int i = 0; i < song.getSongers().size(); i++) {
				if (i > 0) {
					songersString += L", ";
				}
				songersString += song.getSongers()[i];
			}
			tsddmtbSongers->Text = gcnew String(songersString.c_str());
			tsddmtbName->Text = gcnew String(song.getName().c_str());
			tsddmtbAlbom->Text = gcnew String(song.getAlbom().c_str());
			tsddmtbYear->Text = song.getYear().ToString();
			tsddmtbDuration->Text = song.getDuration().ToString();
			tsddmtbFormat->Text = gcnew String(song.getFormat().c_str());
			tsddmtbSize->Text = song.getSize().ToString();
			tsddmtbIsImport->Text = song.getIsImport() ? L"Так" : L"Ні";
		}
		else {
			MessageBox::Show(L"Неправильний індекс. Введіть правельний");
		}
	}
	catch (System::FormatException^) {
		MessageBox::Show(L"Неправильинй формат. Введіть число");
	}

	return System::Void();
}

System::Void KursovaOOP::Kursova::cmsEdit_Click(System::Object^ sender, System::EventArgs^ e)
{

	System::String^ text = tsddmtbSelect->Text;
	int index = Convert::ToInt32(text);

	Song& song = Current->at(index-1).data;

	// Дані про виконавців
	if (!String::IsNullOrEmpty(tsddmtbSongers->Text))
	{
		std::vector<std::wstring> songers;
		// Виконавці розділені комою
		std::wstring songersString = msclr::interop::marshal_as<std::wstring>(tsddmtbSongers->Text);
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
		song.setSongers(songers);
	}

	// Дані про назву
	if (!String::IsNullOrEmpty(tsddmtbName->Text))
	{
		std::wstring name = msclr::interop::marshal_as<std::wstring>(tsddmtbName->Text);
		song.setName(name);
	}

	// Дані про альбом
	if (!String::IsNullOrEmpty(tsddmtbAlbom->Text))
	{
		std::wstring albom = msclr::interop::marshal_as<std::wstring>(tsddmtbAlbom->Text);
		song.setAlbom(albom);
	}

	// Дані про рік
	if (!String::IsNullOrEmpty(tsddmtbYear->Text))
	{
		int year;
		if (Int32::TryParse(tsddmtbYear->Text, year)) {
			song.setYear(year);
		}
		else {
			MessageBox::Show(L"Введіть правильний рік");
			return;
		}
	}

	// Дані про тривалість
	if (!String::IsNullOrEmpty(tsddmtbDuration->Text))
	{
		double duration;
		if (Double::TryParse(tsddmtbDuration->Text, duration)) {
			song.setDuration(duration);
		}
		else {
			MessageBox::Show(L"Введіть правильну тривалість");
			return;
		}
	}

	// Дані про формат
	if (!String::IsNullOrEmpty(tsddmtbFormat->Text))
	{
		std::wstring format = msclr::interop::marshal_as<std::wstring>(tsddmtbFormat->Text);
		song.setFormat(format);
	}

	// Дані про розмір
	if (!String::IsNullOrEmpty(tsddmtbSize->Text))
	{
		double size;
		if (Double::TryParse(tsddmtbSize->Text, size)) {
			song.setSize(size);
		}
		else {
			MessageBox::Show(L"Введіть правильний розмір");
			return;
		}
	}

	// Дані про зарубіжність
	if (!String::IsNullOrEmpty(tsddmtbIsImport->Text))
	{
		std::wstring isImport = msclr::interop::marshal_as<std::wstring>(tsddmtbIsImport->Text);
		if (isImport == L"Так") {
			song.setIsImport(true);
		}
		else
		{
			song.setIsImport(false);
		}
	}

	UpdateTable(*Current);
	return System::Void();
}



