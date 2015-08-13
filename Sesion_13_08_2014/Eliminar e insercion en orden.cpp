// Sesion_13_08_2014.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "Form1.h"

using namespace Sesion_13_08_2014;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Habilitar los efectos visuales de Windows XP antes de crear ningún control
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Crear la ventana principal y ejecutarla
	Application::Run(gcnew Form1());
	return 0;
}
