#pragma once
#include "BooksData.h"

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for StudentBorrow
	/// </summary>
	public ref class StudentBorrow : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
	private: System::Windows::Forms::TextBox^ Txt_Search;





	public:
		Form^ borrow;
	private: System::Windows::Forms::PictureBox^ Pb_Exit;
	private: System::Windows::Forms::Button^ Btn_Search;

	public:
		String^ studentNumber;
		StudentBorrow(void)
		{
			InitializeComponent();
			AllGenresData();
			displayAllAvailableBooks();
			//
			//TODO: Add the constructor code here
			//
		}
		StudentBorrow(Form^ borrow1, String^ studentNumber) {

			InitializeComponent();
			this->studentNumber = studentNumber;
			borrow = borrow1;

		}

		void displayAllAvailableBooks() {


			BooksData^ bData = gcnew BooksData();

			List<BooksData^>^ listData = bData->AllAvailableBooks();
			Table_Availbooks->DataSource = listData;
		}

		bool checkConnection()
		{
			if (connection->State == ConnectionState::Closed)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		void AllGenresData()
		{
			if (checkConnection())
			{
				try
				{
					connection->Open();

					System::String^ selectData = "SELECT DISTINCT genre FROM books WHERE status = 'Available'";

					SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);
					SqlDataReader^ reader = cmd->ExecuteReader();

					while (reader->Read())
					{
						System::String^ item = reader->GetString(0);
						Cbox_Genre->Items->Add(item);
					}

				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally
				{
					connection->Close();
				}
			}
		}




	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentBorrow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ Numeric_num;

	private: System::Windows::Forms::Label^ Lbl_Year;
	private: System::Windows::Forms::Label^ Lbl_BookAuthor;
	private: System::Windows::Forms::Label^ Lbl_BookTitle;
	private: System::Windows::Forms::Button^ pb_back;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ Cbox_BookID;
	private: System::Windows::Forms::ComboBox^ Cbox_Genre;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Btn_Borrow;
	private: System::Windows::Forms::DataGridView^ Table_Availbooks;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentBorrow::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Pb_Exit = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Numeric_num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Lbl_Year = (gcnew System::Windows::Forms::Label());
			this->Lbl_BookAuthor = (gcnew System::Windows::Forms::Label());
			this->Lbl_BookTitle = (gcnew System::Windows::Forms::Label());
			this->pb_back = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Cbox_BookID = (gcnew System::Windows::Forms::ComboBox());
			this->Cbox_Genre = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Btn_Borrow = (gcnew System::Windows::Forms::Button());
			this->Table_Availbooks = (gcnew System::Windows::Forms::DataGridView());
			this->Txt_Search = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Search = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Numeric_num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Availbooks))->BeginInit();
			this->SuspendLayout();
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
			this->panel2->TabIndex = 63;
			// 
			// Pb_Exit
			// 
			this->Pb_Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Exit.BackgroundImage")));
			this->Pb_Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Pb_Exit->Location = System::Drawing::Point(633, 5);
			this->Pb_Exit->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Exit->Name = L"Pb_Exit";
			this->Pb_Exit->Size = System::Drawing::Size(31, 29);
			this->Pb_Exit->TabIndex = 96;
			this->Pb_Exit->TabStop = false;
			this->Pb_Exit->Click += gcnew System::EventHandler(this, &StudentBorrow::Pb_Exit_Click);
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label8->Location = System::Drawing::Point(21, 211);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 18);
			this->label8->TabIndex = 90;
			this->label8->Text = L"Quantity:";
			// 
			// Numeric_num
			// 
			this->Numeric_num->Location = System::Drawing::Point(96, 211);
			this->Numeric_num->Margin = System::Windows::Forms::Padding(2);
			this->Numeric_num->Name = L"Numeric_num";
			this->Numeric_num->Size = System::Drawing::Size(154, 20);
			this->Numeric_num->TabIndex = 89;
			// 
			// Lbl_Year
			// 
			this->Lbl_Year->AutoSize = true;
			this->Lbl_Year->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Year->Location = System::Drawing::Point(151, 307);
			this->Lbl_Year->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Year->Name = L"Lbl_Year";
			this->Lbl_Year->Size = System::Drawing::Size(0, 14);
			this->Lbl_Year->TabIndex = 88;
			// 
			// Lbl_BookAuthor
			// 
			this->Lbl_BookAuthor->AutoSize = true;
			this->Lbl_BookAuthor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_BookAuthor->Location = System::Drawing::Point(121, 278);
			this->Lbl_BookAuthor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_BookAuthor->Name = L"Lbl_BookAuthor";
			this->Lbl_BookAuthor->Size = System::Drawing::Size(0, 14);
			this->Lbl_BookAuthor->TabIndex = 87;
			// 
			// Lbl_BookTitle
			// 
			this->Lbl_BookTitle->AutoSize = true;
			this->Lbl_BookTitle->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_BookTitle->Location = System::Drawing::Point(108, 246);
			this->Lbl_BookTitle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_BookTitle->Name = L"Lbl_BookTitle";
			this->Lbl_BookTitle->Size = System::Drawing::Size(0, 14);
			this->Lbl_BookTitle->TabIndex = 86;
			// 
			// pb_back
			// 
			this->pb_back->BackColor = System::Drawing::Color::Bisque;
			this->pb_back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_back.BackgroundImage")));
			this->pb_back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pb_back->FlatAppearance->BorderSize = 0;
			this->pb_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pb_back->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pb_back->ForeColor = System::Drawing::Color::Salmon;
			this->pb_back->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->pb_back->Location = System::Drawing::Point(12, 83);
			this->pb_back->Margin = System::Windows::Forms::Padding(2);
			this->pb_back->Name = L"pb_back";
			this->pb_back->Padding = System::Windows::Forms::Padding(11, 0, 8, 0);
			this->pb_back->Size = System::Drawing::Size(41, 37);
			this->pb_back->TabIndex = 85;
			this->pb_back->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->pb_back->UseVisualStyleBackColor = false;
			this->pb_back->Click += gcnew System::EventHandler(this, &StudentBorrow::pb_back_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(21, 304);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 18);
			this->label5->TabIndex = 84;
			this->label5->Text = L"Publication Year:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(21, 275);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 18);
			this->label4->TabIndex = 83;
			this->label4->Text = L"Book Author:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(21, 244);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 18);
			this->label3->TabIndex = 82;
			this->label3->Text = L"Book Title:";
			// 
			// Cbox_BookID
			// 
			this->Cbox_BookID->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbox_BookID->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_BookID->FormattingEnabled = true;
			this->Cbox_BookID->Location = System::Drawing::Point(96, 173);
			this->Cbox_BookID->Margin = System::Windows::Forms::Padding(2);
			this->Cbox_BookID->Name = L"Cbox_BookID";
			this->Cbox_BookID->Size = System::Drawing::Size(154, 24);
			this->Cbox_BookID->TabIndex = 81;
			this->Cbox_BookID->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentBorrow::Cbox_BookID_SelectedIndexChanged);
			// 
			// Cbox_Genre
			// 
			this->Cbox_Genre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbox_Genre->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_Genre->FormattingEnabled = true;
			this->Cbox_Genre->Location = System::Drawing::Point(96, 140);
			this->Cbox_Genre->Margin = System::Windows::Forms::Padding(2);
			this->Cbox_Genre->Name = L"Cbox_Genre";
			this->Cbox_Genre->Size = System::Drawing::Size(154, 24);
			this->Cbox_Genre->TabIndex = 80;
			this->Cbox_Genre->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentBorrow::Cbox_Genre_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(21, 179);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 18);
			this->label1->TabIndex = 79;
			this->label1->Text = L"Book ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(21, 146);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 18);
			this->label2->TabIndex = 78;
			this->label2->Text = L"Genre:";
			// 
			// Btn_Borrow
			// 
			this->Btn_Borrow->BackColor = System::Drawing::Color::Linen;
			this->Btn_Borrow->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Borrow->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Borrow->Location = System::Drawing::Point(92, 343);
			this->Btn_Borrow->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Borrow->Name = L"Btn_Borrow";
			this->Btn_Borrow->Size = System::Drawing::Size(106, 38);
			this->Btn_Borrow->TabIndex = 77;
			this->Btn_Borrow->Text = L"Borrow";
			this->Btn_Borrow->UseVisualStyleBackColor = false;
			this->Btn_Borrow->Click += gcnew System::EventHandler(this, &StudentBorrow::Btn_Borrow_Click);
			// 
			// Table_Availbooks
			// 
			this->Table_Availbooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_Availbooks->Location = System::Drawing::Point(294, 140);
			this->Table_Availbooks->Name = L"Table_Availbooks";
			this->Table_Availbooks->RowHeadersVisible = false;
			this->Table_Availbooks->Size = System::Drawing::Size(351, 241);
			this->Table_Availbooks->TabIndex = 91;
			// 
			// Txt_Search
			// 
			this->Txt_Search->Location = System::Drawing::Point(294, 98);
			this->Txt_Search->Name = L"Txt_Search";
			this->Txt_Search->Size = System::Drawing::Size(243, 20);
			this->Txt_Search->TabIndex = 93;
			this->Txt_Search->TextChanged += gcnew System::EventHandler(this, &StudentBorrow::Txt_Search_TextChanged);
			// 
			// Btn_Search
			// 
			this->Btn_Search->BackColor = System::Drawing::Color::SandyBrown;
			this->Btn_Search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Btn_Search->FlatAppearance->BorderSize = 0;
			this->Btn_Search->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Search->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Search->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Search.Image")));
			this->Btn_Search->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Search->Location = System::Drawing::Point(542, 96);
			this->Btn_Search->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Search->Name = L"Btn_Search";
			this->Btn_Search->Padding = System::Windows::Forms::Padding(11, 0, 8, 0);
			this->Btn_Search->Size = System::Drawing::Size(103, 24);
			this->Btn_Search->TabIndex = 96;
			this->Btn_Search->Text = L" Search";
			this->Btn_Search->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Btn_Search->UseVisualStyleBackColor = false;
			this->Btn_Search->Click += gcnew System::EventHandler(this, &StudentBorrow::Btn_Search_Click);
			// 
			// StudentBorrow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(670, 397);
			this->Controls->Add(this->Txt_Search);
			this->Controls->Add(this->Table_Availbooks);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Numeric_num);
			this->Controls->Add(this->Lbl_Year);
			this->Controls->Add(this->Lbl_BookAuthor);
			this->Controls->Add(this->Lbl_BookTitle);
			this->Controls->Add(this->pb_back);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Cbox_BookID);
			this->Controls->Add(this->Cbox_Genre);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Btn_Borrow);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Btn_Search);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentBorrow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentBorrow";
			this->Load += gcnew System::EventHandler(this, &StudentBorrow::StudentBorrow_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Numeric_num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Availbooks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void pb_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		borrow->Show();
	}
