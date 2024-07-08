#pragma once
#include "StudentBorrow.h"
#include "StudentView.h"

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student
	/// </summary>
	public ref class Student : public System::Windows::Forms::Form
	{
	public:
		Form^ min;
		Student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Student(Form^ min1) {
			min = min1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;







	private: System::Windows::Forms::PictureBox^ pictureBox5;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnViewBook;
	private: System::Windows::Forms::Button^ btnBorrow;
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ Pb_Exit;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student::typeid));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Pb_Exit = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnViewBook = (gcnew System::Windows::Forms::Button());
			this->btnBorrow = (gcnew System::Windows::Forms::Button());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label7->Location = System::Drawing::Point(209, 20);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(390, 32);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Library Management System";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel2->Controls->Add(this->Pb_Exit);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(670, 67);
			this->panel2->TabIndex = 4;
			// 
			// Pb_Exit
			// 
			this->Pb_Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Exit.BackgroundImage")));
			this->Pb_Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Pb_Exit->Location = System::Drawing::Point(633, 6);
			this->Pb_Exit->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Exit->Name = L"Pb_Exit";
			this->Pb_Exit->Size = System::Drawing::Size(31, 29);
			this->Pb_Exit->TabIndex = 15;
			this->Pb_Exit->TabStop = false;
			this->Pb_Exit->Click += gcnew System::EventHandler(this, &Student::Pb_Exit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -3);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 71);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(42, 150);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(152, 145);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(256, 150);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(146, 145);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::BurlyWood;
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Location = System::Drawing::Point(-4, 64);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(681, 53);
			this->panel4->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(194, 13);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 26);
			this->textBox1->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(14, 16);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(177, 22);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Welcome Student:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(462, 150);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(142, 145);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// btnViewBook
			// 
			this->btnViewBook->BackColor = System::Drawing::Color::Linen;
			this->btnViewBook->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewBook->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnViewBook->Location = System::Drawing::Point(50, 315);
			this->btnViewBook->Margin = System::Windows::Forms::Padding(2);
			this->btnViewBook->Name = L"btnViewBook";
			this->btnViewBook->Size = System::Drawing::Size(136, 39);
			this->btnViewBook->TabIndex = 12;
			this->btnViewBook->Text = L"View Book";
			this->btnViewBook->UseVisualStyleBackColor = false;
			this->btnViewBook->Click += gcnew System::EventHandler(this, &Student::btnViewBook_Click);
			// 
			// btnBorrow
			// 
			this->btnBorrow->BackColor = System::Drawing::Color::Linen;
			this->btnBorrow->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBorrow->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnBorrow->Location = System::Drawing::Point(237, 315);
			this->btnBorrow->Margin = System::Windows::Forms::Padding(2);
			this->btnBorrow->Name = L"btnBorrow";
			this->btnBorrow->Size = System::Drawing::Size(182, 39);
			this->btnBorrow->TabIndex = 13;
			this->btnBorrow->Text = L"Borrow";
			this->btnBorrow->UseVisualStyleBackColor = false;
			this->btnBorrow->Click += gcnew System::EventHandler(this, &Student::btnBorrow_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->BackColor = System::Drawing::Color::Linen;
			this->btnReturn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReturn->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnReturn->Location = System::Drawing::Point(448, 315);
			this->btnReturn->Margin = System::Windows::Forms::Padding(2);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(169, 39);
			this->btnReturn->TabIndex = 14;
			this->btnReturn->Text = L"Return";
			this->btnReturn->UseVisualStyleBackColor = false;
			// 
			// Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(670, 397);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->btnBorrow);
			this->Controls->Add(this->btnViewBook);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student";
			this->Load += gcnew System::EventHandler(this, &Student::Student_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnBorrow_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		StudentBorrow^ borrow1 = gcnew StudentBorrow(this);
		borrow1->ShowDialog();
	
	}
private: System::Void Pb_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void btnViewBook_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	StudentView^ view1 = gcnew StudentView(this);
	view1->ShowDialog();
}
private: System::Void Student_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
