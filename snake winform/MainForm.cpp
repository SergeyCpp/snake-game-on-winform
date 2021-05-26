#include "pch.h"
#include "MainForm.h"
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	snakewinform::MainForm form;
	Application::Run(% form);
}


System::Void snakewinform::MainForm::MainFormNewGameButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm^ form = gcnew MyForm();
    this->Hide();
    form->Show();
}

System::Void snakewinform::MainForm::MainFormExitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}
