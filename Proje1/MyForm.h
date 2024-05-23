#pragma once
#include "MyForm1.h"
namespace Proje1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton5;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 317);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вывод текста";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(390, 317);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Запуск формы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(729, 317);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 24);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(914, 132);
			this->listBox1->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 177);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(914, 71);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Стиль шрифта";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(548, 36);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(134, 20);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Перечеркнутый";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(340, 36);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(126, 20);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Подчеркнутый";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(170, 36);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(101, 20);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Курсивный";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(7, 36);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(123, 20);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Полужирный";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(31, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Введите текст";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(182, 274);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(744, 22);
			this->textBox1->TabIndex = 6;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(12, 387);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(914, 63);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Цвет шрифта";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->ForeColor = System::Drawing::SystemColors::Window;
			this->radioButton5->Location = System::Drawing::Point(641, 22);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(84, 20);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Чёрный";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->ForeColor = System::Drawing::Color::Yellow;
			this->radioButton4->Location = System::Drawing::Point(492, 22);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(87, 20);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Жёлтый";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton3->Location = System::Drawing::Point(340, 22);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(93, 20);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Зелёный";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->ForeColor = System::Drawing::Color::MediumBlue;
			this->radioButton2->Location = System::Drawing::Point(170, 22);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(74, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Синий";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->ForeColor = System::Drawing::Color::IndianRed;
			this->radioButton1->Location = System::Drawing::Point(7, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(91, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Красный";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(938, 477);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Выполнил студент группы 23-КФ, Есепёнок М.К.";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ f = gcnew MyForm1();
		this->Hide();
		f->ShowDialog();
		this->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	{ this->Hide(); };
	if (textBox1->Text != "") {
		this->listBox1->Items->Clear();
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial",14, System::Drawing::FontStyle::Regular, System:: Drawing::GraphicsUnit::Point, static_cast<System :: Byte>(204))); this->listBox1->ForeColor = System:: Drawing::Color :: Black; this->listBox1->Items->Add(this -> textBox1->Text);
//Устанавливает красный цвет для текста
if (radioButton1->Checked == true) {
	this->listBox1->ForeColor= System::Drawing::Color::Red;
}
//Устанавливает синий цвет для текста
if (radioButton2->Checked == true) {
	this->listBox1->ForeColor= System::Drawing::Color::Blue;
}
//Устанавливает зеленый цвет для текста
if (radioButton3->Checked == true) {
	this->listBox1->ForeColor= System::Drawing::Color::Green;
}
//Устанавливает желтый цвет для текста
if (radioButton4->Checked == true) {
	this->listBox1->ForeColor= System::Drawing::Color::Yellow;
}
//Устанавливает черный цвет для текста
if (radioButton5->Checked == true) {
	this->listBox1->ForeColor =System::Drawing::Color::Black;
}
//Устанавливает атрибут «жирность» для текста
if (checkBox1->Checked == true) {
	this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
}
//Устанавливает атрибут «курсив» для текста
if (checkBox2->Checked == true) {
	this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Italic, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
}
//Устанавливает атрибут «подчеркнутый» для текста
if (checkBox3->Checked == true) {
	this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Underline, System::Drawing :: GraphicsUnit::Point,static_cast<System::Byte>(204)));
}
//Устанавливает атрибут «зачеркнутый» для текста
if (checkBox4->Checked == true) {
	this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
}
//Устанавливает атрибуты «жирность», «курсив» для текста
if ((checkBox1->Checked == true) && (checkBox2->Checked ==true)) {
	this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold |System::Drawing::FontStyle::Italic)), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
}
//Устанавливает атрибуты «жирность», «курсив» и «подчеркнутый» для текста if
((checkBox1->Checked == true) && ((checkBox2->Checked == true)) && (checkBox3->Checked == true));
	this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14,
		static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) | System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System :: Byte>(204)));
	//Устанавливает атрибуты «жирность», «курсив», «подчеркнутый» и «зачеркнутый» для текста
	if ((checkBox1->Checked == true) && (checkBox2->Checked == true) && (checkBox3->Checked == true) && (checkBox4->Checked == true))
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline | System::Drawing :: FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
	//Устанавливает атрибуты «курсив», «подчеркнутый» и «зачеркнутый» для текста 
	if ((checkBox2->Checked == true) && (checkBox3->Checked == true) && (checkBox4->Checked == true))
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
	//Устанавливает атрибуты «курсив», «подчеркнутый» для текста
	if ((checkBox2->Checked == true) && (checkBox3->Checked == true))
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
	//Устанавливает атрибуты «курсив», «зачеркнутый» для текста
	if ((checkBox2->Checked == true) && (checkBox4->Checked == true))
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
	//Устанавливает атрибуты «жирность», «подчеркнутый» для текста
	if ((checkBox1->Checked == true) && (checkBox3->Checked ==
		true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
	//Устанавливает атрибуты «подчеркнутый», «зачеркнутый» для текста
	if ((checkBox3->Checked == true) && (checkBox4->Checked ==
		true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
	//Устанавливает атрибуты «жирность», «зачеркнутый» для текста
	if ((checkBox1->Checked == true) && (checkBox4->Checked ==
		true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
	//Устанавливает атрибуты «жирность», «подчеркнутый», «зачеркнутый» для текста
	if ((checkBox1->Checked == true) && (checkBox3->Checked == true))
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));

//Устанавливает атрибуты «жирность», «курсив», «зачеркнутый» для текста if

((checkBox1->Checked == true) && ((checkBox2->Checked == true)) && (checkBox4->Checked == true));
this->listBox1->Font =(gcnew System::Drawing::Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold| System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));

	}
	else
	{
		MessageBox::Show("Заполните пожалуйста данные", "Ошибка ввода данных",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	{ Application::Exit(); }
}
};
}
