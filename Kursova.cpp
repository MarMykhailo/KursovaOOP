#include "Kursova.h"

System::Void KursovaOOP::Kursova::msbFileOut_Click(System::Object^ sender, System::EventArgs^ e)
{
	//беру назу файла і додаю до ньоо .txt
	//записую в файл
	System::String^ managedString = mstbNameFileOut->Text;
	std::string stdString = msclr::interop::marshal_as<std::string>(managedString) + ".txt";

	std::ofstream out;

	out.open(stdString, std::ios::out);
	if (!out.is_open())
	{
		MessageBox::Show("Error");
	}
	else
	{
        //out << (*songManager);
        out.close();
	}
	return System::Void();
}

System::Void KursovaOOP::Kursova::msbFileIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	//беру назу файла і додаю до ньоо .txt
	//записую в файл
	System::String^ managedString = mstbNameFileIn->Text;
	std::string stdString = msclr::interop::marshal_as<std::string>(managedString) + ".txt";

	std::ifstream in;

	in.open(stdString, std::ios::out | std::ios::app);
	if (!in.is_open())
	{
		MessageBox::Show("Error");
	}
	else
	{
		//in >> (*songManager);
		in.close();
	}
    
	UpdateTable(songManager->songList);

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
    tlpTable->Controls->Add(lFormat, 5, 0);
    tlpTable->Controls->Add(lSize, 6, 0);
    tlpTable->Controls->Add(lIsImport, 7, 0);

    // Додати дані про пісні
    for (int i = 0; i < DList.getSize(); i++) {
        auto currentSong = DList[i];

        Label^ numberLabel = gcnew Label();
        numberLabel->Text = (i + 1).ToString();
        numberLabel->AutoSize = true;
        tlpTable->Controls->Add(numberLabel, 0, i + 1);

        std::string allSongers;
        for (int j = 0; j < currentSong.getSongers().size(); j++) {
            if (j > 0) {
                allSongers += ", ";
            }
            allSongers += currentSong.getSongers()[j];
        }

        Label^ songerLabel = gcnew Label();
        songerLabel->Text = gcnew String(allSongers.c_str());
        songerLabel->AutoSize = true;
        songerLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);  // Додайте обробник подій
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

        Label^ formatLabel = gcnew Label();
        formatLabel->Text = gcnew String(currentSong.getFormat().c_str());
        formatLabel->AutoSize = true;
        formatLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
        tlpTable->Controls->Add(formatLabel, 5, i + 1);

        Label^ sizeLabel = gcnew Label();
        sizeLabel->Text = currentSong.getSize().ToString();
        sizeLabel->AutoSize = true;
        sizeLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
        tlpTable->Controls->Add(sizeLabel, 6, i + 1);

        Label^ isImportLabel = gcnew Label();
        isImportLabel->Text = currentSong.getIsImport() ? "Yes" : "No";
        isImportLabel->AutoSize = true;
        isImportLabel->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
        tlpTable->Controls->Add(isImportLabel, 7, i + 1);
    }

    // Встановити авто розмір для колонок і рядків
    tlpTable->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    tlpTable->AutoScroll = true;
    tlpTable->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowOnly;
}