private: System::Void Cbox_Genre_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Cbox_BookID->SelectedIndex = -1;
	Cbox_BookID->Items->Clear();
	Lbl_BookTitle->Text = "";
	Lbl_BookAuthor->Text = "";
	Lbl_Year->Text = "";

	System::String^ selectedValue = dynamic_cast<System::String^>(Cbox_Genre->SelectedItem);

	if (selectedValue != nullptr) {
		if (checkConnection()) {
			try {
				connection->Open();

				System::String^ selectData = String::Format("SELECT book_id FROM books WHERE genre = '{0}' AND status = @status", selectedValue);

				SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);
				cmd->Parameters->AddWithValue("@status", "Available");
				SqlDataReader^ reader = cmd->ExecuteReader();

				while (reader->Read()) {
					System::String^ value = reader["book_id"]->ToString();
					Cbox_BookID->Items->Add(value);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				connection->Close();
			}
		}
	}
}


private: System::Void Cbox_BookID_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ selectedValue = dynamic_cast<System::String^>(Cbox_BookID->SelectedItem);

	if (checkConnection()) {
		if (selectedValue != nullptr) {
			try {
				connection->Open();

				System::String^ selectData = "SELECT * FROM books WHERE book_id = '" + selectedValue + "' AND status = @status";
				SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

				cmd->Parameters->AddWithValue("@status", "Available");
				SqlDataReader^ reader = cmd->ExecuteReader();

				while (reader->Read()) {
					String^ bookTitle = reader["book_title"]->ToString();
					String^ bookAuthor = reader["book_author"]->ToString();
					String^ publication_year = reader["publication_year"]->ToString();


					Lbl_BookTitle->Text = bookTitle;
					Lbl_BookAuthor->Text = bookAuthor;
					Lbl_Year->Text = publication_year;
					displayAllAvailableBooks();
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				connection->Close();
			}
		}
	}

}
private: System::Void StudentBorrow_Load(System::Object^ sender, System::EventArgs^ e) {
	AllGenresData();
	displayAllAvailableBooks();
}

