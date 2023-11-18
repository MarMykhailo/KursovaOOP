#include "Kursova.h"
#include <msclr\marshal_cppstd.h>

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
		out << *songManager;
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
		in >> *songManager;
	}

	UpdateTable();

	return System::Void();
}

System::Void KursovaOOP::Kursova::UpdateTable()
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
    for (int i = 0; i < songManager->songList.getSize(); i++) {
        auto currentSong = songManager->songList[i];

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
        tlpTable->Controls->Add(songerLabel, 1, i + 1);

        Label^ nameLabel = gcnew Label();
        nameLabel->Text = gcnew String(currentSong.getName().c_str());
        nameLabel->AutoSize = true;
        tlpTable->Controls->Add(nameLabel, 2, i + 1);

        Label^ albomLabel = gcnew Label();
        albomLabel->Text = gcnew String(currentSong.getAlbom().c_str());
        albomLabel->AutoSize = true;
        tlpTable->Controls->Add(albomLabel, 3, i + 1);

        Label^ yearLabel = gcnew Label();
        yearLabel->Text = currentSong.getYear().ToString();
        yearLabel->AutoSize = true;
        tlpTable->Controls->Add(yearLabel, 4, i + 1);

        Label^ formatLabel = gcnew Label();
        formatLabel->Text = gcnew String(currentSong.getFormat().c_str());
        formatLabel->AutoSize = true;
        tlpTable->Controls->Add(formatLabel, 5, i + 1);

        Label^ sizeLabel = gcnew Label();
        sizeLabel->Text = currentSong.getSize().ToString();
        sizeLabel->AutoSize = true;
        tlpTable->Controls->Add(sizeLabel, 6, i + 1);

        Label^ isImportLabel = gcnew Label();
        isImportLabel->Text = currentSong.getIsImport() ? "Yes" : "No";
        isImportLabel->AutoSize = true;
        tlpTable->Controls->Add(isImportLabel, 7, i + 1);
    }

    // Встановити авто розмір для колонок і рядків
    tlpTable->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    tlpTable->AutoScroll = true;
    tlpTable->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowOnly;
}

System::Void KursovaOOP::Kursova::tsmiSSonger_Click(System::Object^ sender, System::EventArgs^ e)
{
    songManager->sort(CompareSongers);
    UpdateTable();
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSName_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareName);
    UpdateTable();
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSAlbom_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareAlbom);
    UpdateTable();
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSYear_Click(System::Object^ sender, System::EventArgs^ e)
{
    songManager->sort(CompareYear);
    UpdateTable();
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSFormat_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareFormat);
    UpdateTable();
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSSize_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareSize);
    UpdateTable();
    return System::Void();
}

System::Void KursovaOOP::Kursova::tsmiSImport_Click(System::Object^ sender, System::EventArgs^ e)
{
    //songManager->sort(CompareIsImport);
    UpdateTable();
    return System::Void();
}


