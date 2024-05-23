#include "MyForm.h"
#include <Windows.h>

using namespace Proje1;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm1);
    return 0;
}
     

