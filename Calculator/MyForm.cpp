#include "MyForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
[STAThreadAttribute]

void Main(cli::array<String^> ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::MyForm form;
	Application::Run(%form);}
