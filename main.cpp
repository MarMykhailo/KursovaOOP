#include "Kursova.h"

using namespace System;
using namespace System::Windows::Forms;





[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);





    KursovaOOP::Kursova Interface;
    Application::Run(% Interface);

    return 0; // Повертаємо 0, щоб позначити успішне завершення програми
}



