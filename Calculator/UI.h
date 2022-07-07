#pragma once
#include <cmath>
#include "MathsDll.h"
#include "iostream"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UI.0
	/// </summary>
	public ref class UI : public System::Windows::Forms::Form
	{
	public:
		UI(void)
		{
			InitializeComponent();
			MainTextBox->Focus();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UI()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(943, 398);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"UI";
			this->ShowIcon = false;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &UI::UI_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

		bool First, Second, AndOr, Result2, IntToDoubleFlag;
		double FirstNum, SecondNum, Result, Memory;
		String^ Operator;
		bool flag = false;
		char *str;
	private: System::Void СutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Clipboard::SetText(MainTextBox->Text);
		MainTextBox->Clear();
	}
	private: System::Void CopyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Clipboard::SetText(MainTextBox->Text);
	}
	private: System::Void PasteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MainTextBox->Text = Clipboard::GetText();
	}
	private: System::Void DeleteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MainTextBox->Text = "";
	}
	
	private: System::Void ExitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void NumClick(System::Object^  sender, System::EventArgs^  e) 
	{
		if(flag)
		{
			flag = false;
			MainTextBox->Clear();
		}
		Button^ Numbers = safe_cast <Button^> (sender);
		if (MainTextBox->Text == "0") 
		{
			MainTextBox->Text = Numbers->Text;
		}
		else 
		{
			if(MainTextBox->Text->Length != 45)
			{
				MainTextBox->Text = MainTextBox->Text + Numbers->Text; 
			}
		}
	}
	private: System::Void ClearEntry_Click(System::Object^  sender, System::EventArgs^  e) {
		MainTextBox->Clear();
	}
	private: System::Void ClearAll_Click(System::Object^  sender, System::EventArgs^  e) {
		MainTextBox->Clear();
		ShowOp->Text = "";
		FirstNum, SecondNum, Result = double();
		Operator = "";
	}
	private: System::Void Comma_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MainTextBox->Text->Length == 0) //если запятая вставлена первой, 
			MainTextBox->Text = Convert::ToString(MainTextBox->Text) + "0,"; // то добавляем спереди 0
		else
			if (MainTextBox->Text->IndexOf(',') == -1) //если запятая еще не стоит,
				MainTextBox->Text = Convert::ToString(MainTextBox->Text) + ","; // ставим
	}
	private: System::Void MathOP(System::Object^  sender, System::EventArgs^  e) {
		if (MainTextBox->Text != "") 
		{
			Equality_Click(Equality, e);
			Button^ MathOPs = safe_cast <Button^> (sender);
		    FirstNum = Double::Parse(MainTextBox->Text);
			MainTextBox->Text = "";
			Operator = MathOPs->Text;
			ShowOp->Text = System::Convert::ToString(FirstNum) + " " + Operator;
		}
		MainTextBox->Focus();
		flag = true;
	}
	private: System::Void PlusToMinus_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MainTextBox->Text != "") {
			if (MainTextBox->Text->Contains("-"))
			{
				MainTextBox->Text = MainTextBox->Text->Remove(0, 1);
			}
			else 
			{
				MainTextBox->Text = "-" + MainTextBox->Text;
			}
		}
	}
	private: System::Void Equality_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ShowOp->Text = "";
		if (MainTextBox->Text != "") 
		{
				SecondNum = Double::Parse(MainTextBox->Text);
				if (Operator == "+")
				{
					try
					{
						Result = MathFuncs::MyMathFuncs::Add(FirstNum, SecondNum);
						MainTextBox->Text = System::Convert::ToString(Result);
					}
					catch (invalid_argument &e)
					{
						MainTextBox->Clear();
						MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (Operator == "-")
				{
					try {
						Result = MathFuncs::MyMathFuncs::Sub(FirstNum, SecondNum);
						MainTextBox->Text = System::Convert::ToString(Result);
					}
					catch (invalid_argument &e)
					{
						MainTextBox->Clear();
						MessageBox::Show("Слишком маленькое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (Operator == "*")
				{
					try
					{
						Result = MathFuncs::MyMathFuncs::Mult(FirstNum, SecondNum);
						MainTextBox->Text = System::Convert::ToString(Result);
					}
					catch (invalid_argument &e)
					{
						MainTextBox->Clear();
						MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (Operator == "/")
				{
					try
					{
						Result = MathFuncs::MyMathFuncs::Div(FirstNum, SecondNum);
						MainTextBox->Text = System::Convert::ToString(Result);
					}
					catch (invalid_argument &e) // поймали 0
					{
						MainTextBox->Clear();
						//MessageBox::Show("Деление на ноль!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
						// MessageBox::Show( NULL, invalid_argument(str), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (Operator == "x^y")
				{
					try
					{
						Result = MathFuncs::MyMathFuncs::Pow(FirstNum, SecondNum);
						MainTextBox->Text = System::Convert::ToString(Result);
					}
					catch (invalid_argument &e)
					{
						MainTextBox->Clear();
						MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (Operator == "y sqrt (x)")
				{
					try
					{
						Result = MathFuncs::MyMathFuncs::Pow(FirstNum, 1 / SecondNum);
						MainTextBox->Text = System::Convert::ToString(Result);
					}
					catch (invalid_argument &e) 			
					{
						MainTextBox->Clear();
						MessageBox::Show("Корень из отрицательного числа!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				FirstNum, SecondNum, Result = double();
				Operator = "";
				MainTextBox->Focus();
				flag = true;
		}
	}
	private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (MainTextBox->Text->Length > 0) 
		{
			MainTextBox->Text = MainTextBox->Text->Remove(MainTextBox->Text->Length - 1, 1);
		}
	}
	private: System::Void MemoryClear_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		label1->Text = "";
		Result = 0;
		flag = true;
	}
	private: System::Void MemoryRead_Click(System::Object^  sender, System::EventArgs^  e) 
	{
			MainTextBox->Text = label1->Text;
			flag = true;
	}
	private: System::Void MemorySave_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (MainTextBox->Text != "") 
			label1->Text = MainTextBox->Text;
		flag = true;
	}
	private: System::Void MemoryPlus_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (MainTextBox->Text != "")
		{
			if (label1->Text == "")
			{
				try
				{
					Result += Convert::ToDouble(MainTextBox->Text);
					if (Result > DBL_MAX|| Result < DBL_MIN)
					{
						throw Result;
					}
					label1->Text = Convert::ToString(Result); 
				}
				catch (const double Result)
				{
					label1->Text = "";
					MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				try
				{
					Result = MathFuncs::MyMathFuncs::Add(Convert::ToDouble(label1->Text), Convert::ToDouble(MainTextBox->Text));
					label1->Text = Convert::ToString(Result);
				}
				catch (invalid_argument& e)
				{
					label1->Text = "";
					MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		flag = true;
	}
	private: System::Void MemoryMinus_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (MainTextBox->Text != "")
		{
			if (label1->Text == "")
			{
				try
				{
					Result -= Convert::ToDouble(MainTextBox->Text);
					if (Result < DBL_MIN || Result > DBL_MAX)
					{
						throw Result;
					}
					label1->Text = Convert::ToString(Result);
				}
				catch (const double Result)
				{
					label1->Text = "";
					MessageBox::Show("Слишком маленькое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				try
				{
					Result = MathFuncs::MyMathFuncs::Sub(Convert::ToDouble(label1->Text), Convert::ToDouble(MainTextBox->Text));
					label1->Text = Convert::ToString(Result);
				}
				catch (invalid_argument& e)
				{
					label1->Text = "";
					MessageBox::Show("Слишком маленькое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		flag = true;
	}
	private: System::Void TextBoxFilter(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
		if (e->KeyChar == '.') e->KeyChar = ',';
		if (IntToDoubleFlag == false)
		{
			if (MainTextBox->Text != "")
			{
				if (e->KeyChar == ',')
				{
					if (MainTextBox->Text->IndexOf(',') != -1)
						e->Handled = true;
					return;
				}
			}
		}
		if (e->KeyChar == '/')
		{
			MathOP(Division, e);
		}
		if (e->KeyChar == '*') 
		{
			MathOP(Multiplication, e);
		}
		if (e->KeyChar == '+') 
		{
			MathOP(Addition, e);
		}
		if (e->KeyChar == '-') 
		{
			MathOP(Substraction, e);
		}
		if (e->KeyChar == '=') 
		{
			MathOP(Substraction, e);
		}
		if (e->KeyChar == (char)13)
		{
			Equality_Click(Equality, e);
		}
		if (e->KeyChar == (char)Keys::Back) return;
		e->Handled = true;
	}
	private: System::Void SquareRoot_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (MainTextBox->Text != "")
		{
			try
			{
				FirstNum  = Double::Parse(MainTextBox->Text);
				Result = MathFuncs::MyMathFuncs::SQUART(FirstNum);
				MainTextBox->Text = System::Convert::ToString(Result);
			}
			catch (invalid_argument& e)
			{
				MainTextBox->Clear();
				MessageBox::Show("Корень из отрицательного числа!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		flag = true;
	}
	private: System::Void Percentage_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		try
		{
			FirstNum = Double::Parse(MainTextBox->Text);
			Result = MathFuncs::MyMathFuncs::Mult(FirstNum, 100);
			MainTextBox->Text = System::Convert::ToString(Result);
		}
		catch (invalid_argument& e)
		{
			MainTextBox->Clear();
			MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		flag = true;
	}
	
	private: System::Void BinOut(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void BinTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MainTextBox->Text != "")
	{
		try 
		{
			FirstNum = Double::Parse(MainTextBox->Text);
			Result = MathFuncs::MyMathFuncs::Pow(FirstNum, 2);
			MainTextBox->Text = System::Convert::ToString(Result);
		}
		catch (invalid_argument& e)
		{
			MainTextBox->Clear();
			MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	flag = true;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MainTextBox->Text != "")
	{
		try
		{
			FirstNum = Double::Parse(MainTextBox->Text);
			Result = MathFuncs::MyMathFuncs::Pow(FirstNum, 3);
			MainTextBox->Text = System::Convert::ToString(Result);
		}
		catch (invalid_argument& e)
		{
			MainTextBox->Clear();
			MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	flag = true;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MainTextBox->Text == "")
	{
		try
		{
			Result = MathFuncs::MyMathFuncs::Pow(10, 0);
			MainTextBox->Text = System::Convert::ToString(Result);
		}
		catch (invalid_argument& e)
		{
			MainTextBox->Clear();
			MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	} 
	else 
	{
		try
		{
			FirstNum = Double::Parse(MainTextBox->Text);
			Result = MathFuncs::MyMathFuncs::Pow(10, FirstNum);
			MainTextBox->Text = System::Convert::ToString(Result);
		}
		catch (invalid_argument& e)
		{
			MainTextBox->Clear();
			MessageBox::Show("Слишком большое значение!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	flag = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MainTextBox->Text != "") 
	{
		Equality_Click(Equality, e);
		Button^ MathOPs = safe_cast <Button^> (sender);
		FirstNum = Double::Parse(MainTextBox->Text);
		MainTextBox->Text = "";
		Operator = MathOPs->Text;
		ShowOp->Text = System::Convert::ToString(FirstNum) + " " + Operator;
	}
	MainTextBox->Focus();
	flag = true;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	/*
	if (MainTextBox->Text == "")
	{
		MessageBox::Show("Деление на ноль!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		FirstNum = Double::Parse(MainTextBox->Text);
		Result = MathFuncs::MyMathFuncs::Div(1, FirstNum);
		MainTextBox->Text = System::Convert::ToString(Result);
	}
	*/
	if (MainTextBox->Text != "")
	{
		try 
		{
			FirstNum = Double::Parse(MainTextBox->Text);
			Result = MathFuncs::MyMathFuncs::Div(1, FirstNum);
			MainTextBox->Text = System::Convert::ToString(Result);
		}
		catch (invalid_argument& e)
		{
			MessageBox::Show("Деление на ноль!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	flag = true;
}
private: System::Void UI_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MainTextBox->Text != "")
	{
		Clipboard::SetText(MainTextBox->Text);
		MainTextBox->Clear();
	}
}
private: System::Void toolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MainTextBox->Text != "")
	{
		Clipboard::SetText(MainTextBox->Text);
	}
}
private: System::Void toolStripMenuItem5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MainTextBox->Text != "")
	{
		MainTextBox->Text = Clipboard::GetText();
	}
	else 
	{
		MainTextBox->Text = "";
		MainTextBox->Text = Clipboard::GetText();
	}
}
private: System::Void toolStripMenuItem6_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (MainTextBox->Text != "")
	{
		MainTextBox->Text = "";
	}
}
private: System::Void toolStripMenuItem7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MessageBox::Show("Калькулятор; год 2018; версия 1.2; разработал Касимов Алексей", "О программе", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MessageBox::Show("Сложение, вычитание, умножение, деление, возведение в степень, извлечение корня, функции памяти.", "Задание", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
};
}
