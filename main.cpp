#include "Kursova.h"
using namespace System;
using namespace System::Windows::Forms;





[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    //Dlist<Song> dlist;

    //std::ifstream in;
    //in.open("SongIn.txt", std::ios::in);   
    //in >> dlist;//проблема в цій частині коду
    //in.close();



    //std::ofstream out;
    //out.open("SongOut.txt", std::ios::out | std::ios::app);
    //out << dlist;//проблема в цій частині коду
    //out.close();


    KursovaOOP::Kursova Interface;
    Application::Run(% Interface);

    return 0; // Повертаємо 0, щоб позначити успішне завершення програми
}



