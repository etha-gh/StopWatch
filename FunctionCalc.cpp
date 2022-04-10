#include "pch.h"
#include "FunctionCalc_mainForm.h"

using namespace FunctionCalc;
using namespace System;

[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew FunctionCalc_mainForm());

    return 0;
}