System::Void KursovaOOP::Kursova::tsmiSSonger_Click(System::Object^ sender, System::EventArgs^ e)
{
   // songManager->sort(CompareSongers);
    UpdateTable(songManager->songList);
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSName_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareName);
    UpdateTable(songManager->songList);
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSAlbom_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareAlbom);
    UpdateTable(songManager->songList);
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSYear_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareYear);
    UpdateTable(songManager->songList);
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSFormat_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareFormat);
    UpdateTable(songManager->songList);
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSSize_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareSize);
    UpdateTable(songManager->songList);
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSImport_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareIsImport);
    UpdateTable(songManager->songList);
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
		MessageBox::Show("Please enter an index to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Перевірка на коректний формат числа
	int deleteIndex;
	if (!Int32::TryParse(deleteIndexText, deleteIndex)) {
		MessageBox::Show("Invalid index. Please enter a valid integer.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Перевірка на допустимий діапазон індексів
	if (deleteIndex-1 < 0 || deleteIndex-1 >= songManager->songList.getSize()) {
		MessageBox::Show("Index out of range. Please enter a valid index.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Видалення пісні та оновлення таблиці
	songManager->songList.removeAt(deleteIndex - 1);
	UpdateTable(songManager->songList);
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
		std::vector<std::string> songers;
		// Виконавці розділені комою
		std::string songersString = msclr::interop::marshal_as<std::string>(cmstbSongers->Text);
		std::string delimiter = ",";
		size_t pos = 0;
		std::string token;
		while ((pos = songersString.find(delimiter)) != std::string::npos) {
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
		std::string name = msclr::interop::marshal_as<std::string>(cmstbName->Text);
		song->setName(name);
	}

	// Дані про альбом
	if (!String::IsNullOrEmpty(cmstbAlbom->Text))
	{
		std::string albom = msclr::interop::marshal_as<std::string>(cmstbAlbom->Text);
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
			// Обробка помилки, наприклад, виведення повідомлення користувачу або інше необхідне дійство
			// Наприклад, MessageBox::Show("Введіть правильний рік");
			return;
		}
	}

	// Дані про формат
	if (!String::IsNullOrEmpty(cmstbFormat->Text))
	{
		std::string format = msclr::interop::marshal_as<std::string>(cmstbFormat->Text);
		song->setFormat(format);
	}

	// Дані про розмір
	if (!String::IsNullOrEmpty(cmstbSize->Text))
	{
		int size;
		if (Int32::TryParse(cmstbSize->Text, size)) {
			song->setSize(size);
		}
		else {
			// Обробка помилки, наприклад, виведення повідомлення користувачу або інше необхідне дійство
			// Наприклад, MessageBox::Show("Введіть правильний розмір");
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
    return System::Void();
}

System::Void KursovaOOP::Kursova::bSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!String::IsNullOrEmpty(tbSearch->Text))
	{
		// Отримуємо рядок з TextBox
		String^ searchString = tbSearch->Text;

		// Перетворюємо в стандартний рядок C++
		std::string str = msclr::interop::marshal_as<std::string>(searchString);

		// Викликаємо функцію search з отриманим рядком
		songManager->search(str);

		// Оновлюємо таблицю з використанням тимчасового списку
		UpdateTable(songManager->tempList);
	}

	return System::Void();
}


//private: System::Void cmsAdd_Click(System::Object^ sender, System::EventArgs^ e) {
//	// Створіть нову форму (вікно)
//	Form^ newForm = gcnew Form();
//	newForm->Text = L"Нове вікно";
//
//	//заблокувати розміри вікна
//	newForm->MaximizeBox = false;
//	newForm->MinimizeBox = false;
//	newForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
//
//	newForm->Width = 250;
//	newForm->Height = 325;
//	// Додайте лейбли і текстові поля для виконавця, назви, альбому, року, формату, розміру та зарубіжності
//	Label^ label1 = gcnew Label();
//	label1->Text = L"Виконавець:";
//	label1->Location = System::Drawing::Point(10, 30);
//	newForm->Controls->Add(label1);
//
//	TextBox^ textBox1 = gcnew TextBox();
//	textBox1->Location = System::Drawing::Point(125, 30);
//	newForm->Controls->Add(textBox1);
//
//	Label^ label2 = gcnew Label();
//	label2->Text = L"Назва:";
//	label2->Location = System::Drawing::Point(10, 60);
//	newForm->Controls->Add(label2);
//
//	TextBox^ textBox2 = gcnew TextBox();
//	textBox2->Location = System::Drawing::Point(125, 60);
//	newForm->Controls->Add(textBox2);
//
//	Label^ label3 = gcnew Label();
//	label3->Text = L"Альбом:";
//	label3->Location = System::Drawing::Point(10, 90);
//	newForm->Controls->Add(label3);
//
//	TextBox^ textBox3 = gcnew TextBox();
//	textBox3->Location = System::Drawing::Point(125, 90);
//	newForm->Controls->Add(textBox3);
//
//	Label^ label4 = gcnew Label();
//	label4->Text = L"Рік:";
//	label4->Location = System::Drawing::Point(10, 120);
//	newForm->Controls->Add(label4);
//
//	TextBox^ textBox4 = gcnew TextBox();
//	textBox4->Location = System::Drawing::Point(125, 120);
//	newForm->Controls->Add(textBox4);
//
//	Label^ label5 = gcnew Label();
//	label5->Text = L"Формат:";
//	label5->Location = System::Drawing::Point(10, 150);  
//	newForm->Controls->Add(label5);
//
//	TextBox^ textBox5 = gcnew TextBox();
//	textBox5->Location = System::Drawing::Point(125, 150);
//	newForm->Controls->Add(textBox5);
//
//
//	Label^ label6 = gcnew Label();
//	label6->Text = L"Розмір:";
//	label6->Location = System::Drawing::Point(10, 180);
//	newForm->Controls->Add(label6);
//
//	TextBox^ textBox6 = gcnew TextBox();
//	textBox6->Location = System::Drawing::Point(125, 180);
//	newForm->Controls->Add(textBox6);
//
//	// Додайте чекбокс
//	CheckBox^ newCheckBox = gcnew CheckBox();
//	newCheckBox->Text = L"Зарубіжна";
//	newCheckBox->Location = System::Drawing::Point(75, 210);
//	newForm->Controls->Add(newCheckBox);
//
//	// Створіть нову кнопку "Додати"
//	Button^ addButton = gcnew Button();
//	addButton->Text = L"Додати";
//	addButton->Location = System::Drawing::Point(25, 240);
//	addButton->Click += gcnew System::EventHandler(this, &Kursova::btnAdd_Click);
//	newForm->Controls->Add(addButton);
//
//	// Створіть нову кнопку "Скасувати"
//	Button^ cancelButton = gcnew Button();
//	cancelButton->Text = L"Скасувати";
//	cancelButton->Location = System::Drawing::Point(125, 240);
//	cancelButton->Click += gcnew System::EventHandler(this, &Kursova::btnCancel_Click);
//	newForm->Controls->Add(cancelButton);
//
//	// Покажіть нове вікно
//	newForm->Show();
//}
//

//private: System::Void cmsDelete_Click(System::Object^ sender, System::EventArgs^ e) {
//	// Отримуємо елемент, на якому було клікнуто
//	Control^ clickedControl = tlpTable->GetChildAtPoint(tlpTable->PointToClient(Cursor->Position));
//
//	// Перевірка, чи це Label
//	Label^ clickedLabel = dynamic_cast<Label^>(clickedControl);
//
//	// Видаліть елемент (Label) з TableLayoutPanel
//	if (clickedLabel != nullptr) {
//		// Отримайте індекс рядка
//		int row = tlpTable->GetRow(clickedLabel);
//		MessageBox::Show("DELETE");
//
//
//		songManager->songList.removeAt(row);
//
//		// Оновіть відображення списку пісень
//		UpdateTable();
//	}
//}

//private: System::Void tlpTable_Click(System::Object^ sender, System::EventArgs^ e) {
//	// Перевірка, чи подія відноситься до клікання мишкою
//	if (e->GetType() == System::Windows::Forms::MouseEventArgs::typeid) {
//		System::Windows::Forms::MouseEventArgs^ mouseEvent = (System::Windows::Forms::MouseEventArgs^)e;
//
//		// Перевірка, чи клацнуто правою кнопкою миші
//		if (mouseEvent->Button == System::Windows::Forms::MouseButtons::Right) {
//			// Ваш код для відображення контекстного меню
//			cmsMenu->Show(tlpTable, mouseEvent->Location);
//		}
//		else if (mouseEvent->Button == System::Windows::Forms::MouseButtons::Left) {
//			// Змінення фону всіх лейблів на білий перед тим, як підсвічувати поточний рядок
//			for (int i = 0; i < tlpTable->ColumnCount; i++) {
//				for (int j = 0; j < tlpTable->RowCount; j++) {
//					Control^ labelInTable = tlpTable->GetControlFromPosition(i, j);
//					if (labelInTable != nullptr && labelInTable->GetType() == Label::typeid) {
//						labelInTable->BackColor = System::Drawing::Color::White;
//					}
//				}
//			}
//
//			// Визначення елемента, на якому було клікнуто
//			Control^ clickedControl = tlpTable->GetChildAtPoint(tlpTable->PointToClient(mouseEvent->Location));
//
//			// Перевірка, чи це Label
//			if (clickedControl != nullptr && clickedControl->GetType() == Label::typeid) {
//				// Отримайте індекс рядка та стовпця
//				int row = tlpTable->GetRow(clickedControl);
//				int column = tlpTable->GetColumn(clickedControl);
//
//				// Змініть колір фону лейблу на синій
//				clickedControl->BackColor = System::Drawing::Color::Blue;
//
//				// Змініть колір фону всіх лейблів у поточному рядку
//				for (int i = 0; i < tlpTable->ColumnCount; i++) {
//					Control^ labelInCurrentRow = tlpTable->GetControlFromPosition(i, row);
//					if (labelInCurrentRow != nullptr && labelInCurrentRow->GetType() == Label::typeid) {
//						labelInCurrentRow->BackColor = System::Drawing::Color::Blue;
//					}
//				}
//
//				// Ваш код для обробки кліку на Label у конкретному рядку та стовпці
//				this->bSearch->Text = " " + (row + 1).ToString() + " ";
//			}
//		}
//	}
//}


