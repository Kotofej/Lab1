#include "MyForm.h"
#include "MyForm.h"
#include <Windows.h>
#include "cmath"
using namespace Lab1; // Project name
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}