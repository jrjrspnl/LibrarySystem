#pragma once
#include "BooksData.h"

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentView
	/// </summary>
	public ref class StudentView : public System::Windows::Forms::Form
	{
	public:
		Form^ view;
		StudentView(void)
		{
			InitializeComponent();
			displayAllBooks();
			//
			//TODO: Add the constructor code here
			//
		}

		StudentView(Form^ view1) {
			view = view1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void displayAllBooks() {


			BooksData^ bData = gcnew BooksData();

			List<BooksData^>^ listData = bData->displayAllBooks();
			Table_AvailBooks->DataSource = listData;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ Table_AvailBooks;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentView::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Pb_Exit = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Table_AvailBooks = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_AvailBooks))->BeginInit();
			this->SuspendLayout();
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
			this->panel2->TabIndex = 5;
			// 
			// Pb_Exit
			// 
			this->Pb_Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Exit.BackgroundImage")));
			this->Pb_Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Pb_Exit->Location = System::Drawing::Point(633, 5);
			this->Pb_Exit->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Exit->Name = L"Pb_Exit";
			this->Pb_Exit->Size = System::Drawing::Size(31, 29);
			this->Pb_Exit->TabIndex = 11;
			this->Pb_Exit->TabStop = false;
			this->Pb_Exit->Click += gcnew System::EventHandler(this, &StudentView::Pb_Exit_Click);
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
			// Table_AvailBooks
			// 
			this->Table_AvailBooks->AllowUserToAddRows = false;
			this->Table_AvailBooks->AllowUserToDeleteRows = false;
			this->Table_AvailBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_AvailBooks->Location = System::Drawing::Point(26, 137);
			this->Table_AvailBooks->Margin = System::Windows::Forms::Padding(2);
			this->Table_AvailBooks->Name = L"Table_AvailBooks";
			this->Table_AvailBooks->ReadOnly = true;
			this->Table_AvailBooks->RowHeadersVisible = false;
			this->Table_AvailBooks->RowHeadersWidth = 51;
			this->Table_AvailBooks->RowTemplate->Height = 24;
			this->Table_AvailBooks->Size = System::Drawing::Size(621, 244);
			this->Table_AvailBooks->TabIndex = 6;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Bisque;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(8, 78);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(11, 0, 8, 0);
			this->button5->Size = System::Drawing::Size(41, 37);
			this->button5->TabIndex = 16;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &StudentView::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(281, 93);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 32);
			this->label1->TabIndex = 17;
			this->label1->Text = L"All Books";
			// 
			// StudentView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(670, 397);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Table_AvailBooks);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StudentView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentView";
			this->Load += gcnew System::EventHandler(this, &StudentView::StudentView_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_AvailBooks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		view->Show();
	}
private: System::Void StudentView_Load(System::Object^ sender, System::EventArgs^ e) {
	displayAllBooks();
}
private: System::Void Pb_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
