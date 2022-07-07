#pragma once
#include "MathsDll.h"
#include "iostream"
#include "string"
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
#include <stdio.h>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <windows.h>
#include <bitset>


namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			textBox1->Focus();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button6;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ plusandmin;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ skob2;
	private: System::Windows::Forms::Button^ skob1;
	private: System::Windows::Forms::Button^ ninth;
	private: System::Windows::Forms::Button^ eighth;
	private: System::Windows::Forms::Button^ seventh;
	private: System::Windows::Forms::Button^ step;
	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Button^ umn;
	private: System::Windows::Forms::Button^ sixth;
	private: System::Windows::Forms::Button^ fifth;
	private: System::Windows::Forms::Button^ fourth;
	private: System::Windows::Forms::Button^ sq;
	private: System::Windows::Forms::Button^ min;
	private: System::Windows::Forms::Button^ third;
	private: System::Windows::Forms::Button^ second;
	private: System::Windows::Forms::Button^ firs;
	private: System::Windows::Forms::Button^ Backspace;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Programmer;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->plusandmin = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->skob2 = (gcnew System::Windows::Forms::Button());
			this->skob1 = (gcnew System::Windows::Forms::Button());
			this->ninth = (gcnew System::Windows::Forms::Button());
			this->eighth = (gcnew System::Windows::Forms::Button());
			this->seventh = (gcnew System::Windows::Forms::Button());
			this->step = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->umn = (gcnew System::Windows::Forms::Button());
			this->sixth = (gcnew System::Windows::Forms::Button());
			this->fifth = (gcnew System::Windows::Forms::Button());
			this->fourth = (gcnew System::Windows::Forms::Button());
			this->sq = (gcnew System::Windows::Forms::Button());
			this->min = (gcnew System::Windows::Forms::Button());
			this->third = (gcnew System::Windows::Forms::Button());
			this->second = (gcnew System::Windows::Forms::Button());
			this->firs = (gcnew System::Windows::Forms::Button());
			this->Backspace = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Programmer = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(362, 263);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 35);
			this->button6->TabIndex = 32;
			this->button6->Text = L"Справка";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(474, 263);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 35);
			this->button3->TabIndex = 31;
			this->button3->Text = L"О программе";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::SystemColors::Control;
			this->plus->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->plus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->plus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->Location = System::Drawing::Point(226, 204);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(45, 88);
			this->plus->TabIndex = 29;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// plusandmin
			// 
			this->plusandmin->BackColor = System::Drawing::SystemColors::Control;
			this->plusandmin->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->plusandmin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->plusandmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->plusandmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plusandmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusandmin->Location = System::Drawing::Point(138, 248);
			this->plusandmin->Name = L"plusandmin";
			this->plusandmin->Size = System::Drawing::Size(45, 45);
			this->plusandmin->TabIndex = 28;
			this->plusandmin->Text = L"+/-";
			this->plusandmin->UseVisualStyleBackColor = false;
			this->plusandmin->Click += gcnew System::EventHandler(this, &MyForm::plusandmin_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(94, 248);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 45);
			this->button5->TabIndex = 27;
			this->button5->Text = L",";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(50, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 45);
			this->button4->TabIndex = 26;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// skob2
			// 
			this->skob2->BackColor = System::Drawing::SystemColors::Control;
			this->skob2->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->skob2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->skob2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->skob2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->skob2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skob2->Location = System::Drawing::Point(226, 116);
			this->skob2->Name = L"skob2";
			this->skob2->Size = System::Drawing::Size(45, 45);
			this->skob2->TabIndex = 25;
			this->skob2->Text = L")";
			this->skob2->UseVisualStyleBackColor = false;
			this->skob2->Click += gcnew System::EventHandler(this, &MyForm::skob2_Click);
			// 
			// skob1
			// 
			this->skob1->BackColor = System::Drawing::SystemColors::Control;
			this->skob1->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->skob1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->skob1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->skob1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->skob1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->skob1->Location = System::Drawing::Point(182, 116);
			this->skob1->Name = L"skob1";
			this->skob1->Size = System::Drawing::Size(45, 45);
			this->skob1->TabIndex = 24;
			this->skob1->Text = L"(";
			this->skob1->UseVisualStyleBackColor = false;
			this->skob1->Click += gcnew System::EventHandler(this, &MyForm::skob1_Click);
			// 
			// ninth
			// 
			this->ninth->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->ninth->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->ninth->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->ninth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ninth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ninth->Location = System::Drawing::Point(138, 116);
			this->ninth->Name = L"ninth";
			this->ninth->Size = System::Drawing::Size(45, 45);
			this->ninth->TabIndex = 23;
			this->ninth->Text = L"9";
			this->ninth->UseVisualStyleBackColor = true;
			this->ninth->Click += gcnew System::EventHandler(this, &MyForm::ninth_Click);
			// 
			// eighth
			// 
			this->eighth->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->eighth->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->eighth->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->eighth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eighth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eighth->Location = System::Drawing::Point(94, 116);
			this->eighth->Name = L"eighth";
			this->eighth->Size = System::Drawing::Size(45, 45);
			this->eighth->TabIndex = 22;
			this->eighth->Text = L"8";
			this->eighth->UseVisualStyleBackColor = true;
			this->eighth->Click += gcnew System::EventHandler(this, &MyForm::eighth_Click);
			// 
			// seventh
			// 
			this->seventh->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->seventh->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->seventh->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->seventh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->seventh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seventh->Location = System::Drawing::Point(50, 116);
			this->seventh->Name = L"seventh";
			this->seventh->Size = System::Drawing::Size(45, 45);
			this->seventh->TabIndex = 21;
			this->seventh->Text = L"7";
			this->seventh->UseVisualStyleBackColor = true;
			this->seventh->Click += gcnew System::EventHandler(this, &MyForm::seventh_Click);
			// 
			// step
			// 
			this->step->BackColor = System::Drawing::SystemColors::Control;
			this->step->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->step->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->step->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->step->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->step->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->step->Location = System::Drawing::Point(182, 116);
			this->step->Name = L"step";
			this->step->Size = System::Drawing::Size(45, 45);
			this->step->TabIndex = 20;
			this->step->Text = L"x^";
			this->step->UseVisualStyleBackColor = false;
			this->step->Click += gcnew System::EventHandler(this, &MyForm::step_Click);
			// 
			// del
			// 
			this->del->BackColor = System::Drawing::SystemColors::Control;
			this->del->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->del->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->del->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del->Location = System::Drawing::Point(226, 160);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(45, 45);
			this->del->TabIndex = 30;
			this->del->Text = L"/";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			// 
			// umn
			// 
			this->umn->BackColor = System::Drawing::SystemColors::Control;
			this->umn->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->umn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->umn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->umn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->umn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->umn->Location = System::Drawing::Point(182, 160);
			this->umn->Name = L"umn";
			this->umn->Size = System::Drawing::Size(45, 45);
			this->umn->TabIndex = 19;
			this->umn->Text = L"*";
			this->umn->UseVisualStyleBackColor = false;
			this->umn->Click += gcnew System::EventHandler(this, &MyForm::umn_Click);
			// 
			// sixth
			// 
			this->sixth->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->sixth->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->sixth->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->sixth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sixth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sixth->Location = System::Drawing::Point(138, 160);
			this->sixth->Name = L"sixth";
			this->sixth->Size = System::Drawing::Size(45, 45);
			this->sixth->TabIndex = 18;
			this->sixth->Text = L"6";
			this->sixth->UseVisualStyleBackColor = true;
			this->sixth->Click += gcnew System::EventHandler(this, &MyForm::sixth_Click);
			// 
			// fifth
			// 
			this->fifth->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->fifth->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->fifth->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->fifth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fifth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fifth->Location = System::Drawing::Point(94, 160);
			this->fifth->Name = L"fifth";
			this->fifth->Size = System::Drawing::Size(45, 45);
			this->fifth->TabIndex = 17;
			this->fifth->Text = L"5";
			this->fifth->UseVisualStyleBackColor = true;
			this->fifth->Click += gcnew System::EventHandler(this, &MyForm::fifth_Click);
			// 
			// fourth
			// 
			this->fourth->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->fourth->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->fourth->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->fourth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fourth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourth->Location = System::Drawing::Point(50, 160);
			this->fourth->Name = L"fourth";
			this->fourth->Size = System::Drawing::Size(45, 45);
			this->fourth->TabIndex = 16;
			this->fourth->Text = L"4";
			this->fourth->UseVisualStyleBackColor = true;
			this->fourth->Click += gcnew System::EventHandler(this, &MyForm::fourth_Click);
			// 
			// sq
			// 
			this->sq->BackColor = System::Drawing::SystemColors::Control;
			this->sq->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->sq->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->sq->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->sq->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sq->Location = System::Drawing::Point(226, 116);
			this->sq->Name = L"sq";
			this->sq->Size = System::Drawing::Size(45, 45);
			this->sq->TabIndex = 15;
			this->sq->Text = L"√x";
			this->sq->UseVisualStyleBackColor = false;
			this->sq->Click += gcnew System::EventHandler(this, &MyForm::sq_Click);
			// 
			// min
			// 
			this->min->BackColor = System::Drawing::SystemColors::Control;
			this->min->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->min->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->min->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->min->Location = System::Drawing::Point(182, 204);
			this->min->Name = L"min";
			this->min->Size = System::Drawing::Size(45, 88);
			this->min->TabIndex = 14;
			this->min->Text = L"-";
			this->min->UseVisualStyleBackColor = false;
			this->min->Click += gcnew System::EventHandler(this, &MyForm::min_Click);
			// 
			// third
			// 
			this->third->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->third->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->third->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->third->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->third->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->third->Location = System::Drawing::Point(138, 204);
			this->third->Name = L"third";
			this->third->Size = System::Drawing::Size(45, 45);
			this->third->TabIndex = 13;
			this->third->Text = L"3";
			this->third->UseVisualStyleBackColor = true;
			this->third->Click += gcnew System::EventHandler(this, &MyForm::third_Click);
			// 
			// second
			// 
			this->second->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->second->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->second->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->second->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->second->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->second->Location = System::Drawing::Point(94, 204);
			this->second->Name = L"second";
			this->second->Size = System::Drawing::Size(45, 45);
			this->second->TabIndex = 12;
			this->second->Text = L"2";
			this->second->UseVisualStyleBackColor = true;
			this->second->Click += gcnew System::EventHandler(this, &MyForm::second_Click);
			// 
			// firs
			// 
			this->firs->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->firs->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->firs->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->firs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->firs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firs->Location = System::Drawing::Point(50, 204);
			this->firs->Name = L"firs";
			this->firs->Size = System::Drawing::Size(45, 45);
			this->firs->TabIndex = 11;
			this->firs->Text = L"1";
			this->firs->UseVisualStyleBackColor = true;
			this->firs->Click += gcnew System::EventHandler(this, &MyForm::firs_Click);
			// 
			// Backspace
			// 
			this->Backspace->BackColor = System::Drawing::SystemColors::Control;
			this->Backspace->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->Backspace->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->Backspace->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->Backspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Backspace->Location = System::Drawing::Point(6, 116);
			this->Backspace->Name = L"Backspace";
			this->Backspace->Size = System::Drawing::Size(45, 45);
			this->Backspace->TabIndex = 10;
			this->Backspace->Text = L"Bs";
			this->Backspace->UseVisualStyleBackColor = false;
			this->Backspace->Click += gcnew System::EventHandler(this, &MyForm::Backspace_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Crimson;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumVioletRed;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleVioletRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(6, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 45);
			this->button2->TabIndex = 9;
			this->button2->Text = L"CE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(6, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(265, 24);
			this->label1->TabIndex = 8;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(6, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 90);
			this->button1->TabIndex = 7;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(6, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(265, 29);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// Programmer
			// 
			this->Programmer->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->Programmer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Programmer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Programmer->Location = System::Drawing::Point(6, 12);
			this->Programmer->Name = L"Programmer";
			this->Programmer->Size = System::Drawing::Size(133, 35);
			this->Programmer->TabIndex = 33;
			this->Programmer->Text = L"Программист";
			this->Programmer->UseVisualStyleBackColor = true;
			this->Programmer->Click += gcnew System::EventHandler(this, &MyForm::Programmer_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(406, 84);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(168, 35);
			this->button7->TabIndex = 34;
			this->button7->Text = L"Конвертировать";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(313, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(261, 29);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox2_MouseClick);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(309, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 20);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Представление в 10ой с/с";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(309, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 27);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Представление в 2ой с/с";
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(474, 188);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 35);
			this->button8->TabIndex = 34;
			this->button8->Text = L"ROR";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(313, 188);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 35);
			this->button9->TabIndex = 34;
			this->button9->Text = L"ROL";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Location = System::Drawing::Point(310, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(265, 23);
			this->label4->TabIndex = 36;
			this->label4->Text = L"0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(419, 191);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 29);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"1";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label5->Location = System::Drawing::Point(309, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(265, 23);
			this->label5->TabIndex = 36;
			this->label5->Text = L"0";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(310, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 27);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Сдвиг от исходного числа";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 304);
			this->Controls->Add(this->sq);
			this->Controls->Add(this->step);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->Programmer);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->plusandmin);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->ninth);
			this->Controls->Add(this->eighth);
			this->Controls->Add(this->seventh);
			this->Controls->Add(this->del);
			this->Controls->Add(this->umn);
			this->Controls->Add(this->sixth);
			this->Controls->Add(this->fifth);
			this->Controls->Add(this->fourth);
			this->Controls->Add(this->min);
			this->Controls->Add(this->third);
			this->Controls->Add(this->second);
			this->Controls->Add(this->firs);
			this->Controls->Add(this->Backspace);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->skob1);
			this->Controls->Add(this->skob2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool procalc = false;
		unsigned long long int a = 0, tl = 0, tr = 0, t = 0, d = 1;
		int n = 100;
		bool dot = false,
			digit = false,
			znak = false,
			plusminus = false,
			firstdigit = true;


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ c = textBox1->Text;
		std::string c1 = marshal_as<std::string>(c);
		int n = c1.length();
		char* str = new char[n];
		strcpy(str, c1.c_str());

		for (int i = 0; i < n; i++)
		{
			if (str[i] == ',') str[i] = '.';
		}

		try {
			double result = MathFuncs::MyMathFuncs::eval(str);

			String^ p = "не число";

			if (result == INFINITY) {
				throw std::invalid_argument("Действия с бесконечностью исключены!");
			}
			if (result.ToString() == p) {
				throw std::invalid_argument("Корень из отрицательного числа");
			}
			label1->Text = textBox1->Text;
			textBox1->Text = result.ToString();

		}
		catch (const std::overflow_error& e)
		{
			textBox1->Clear();
			label1->Text = "";
			MessageBox::Show(gcnew System::String(e.what()), gcnew System::String("Ошибка"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		catch (const std::invalid_argument& e)
		{
			textBox1->Clear();
			label1->Text = "";
			MessageBox::Show(gcnew System::String(e.what()), gcnew System::String("Ошибка"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //кнопка 0
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];

		if (firstdigit && last == '0') {
			textBox1->Focus();
			textBox1->SelectionStart = Left;
		}

		if (textBox1->Text == "" || znak) { //если ничего в поле нет, значит это будет первая цифра 
			firstdigit = true;
		}

		if (procalc == false)
		{
			if (firstdigit && last == '0') {
			}
			else {
				textBox1->Text = textBox1->Text + "0";
			}
			textBox1->Focus();
			textBox1->SelectionStart = Left;
			digit = true;
			znak = false;
		}
		else {
			textBox2->Text = textBox2->Text + "0";
			textBox2->Focus();
			textBox2->SelectionStart = Left;
		}


	}
	private: System::Void firs_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];
		string newstr = SystemStringToString(text);

		if (firstdigit && last == '0') {
			newstr[lenght] = '1';
			textBox1->Text = StringToSystemString(newstr);
			textBox1->Focus();
			textBox1->SelectionStart = Right;
		}
		else {
			if (textBox1->Text == "0") { //если ничего в поле нет, значит первая цифра введена
				firstdigit = true;
			}
			else if (digit) firstdigit = false;
			else if (znak) firstdigit = true;

			if (procalc == false)
			{
				if (textBox1->Text == "0" && firstdigit) {
					textBox1->Text = "1";
				}
				else {
					textBox1->Text = textBox1->Text + "1";
				}

				textBox1->Focus();
				textBox1->SelectionStart = Left;
				digit = true;
				znak = false;
				//dot = false;
			}
			else {
				textBox2->Text = textBox2->Text + "1";
				textBox2->Focus();
				textBox2->SelectionStart = Left;
			}
		}
	}
	private: System::Void second_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];
		string newstr = SystemStringToString(text);

		if (firstdigit && last == '0') {
			newstr[lenght] = '2';
			textBox1->Text = StringToSystemString(newstr);
			textBox1->Focus();
			textBox1->SelectionStart = Right;
		}
		else {
		if (textBox1->Text == "0") { //если ничего в поле нет, значит первая цифра введена
			firstdigit = true;
		}
		else if (digit) firstdigit = false;
		else if (znak) firstdigit = true;

		if (procalc == false)
		{
			if (textBox1->Text == "0" && firstdigit) {
				textBox1->Text = "2";
			}
			else {
				textBox1->Text = textBox1->Text + "2";
			}

			textBox1->Focus();
			textBox1->SelectionStart = Left;
			digit = true;
			znak = false;
			//dot = false;
		}
		else {
			textBox2->Text = textBox2->Text + "2";
			textBox2->Focus();
			textBox2->SelectionStart = Left;
		}
		}
	}
	private: System::Void third_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];
		string newstr = SystemStringToString(text);

		if (firstdigit && last == '0') {
			newstr[lenght] = '3';
			textBox1->Text = StringToSystemString(newstr);
			textBox1->Focus();
			textBox1->SelectionStart = Right;
		}
		else {
			if (textBox1->Text == "0") { //если ничего в поле нет, значит первая цифра введена
				firstdigit = true;
			}
			else if (digit) firstdigit = false;
			else if (znak) firstdigit = true;

			if (procalc == false)
			{
				if (textBox1->Text == "0" && firstdigit) {
					textBox1->Text = "3";
				}
				else {
					textBox1->Text = textBox1->Text + "3";
				}

				textBox1->Focus();
				textBox1->SelectionStart = Left;
				digit = true;
				znak = false;
				//dot = false;
			}
			else {
				textBox2->Text = textBox2->Text + "3";
				textBox2->Focus();
				textBox2->SelectionStart = Left;
			}
		}
	}
	private: System::Void fourth_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];
		string newstr = SystemStringToString(text);

		if (firstdigit && last == '0') {
			newstr[lenght] = '4';
			textBox1->Text = StringToSystemString(newstr);
			textBox1->Focus();
			textBox1->SelectionStart = Right;
		}
		else {
			if (textBox1->Text == "0") { //если ничего в поле нет, значит первая цифра введена
				firstdigit = true;
			}
			else if (digit) firstdigit = false;
			else if (znak) firstdigit = true;

			if (procalc == false)
			{
				if (textBox1->Text == "0" && firstdigit) {
					textBox1->Text = "4";
				}
				else {
					textBox1->Text = textBox1->Text + "4";
				}

				textBox1->Focus();
				textBox1->SelectionStart = Left;
				digit = true;
				znak = false;
				//dot = false;
			}
			else {
				textBox2->Text = textBox2->Text + "4";
				textBox2->Focus();
				textBox2->SelectionStart = Left;
			}
		}
	}
	private: System::Void fifth_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];
		string newstr = SystemStringToString(text);

		if (firstdigit && last == '0') {
			newstr[lenght] = '5';
			textBox1->Text = StringToSystemString(newstr);
			textBox1->Focus();
			textBox1->SelectionStart = Right;
		}
		else {
			if (textBox1->Text == "0") { //если ничего в поле нет, значит первая цифра введена
				firstdigit = true;
			}
			else if (digit) firstdigit = false;
			else if (znak) firstdigit = true;

			if (procalc == false)
			{
				if (textBox1->Text == "0" && firstdigit) {
					textBox1->Text = "5";
				}
				else {
					textBox1->Text = textBox1->Text + "5";
				}

				textBox1->Focus();
				textBox1->SelectionStart = Left;
				digit = true;
				znak = false;
				//dot = false;
			}
			else {
				textBox2->Text = textBox2->Text + "5";
				textBox2->Focus();
				textBox2->SelectionStart = Left;
			}
		}
	}
	private: System::Void sixth_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];
		string newstr = SystemStringToString(text);

		if (firstdigit && last == '0') {
			newstr[lenght] = '6';
			textBox1->Text = StringToSystemString(newstr);
			textBox1->Focus();
			textBox1->SelectionStart = Right;
		}
		else {
			if (textBox1->Text == "0") { //если ничего в поле нет, значит первая цифра введена
				firstdigit = true;
			}
			else if (digit) firstdigit = false;
			else if (znak) firstdigit = true;

			if (procalc == false)
			{
				if (textBox1->Text == "0" && firstdigit) {
					textBox1->Text = "6";
				}
				else {
					textBox1->Text = textBox1->Text + "6";
				}

				textBox1->Focus();
				textBox1->SelectionStart = Left;
				digit = true;
				znak = false;
				//dot = false;
			}
			else {
				textBox2->Text = textBox2->Text + "6";
				textBox2->Focus();
				textBox2->SelectionStart = Left;
			}
		}
	}
	private: System::Void seventh_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];
		string newstr = SystemStringToString(text);

		if (firstdigit && last == '0') {
			newstr[lenght] = '7';
			textBox1->Text = StringToSystemString(newstr);
			textBox1->Focus();
			textBox1->SelectionStart = Right;
		}
		else {
			if (textBox1->Text == "0") { //если ничего в поле нет, значит первая цифра введена
				firstdigit = true;
			}
			else if (digit) firstdigit = false;
			else if (znak) firstdigit = true;

			if (procalc == false)
			{
				if (textBox1->Text == "0" && firstdigit) {
					textBox1->Text = "7";
				}
				else {
					textBox1->Text = textBox1->Text + "7";
				}

				textBox1->Focus();
				textBox1->SelectionStart = Left;
				digit = true;
				znak = false;
				//dot = false;
			}
			else {
				textBox2->Text = textBox2->Text + "7";
				textBox2->Focus();
				textBox2->SelectionStart = Left;
			}
		}
	}
	private: System::Void eighth_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];
		string newstr = SystemStringToString(text);

		if (firstdigit && last == '0') {
			newstr[lenght] = '8';
			textBox1->Text = StringToSystemString(newstr);
			textBox1->Focus();
			textBox1->SelectionStart = Right;
		}
		else {
			if (textBox1->Text == "0") { //если ничего в поле нет, значит первая цифра введена
				firstdigit = true;
			}
			else if (digit) firstdigit = false;
			else if (znak) firstdigit = true;

			if (procalc == false)
			{
				if (textBox1->Text == "0" && firstdigit) {
					textBox1->Text = "8";
				}
				else {
					textBox1->Text = textBox1->Text + "8";
				}

				textBox1->Focus();
				textBox1->SelectionStart = Left;
				digit = true;
				znak = false;
				//dot = false;
			}
			else {
				textBox2->Text = textBox2->Text + "8";
				textBox2->Focus();
				textBox2->SelectionStart = Left;
			}
		}
	}
	private: System::Void ninth_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];
		string newstr = SystemStringToString(text);

		if (firstdigit && last == '0') {
			newstr[lenght] = '9';
			textBox1->Text = StringToSystemString(newstr);
			textBox1->Focus();
			textBox1->SelectionStart = Right;
		}
		else {
			if (textBox1->Text == "0") { //если ничего в поле нет, значит первая цифра введена
				firstdigit = true;
			}
			else if (digit) firstdigit = false;
			else if (znak) firstdigit = true;

			if (procalc == false)
			{
				if (textBox1->Text == "0" && firstdigit) {
					textBox1->Text = "9";
				}
				else {
					textBox1->Text = textBox1->Text + "9";
				}

				textBox1->Focus();
				textBox1->SelectionStart = Left;
				digit = true;
				znak = false;
				//dot = false;
			}
			else {
				textBox2->Text = textBox2->Text + "9";
				textBox2->Focus();
				textBox2->SelectionStart = Left;
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //clear
		if (procalc == false)
		{
			textBox1->Text = "0";
			label1->Text = "";
			textBox1->Focus();
			textBox1->SelectionStart = Left;
		}
		else
		{
			textBox2->Clear();
			label5->Text = "";
			textBox2->Focus();
			textBox2->SelectionStart = Left;
		}
		dot = false;
		digit = false;
		dot = false;
		plusminus = false;
		firstdigit = false;
	}
			 string SystemStringToString(String^ text) {
				 return msclr::interop::marshal_as<std::string>(text);
			 }

			 String^ StringToSystemString(string str) {
				 String^ SString = gcnew String(str.c_str());
				 return SString;
			 }

	private: System::Void Backspace_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		if (lenght == 0) {
			textBox1->Text = "0";
			firstdigit = true;
		}
		String^ text = textBox1->Text;
		char last = textBox1->Text[lenght];


		switch (last) {
		case '+': case '-':case '/': case '*':case '^': {
			znak = true;
			digit = false;
			dot = false;
			break;
		}
		case '1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':case'0': {
			digit = true;
			znak = false;
			dot = false;
			break;
		}
		case ',': {
			dot = true;
			znak = false;
			digit = false;
			break;
		}
		}

		if(lenght!=0) textBox1->Clear();
		
		for (int i = 0; i < lenght; i++)
		{
			textBox1->Text = textBox1->Text + text[i];
		}
		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}
	private: System::Void skob1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*textBox1->Text = textBox1->Text + "(";
		textBox1->Focus();
		textBox1->SelectionStart = Left;*/
	}
	private: System::Void skob2_Click(System::Object^ sender, System::EventArgs^ e) {
		/*textBox1->Text = textBox1->Text + ")";
		textBox1->Focus();
		textBox1->SelectionStart = Left;*/
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {

		if (znak || dot) {
			Backspace_Click(Backspace, e);
			textBox1->Text = textBox1->Text + "+";
		}
		else if (plusminus) {
			textBox1->Text = textBox1->Text + ")";
			textBox1->Text = textBox1->Text + "+";
			plusminus = false;
		}
		else {
			textBox1->Text = textBox1->Text + "+";

		}
		znak = true;
		dot = false;
		digit = false;
		firstdigit = false;

		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}
	private: System::Void min_Click(System::Object^ sender, System::EventArgs^ e) { //минус
		if (znak) {
			Backspace_Click(Backspace, e);
			textBox1->Text = textBox1->Text + "-";
		}
		else if (plusminus) {
			textBox1->Text = textBox1->Text + ")";
			textBox1->Text = textBox1->Text + "-";
			plusminus = false;
		}
		else {
			textBox1->Text = textBox1->Text + "-";

		}
		znak = true;
		dot = false;
		digit = false;
		firstdigit = false;

		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}
	private: System::Void umn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (znak) {
			Backspace_Click(Backspace, e);
			textBox1->Text = textBox1->Text + "*";

		}
		else if (plusminus) {
			textBox1->Text = textBox1->Text + ")";
			textBox1->Text = textBox1->Text + "*";
			plusminus = false;
		}
		else {
			textBox1->Text = textBox1->Text + "*";

		}
		znak = true;
		dot = false;
		digit = false;
		firstdigit = false;

		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}
	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
		if (znak) {
			Backspace_Click(Backspace, e);
			textBox1->Text = textBox1->Text + "/";

		}
		else if (plusminus) {
			textBox1->Text = textBox1->Text + ")";
			textBox1->Text = textBox1->Text + "/";
			plusminus = false;
		}
		else {
			textBox1->Text = textBox1->Text + "/";

		}
		znak = true;
		dot = false;
		digit = false;
		firstdigit = false;

		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}
	private: System::Void step_Click(System::Object^ sender, System::EventArgs^ e) {
		if (znak) {
			Backspace_Click(Backspace, e);
			textBox1->Text = textBox1->Text + "^";

		}
		else if (plusminus) {
			textBox1->Text = textBox1->Text + ")";
			textBox1->Text = textBox1->Text + "^";
			plusminus = false;
		}
		else {
			textBox1->Text = textBox1->Text + "^";

		}
		znak = true;
		dot = false;
		digit = false;
		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}
	private: System::Void sq_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ first = textBox1->Text; //считываем начальный текст
		int lenght = textBox1->Text->Length;
		textBox1->Text = L"√(" + first + ")";
		textBox1->Focus();
		textBox1->SelectionStart = Left;
		button1_Click(button1, e);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { //dot
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;
		if (!dot) {
			if (textBox1->Text == "" || !isdigit(text[lenght])) {
				textBox1->Text = textBox1->Text + "0,";
				textBox1->Focus();
				textBox1->SelectionStart = Left;
				dot = true;
				digit = false;
				firstdigit = false;
				znak = false;
			}
			else if (znak) {
				textBox1->Text = textBox1->Text + ",";
				textBox1->Focus();
				textBox1->SelectionStart = Left;
				dot = true;
				digit = false;
				znak = false;
				firstdigit = false;

			}
			else {
				textBox1->Text = textBox1->Text + ",";
				textBox1->Focus();
				textBox1->SelectionStart = Left;
				dot = true;
				digit = false;
				znak = false;
				firstdigit = false;

			}
		}
		else {
			textBox1->Focus();
			textBox1->SelectionStart = Left;
		}
	}
	private: char* _strrchr(char* str, char ch) {
		char* p, * t = NULL;
		for (p = str; *p; *p++) {
			if (*p == ch)
				t = p;
		}
		return t;
	}

			 char* SysStringToChar(System::String^ string)
			 {
				 return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
			 }

	private: System::Void plusandmin_Click(System::Object^ sender, System::EventArgs^ e) {
		int lenght = textBox1->Text->Length - 1;
		String^ text = textBox1->Text;


		if (znak) {//если последнее введеное - это знак
			if (text[lenght] == '+') { //если последним введен плюс - меняем на минус
				Backspace_Click(Backspace, e); //стираем
				textBox1->Text += "-"; //добавляем минус
			}
			else if (text[lenght] == '-') { //если введен минус, то наоборот на плюс
				Backspace_Click(Backspace, e); //стираем
				textBox1->Text += "+";//добавляем плюс
			}
			else { //если жек последний знак не плюс и не минус, то добавляем скобочку
				textBox1->Text = textBox1->Text + "(-";
				plusminus = true;
			}
		}
		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ o = "Вариант №10 \nВ данном калькуляторе реализованы функции: Сложение, вычитание, умножение, деление, возведение в степень, извлечение корня, функции RoL и RoR.";
		MessageBox::Show(gcnew System::String(o), gcnew System::String("Справка"), MessageBoxButtons::OK, MessageBoxIcon::None);
		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ o = "Программа: Калькулятор \nver 3.14 2018год. \nРазработчик Скрипов Андрей \nГруппа ИКТб-2302";
		MessageBox::Show(gcnew System::String(o), gcnew System::String("О программе"), MessageBoxButtons::OK, MessageBoxIcon::None);
		textBox1->Focus();
		textBox1->SelectionStart = Left;
	}

	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Return) // KeyPressEventArgs
			button1_Click(sender, e);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->KeyPreview = true;
		int c1 = 0;
		change(c1);

	}
	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == '.') {
			button5_Click(button5, e);
			e->Handled = true;
			return;
		}
		else if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) {
			char symb = e->KeyChar;

			switch (symb) {
			case '0':
				button4_Click(button1, e);
				e->Handled = true;
				break;
			case '1':
				firs_Click(firs, e);
				e->Handled = true;
				break;
			case'2':
				second_Click(second, e);
				e->Handled = true;
				break;
			case '3':
				third_Click(third, e);
				e->Handled = true;
				break;
			case '4':
				fourth_Click(fourth, e);
				e->Handled = true;
				break;
			case '5':
				break;
			case '6':
				break;
			case '7':
				break;
			case '8':
				break;
			case '9':
				break;


			}
			return;
		}
		else if (e->KeyChar == (char)Keys::Back) {
			Backspace_Click(Backspace, e);
			e->Handled = true;
			return;
		}
		else if (e->KeyChar == '*') {
			umn_Click(umn, e);
			e->Handled = true;
			return;
		}
		else if (e->KeyChar == '/') {
			del_Click(del, e);
			e->Handled = true;
			return;
		}
		else if (e->KeyChar == '+') {
			plus_Click(plus, e);
			e->Handled = true;
			return;
		}
		else if (e->KeyChar == '-') {
			min_Click(min, e);
			e->Handled = true;
			return;
		}
		else if (e->KeyChar == char(Keys::Return)) {
			e->Handled = true;
			return;
		}

	}
	private: System::Void Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
		static int c1 = 1;
		change(c1);
		c1++;
	}


			 void change(int c1)
			 {
				 int с = c1;
				 if (с % 2 == 0)
				 {
					 Programmer->Text = "Программист";
					 block2();
					 procalc = false;
				 }
				 else
				 {
					 Programmer->Text = "Обычный";
					 block1();
					 procalc = true;
				 }
			 }

			 void block1()
			 {
				 textBox1->Enabled = false;
				 Backspace->Enabled = false;
				 button1->Enabled = false;
				 button2->Enabled = false;
				 button4->Enabled = false;
				 button5->Enabled = false;
				 firs->Enabled = false;
				 second->Enabled = false;
				 third->Enabled = false;
				 fourth->Enabled = false;
				 fifth->Enabled = false;
				 sixth->Enabled = false;
				 seventh->Enabled = false;
				 eighth->Enabled = false;
				 ninth->Enabled = false;
				 plusandmin->Enabled = false;
				 plus->Enabled = false;
				 del->Enabled = false;
				 min->Enabled = false;
				 umn->Enabled = false;
				 sq->Enabled = false;
				 step->Enabled = false;
				 label2->Enabled = true;
				 textBox2->Enabled = true;
				 button7->Enabled = true;
				 label3->Enabled = true;
				 label5->Enabled = true;
				 button9->Enabled = true;
				 button8->Enabled = true;
				 label4->Enabled = true;
				 textBox4->Enabled = true;
				 label6->Enabled = true;
			 }

			 void block2()
			 {
				 label2->Enabled = false;
				 textBox2->Enabled = false;
				 textBox4->Enabled = false;
				 button7->Enabled = false;
				 label3->Enabled = false;
				 label5->Enabled = false;
				 label6->Enabled = false;
				 button9->Enabled = false;
				 button8->Enabled = false;
				 label4->Enabled = false;
				 textBox1->Enabled = true;
				 Backspace->Enabled = true;
				 button1->Enabled = true;
				 button2->Enabled = true;
				 button4->Enabled = true;
				 button5->Enabled = true;
				 firs->Enabled = true;
				 second->Enabled = true;
				 third->Enabled = true;
				 fourth->Enabled = true;
				 fifth->Enabled = true;
				 sixth->Enabled = true;
				 seventh->Enabled = true;
				 eighth->Enabled = true;
				 ninth->Enabled = true;
				 plusandmin->Enabled = true;
				 plus->Enabled = true;
				 del->Enabled = true;
				 min->Enabled = true;
				 umn->Enabled = true;
				 sq->Enabled = true;
				 step->Enabled = true;
			 }

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		firs->Enabled = true;
		second->Enabled = true;
		third->Enabled = true;
		fourth->Enabled = true;
		fifth->Enabled = true;
		sixth->Enabled = true;
		seventh->Enabled = true;
		eighth->Enabled = true;
		ninth->Enabled = true;
		button4->Enabled = true;
		button2->Enabled = true;
	}


	private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		static int ccc = 0;
		if (ccc == 0)
		{
			textBox2->Text = " ";
			textBox2->Clear();
		}
		ccc++;
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			label5->Text = "";
			if (textBox2->Text == "")
			{
				throw std::overflow_error("Введите число!");
			}
			a = Convert::ToInt64(textBox2->Text);
			if (a > 1048575)
			{
				throw std::overflow_error("Переполнение! Не более 1048575");
			}

			while (a)
			{
				t += (a % 2) * d;
				a = a / 2;
				d = d * 10;
			}
			label5->Text = t.ToString();
			t = 0; a = 0; d = 1;
		}
		catch (const std::overflow_error& e)
		{
			textBox2->Clear();
			MessageBox::Show(gcnew System::String(e.what()), gcnew System::String("Ошибка"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}


	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		// сдвиг влево  
		try
		{
			if (label5->Text == "" || label5->Text == "0")
				throw std::overflow_error("Введите число!");
			label4->Text = "";
			if (textBox4->Text == "")
				throw std::overflow_error("Введите число!");

			int k = Convert::ToInt32(textBox4->Text);  // количество шагов

			String^ m = label5->Text;
			std::string ms = marshal_as<std::string>(m);
			int n = ms.length();
			if (k > n)
			{
				while (k > n)
				{
					k -= n;
				}
			}

			std::rotate(ms.rbegin(), ms.rend() - k, ms.rend());

			String^ ts = gcnew String(ms.c_str());

			label4->Text = ts->ToString();
		}
		catch (const std::overflow_error& e)
		{
			textBox2->Clear();
			MessageBox::Show(gcnew System::String(e.what()), gcnew System::String("Ошибка"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		// сдвиг вправо  
		try
		{
			if (label5->Text == "" || label5->Text == "0")
				throw std::overflow_error("Введите число!");
			label4->Text = "";
			if (textBox4->Text == "")
				throw std::overflow_error("Введите число!");

			int k = Convert::ToInt32(textBox4->Text);  // количество шагов

			String^ m = label5->Text;
			std::string ms = marshal_as<std::string>(m);
			int n = ms.length();
			if (k > n)
			{
				while (k > n)
				{
					k -= n;
				}
			}
			std::rotate(ms.begin(), ms.end() - k, ms.end());

			String^ ts = gcnew String(ms.c_str());

			label4->Text = ts->ToString();
		}
		catch (const std::overflow_error& e)
		{
			textBox2->Clear();
			MessageBox::Show(gcnew System::String(e.what()), gcnew System::String("Ошибка"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ text = textBox1->Text;

		if (textBox1->Text == "") {
			dot = false;
			znak = false;
			plusminus = false;
			digit = false;
		}

		/*char last = text[textBox1->Text->Length-1];

		switch (last) {
		case '+': case '-':case '/': case '*':case '^': {
			znak = true;
			digit = false;
			dot = false;
			break;
			}
		case '1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':case'0': {
			digit = true;
			znak = false;
			dot = false;
			break;
			}
		case ',': {
			dot = true;
			znak = false;
			digit = false;
			break;
			}
		}*/
	}
	};
}