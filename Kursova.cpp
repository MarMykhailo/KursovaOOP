#include "Kursova.h"
#include <msclr\marshal_cppstd.h>

System::Void KursovaOOP::Kursova::msbFileOut_Click(System::Object^ sender, System::EventArgs^ e)
{
	//беру назу файла і додаю до ньоо .txt
	//записую в файл
	System::String^ managedString = mstbFileNameOut->Text;
	std::string stdString = msclr::interop::marshal_as<std::string>(managedString) + ".txt";

	//std::fstream fout;

	//fout.open(stdString, std::ios::out);
	//if (!fout.is_open())
	//{
	//	MessageBox::Show("Error");
	//}
	//else
	//{
	//	//fout << *songManager;
	//}



	return System::Void();
}

System::Void KursovaOOP::Kursova::msbFileIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	//беру назу файла і додаю до ньоо .txt
	//записую в файл
	System::String^ managedString = mstbFileNameOut->Text;
	std::string stdString = msclr::interop::marshal_as<std::string>(managedString) + ".txt";

	//std::fstream fin;

	//fin.open(stdString, std::ios::in);
	//if (!fin.is_open())
	//{
	//	MessageBox::Show("Error");
	//}
	//else
	//{
	//	//fin >> *songManager;
	//}


	return System::Void();
}

System::Void KursovaOOP::Kursova::UpdateTable()
{


	return System::Void();
}