public: void clearFields() {
	Cbox_BookID->SelectedItem = -1;
	Cbox_Genre->SelectedIndex = -1;
	Lbl_BookTitle->Text = "";
	Lbl_BookAuthor->Text = "";
	Lbl_Year->Text = "";


}
private: System::Void Btn_Borrow_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ bookID = Cbox_BookID->Text;
	int quantityToBorrow = safe_cast<int>(Numeric_num->Value); // Get the value from NumericUpDown

	// Check if a book is selected
	if (String::IsNullOrEmpty(bookID)) {
		MessageBox::Show("Please select a book before borrowing.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Check if the quantity to borrow is valid (NumericUpDown will always provide a valid integer)
	if (quantityToBorrow <= 0) {
		MessageBox::Show("Please enter a valid quantity to borrow.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (checkConnection()) {
		try {
			connection->Open();

			// Check the total number of books already borrowed by the student
			System::String^ checkTotalBorrowedQuery = "SELECT ISNULL(SUM(quantity), 0) FROM BorrowedBooks WHERE student_number = @student_number AND returned_date IS NULL";
			SqlCommand^ cmdCheckTotalBorrowed = gcnew SqlCommand(checkTotalBorrowedQuery, connection);
			cmdCheckTotalBorrowed->Parameters->AddWithValue("@student_number", studentNumber);
			int totalBorrowed = Convert::ToInt32(cmdCheckTotalBorrowed->ExecuteScalar());

			// Validate total borrowed books
			if (totalBorrowed + quantityToBorrow > 2) {
				MessageBox::Show("You can only borrow up to 2 books in total.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check the quantity of the specific book already borrowed by the student
			System::String^ checkSpecificBookBorrowedQuery = "SELECT ISNULL(SUM(quantity), 0) FROM BorrowedBooks WHERE student_number = @student_number AND book_id = @book_id AND returned_date IS NULL";
			SqlCommand^ cmdCheckSpecificBookBorrowed = gcnew SqlCommand(checkSpecificBookBorrowedQuery, connection);
			cmdCheckSpecificBookBorrowed->Parameters->AddWithValue("@student_number", studentNumber);
			cmdCheckSpecificBookBorrowed->Parameters->AddWithValue("@book_id", bookID);
			int specificBookBorrowed = Convert::ToInt32(cmdCheckSpecificBookBorrowed->ExecuteScalar());

			// Validate specific book quantity to borrow
			if (specificBookBorrowed + quantityToBorrow > 2) {
				MessageBox::Show("You can only borrow up to 2 copies of the same book.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check current quantity of the book
			System::String^ checkQuantityQuery = "SELECT quantity FROM books WHERE book_id = @book_id AND status = 'Available'";
			SqlCommand^ cmdCheckQuantity = gcnew SqlCommand(checkQuantityQuery, connection);
			cmdCheckQuantity->Parameters->AddWithValue("@book_id", bookID);
			int currentQuantity = Convert::ToInt32(cmdCheckQuantity->ExecuteScalar());

			// Validate quantity to borrow
			if (quantityToBorrow > currentQuantity) {
				MessageBox::Show("Quantity to borrow exceeds available stock.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Update books table
			System::String^ updateBooks = "UPDATE books SET quantity = quantity - @quantity WHERE book_id = @book_id";
			SqlCommand^ cmdUpdateBooks = gcnew SqlCommand(updateBooks, connection);
			cmdUpdateBooks->Parameters->AddWithValue("@quantity", quantityToBorrow);
			cmdUpdateBooks->Parameters->AddWithValue("@book_id", bookID);
			cmdUpdateBooks->ExecuteNonQuery();

			// Check current quantity of the book after update
			int updatedQuantity = currentQuantity - quantityToBorrow;

			// Check if the updated quantity is 0 (last available book)
			if (updatedQuantity == 0) {
				// Update book status to 'Not Available'
				System::String^ updateStatusQuery = "UPDATE books SET status = 'Not Available' WHERE book_id = @book_id";
				SqlCommand^ cmdUpdateStatus = gcnew SqlCommand(updateStatusQuery, connection);
				cmdUpdateStatus->Parameters->AddWithValue("@book_id", bookID);
				cmdUpdateStatus->ExecuteNonQuery();
			}

			// Insert into BorrowedBooks table
			System::String^ insertBorrowed = "INSERT INTO BorrowedBooks (book_id, student_number, borrowed_date, quantity) VALUES (@book_id, @student_number, GETDATE(), @quantity)";
			SqlCommand^ cmdInsertBorrowed = gcnew SqlCommand(insertBorrowed, connection);
			cmdInsertBorrowed->Parameters->AddWithValue("@book_id", bookID);
			cmdInsertBorrowed->Parameters->AddWithValue("@student_number", studentNumber);
			cmdInsertBorrowed->Parameters->AddWithValue("@quantity", quantityToBorrow);
			cmdInsertBorrowed->ExecuteNonQuery();

			MessageBox::Show("Book borrowed successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			displayAllAvailableBooks();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
}
private: System::Void Pb_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ keyword = Txt_Search->Text->Trim();

	if (keyword == "") {
		// If the search text is empty, display all available books
		displayAllAvailableBooks();
		return;
	}

	// SQL query to search for books by title or author, and check availability
	System::String^ searchQuery = "SELECT * FROM books WHERE (book_id LIKE '%' + @keyword + '%' OR genre LIKE '%' + @keyword + '%' OR book_title LIKE '%' + @keyword + '%' OR book_author LIKE '%' + @keyword + '%') AND status = 'Available'";

	if (checkConnection()) {
		try {
			connection->Open();

			SqlCommand^ cmdSearch = gcnew SqlCommand(searchQuery, connection);
			cmdSearch->Parameters->AddWithValue("@keyword", keyword);

			// Use SqlDataAdapter to fill results into a DataTable or DataGridView
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmdSearch);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);

			// Display search results in your UI component (e.g., DataGridView)
			// Example assuming you have a DataGridView named DataGridView1
			Table_Availbooks->DataSource = dataTable;

		}
		catch (Exception^ ex) {
			MessageBox::Show("Search failed: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
}
private: System::Void Txt_Search_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
