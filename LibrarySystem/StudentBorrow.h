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
	/// Summary for StudentBorrow
	/// </summary>
	public ref class StudentBorrow : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public:

		Form^ borrow;
		StudentBorrow(void)
		{
			InitializeComponent();
			AllGenresData();
			displayAllAvailableBooks();
			//
			//TODO: Add the constructor code here
			//
		}
		StudentBorrow(Form^ borrow1) {
			InitializeComponent();
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
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Availbooks))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(670, 67);
			this->panel2->TabIndex = 63;
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
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(94, 211);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(155, 20);
			this->numericUpDown1->TabIndex = 89;
			// 
			// Lbl_Year
			// 
			this->Lbl_Year->AutoSize = true;
			this->Lbl_Year->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Year->Location = System::Drawing::Point(145, 306);
			this->Lbl_Year->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Year->Name = L"Lbl_Year";
			this->Lbl_Year->Size = System::Drawing::Size(101, 14);
			this->Lbl_Year->TabIndex = 88;
			this->Lbl_Year->Text = L"Publication Year";
			// 
			// Lbl_BookAuthor
			// 
			this->Lbl_BookAuthor->AutoSize = true;
			this->Lbl_BookAuthor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_BookAuthor->Location = System::Drawing::Point(118, 277);
			this->Lbl_BookAuthor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_BookAuthor->Name = L"Lbl_BookAuthor";
			this->Lbl_BookAuthor->Size = System::Drawing::Size(79, 14);
			this->Lbl_BookAuthor->TabIndex = 87;
			this->Lbl_BookAuthor->Text = L"Book Author";
			// 
			// Lbl_BookTitle
			// 
			this->Lbl_BookTitle->AutoSize = true;
			this->Lbl_BookTitle->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_BookTitle->Location = System::Drawing::Point(104, 246);
			this->Lbl_BookTitle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_BookTitle->Name = L"Lbl_BookTitle";
			this->Lbl_BookTitle->Size = System::Drawing::Size(65, 14);
			this->Lbl_BookTitle->TabIndex = 86;
			this->Lbl_BookTitle->Text = L"Book Title";
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
			this->Btn_Borrow->Location = System::Drawing::Point(114, 340);
			this->Btn_Borrow->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Borrow->Name = L"Btn_Borrow";
			this->Btn_Borrow->Size = System::Drawing::Size(106, 38);
			this->Btn_Borrow->TabIndex = 77;
			this->Btn_Borrow->Text = L"Borrow";
			this->Btn_Borrow->UseVisualStyleBackColor = false;
			// 
			// Table_Availbooks
			// 
			this->Table_Availbooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_Availbooks->Location = System::Drawing::Point(294, 140);
			this->Table_Availbooks->Name = L"Table_Availbooks";
			this->Table_Availbooks->Size = System::Drawing::Size(351, 229);
			this->Table_Availbooks->TabIndex = 91;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label6->Location = System::Drawing::Point(291, 104);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 18);
			this->label6->TabIndex = 92;
			this->label6->Text = L"Search:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(358, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 20);
			this->textBox1->TabIndex = 93;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(575, 102);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(20, 20);
			this->pictureBox2->TabIndex = 94;
			this->pictureBox2->TabStop = false;
			// 
			// StudentBorrow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(670, 397);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Table_Availbooks);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown1);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentBorrow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentBorrow";
			this->Load += gcnew System::EventHandler(this, &StudentBorrow::StudentBorrow_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Availbooks))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
};
}
