#include "pch.h"
#include "StopWatch_mainForm.h"

using namespace System;
using namespace StopWatchver10;

[STAThreadAttribute]

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew StopWatch_mainForm());
	return 0;
}