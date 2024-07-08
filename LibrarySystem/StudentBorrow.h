#pragma once
#include <cliext\utility>
#using <System.Data.dll>
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public:
		Form^ borrow;
		StudentBorrow(void)
		{
			InitializeComponent();
			AllGenresData();
		}

		StudentBorrow(Form^ borrow1) {
			InitializeComponent();
			borrow = borrow1;
			
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
	private: System::Windows::Forms::Button^ button6;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;







	private: System::Windows::Forms::Button^ Btn_Borrow;


	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;






	private: System::Windows::Forms::ComboBox^ Cbox_Genre;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ Cbox_BookID;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ Lbl_BookTitle;
	private: System::Windows::Forms::Label^ Lbl_BookAuthor;

	private: System::Windows::Forms::Label^ Lbl_Year;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label8;


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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Btn_Borrow = (gcnew System::Windows::Forms::Button());
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->Cbox_Genre = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Cbox_BookID = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Lbl_BookTitle = (gcnew System::Windows::Forms::Label());
			this->Lbl_BookAuthor = (gcnew System::Windows::Forms::Label());
			this->Lbl_Year = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::NavajoWhite;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(631, 0);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(11, 0, 8, 0);
			this->button6->Size = System::Drawing::Size(44, 34);
			this->button6->TabIndex = 12;
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button6->UseVisualStyleBackColor = false;
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
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(670, 67);
			this->panel2->TabIndex = 6;
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
			// Btn_Borrow
			// 
			this->Btn_Borrow->BackColor = System::Drawing::Color::Linen;
			this->Btn_Borrow->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Borrow->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Borrow->Location = System::Drawing::Point(110, 335);
			this->Btn_Borrow->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Borrow->Name = L"Btn_Borrow";
			this->Btn_Borrow->Size = System::Drawing::Size(106, 38);
			this->Btn_Borrow->TabIndex = 25;
			this->Btn_Borrow->Text = L"Borrow";
			this->Btn_Borrow->UseVisualStyleBackColor = false;
			this->Btn_Borrow->Click += gcnew System::EventHandler(this, &StudentBorrow::Btn_Borrow_Click);
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// Cbox_Genre
			// 
			this->Cbox_Genre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbox_Genre->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_Genre->FormattingEnabled = true;
			this->Cbox_Genre->Location = System::Drawing::Point(92, 135);
			this->Cbox_Genre->Margin = System::Windows::Forms::Padding(2);
			this->Cbox_Genre->Name = L"Cbox_Genre";
			this->Cbox_Genre->Size = System::Drawing::Size(154, 24);
			this->Cbox_Genre->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(17, 174);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 18);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Book ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(17, 141);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 18);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Genre:";
			// 
			// Cbox_BookID
			// 
			this->Cbox_BookID->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbox_BookID->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_BookID->FormattingEnabled = true;
			this->Cbox_BookID->Location = System::Drawing::Point(92, 168);
			this->Cbox_BookID->Margin = System::Windows::Forms::Padding(2);
			this->Cbox_BookID->Name = L"Cbox_BookID";
			this->Cbox_BookID->Size = System::Drawing::Size(154, 24);
			this->Cbox_BookID->TabIndex = 51;
			this->Cbox_BookID->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentBorrow::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(17, 299);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 18);
			this->label5->TabIndex = 54;
			this->label5->Text = L"Publication Year:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(17, 270);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 18);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Book Author:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(17, 239);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 18);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Book Title:";
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
			this->button5->TabIndex = 55;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &StudentBorrow::button5_Click);
			// 
			// Lbl_BookTitle
			// 
			this->Lbl_BookTitle->AutoSize = true;
			this->Lbl_BookTitle->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_BookTitle->Location = System::Drawing::Point(100, 241);
			this->Lbl_BookTitle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_BookTitle->Name = L"Lbl_BookTitle";
			this->Lbl_BookTitle->Size = System::Drawing::Size(65, 14);
			this->Lbl_BookTitle->TabIndex = 56;
			this->Lbl_BookTitle->Text = L"Book Title";
			// 
			// Lbl_BookAuthor
			// 
			this->Lbl_BookAuthor->AutoSize = true;
			this->Lbl_BookAuthor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_BookAuthor->Location = System::Drawing::Point(114, 272);
			this->Lbl_BookAuthor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_BookAuthor->Name = L"Lbl_BookAuthor";
			this->Lbl_BookAuthor->Size = System::Drawing::Size(79, 14);
			this->Lbl_BookAuthor->TabIndex = 57;
			this->Lbl_BookAuthor->Text = L"Book Author";
			// 
			// Lbl_Year
			// 
			this->Lbl_Year->AutoSize = true;
			this->Lbl_Year->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Year->Location = System::Drawing::Point(141, 301);
			this->Lbl_Year->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Year->Name = L"Lbl_Year";
			this->Lbl_Year->Size = System::Drawing::Size(101, 14);
			this->Lbl_Year->TabIndex = 58;
			this->Lbl_Year->Text = L"Publication Year";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(90, 206);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(155, 20);
			this->numericUpDown1->TabIndex = 59;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label8->Location = System::Drawing::Point(17, 206);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 18);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Quantity:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(341, 141);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 61;
			// 
			// StudentBorrow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(670, 397);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->Lbl_Year);
			this->Controls->Add(this->Lbl_BookAuthor);
			this->Controls->Add(this->Lbl_BookTitle);
			this->Controls->Add(this->button5);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StudentBorrow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentBorrow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		System::String^ selectedValue = dynamic_cast<System::String^>(Cbox_BookID->SelectedItem);
		Cbox_BookID->SelectedIndex = -1;
		Cbox_BookID->Items->Clear();
		Lbl_BookTitle->Text = "";
		Lbl_BookAuthor->Text = "";

	if (checkConnection()) {
		if (selectedValue != nullptr) {
			try {
				connection->Open();

				System::String^ selectData = "SELECT * FROM books WHERE genre = '" + selectedValue + "' AND status = @status";
				SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

				cmd->Parameters->AddWithValue("@status", "Available");
				SqlDataReader^ reader = cmd->ExecuteReader();

				while (reader->Read()) {
					String^ bookTitle = reader["book_title"]->ToString();
					String^ bookAuthor = reader["book_author"]->ToString();
					String^ publication_year = reader["publication_year"]->ToString();
					

					Lbl_BookTitle->Text = bookTitle;
					Lbl_BookAuthor->Text = bookAuthor;
					Lbl_Year->Text= publication_year;

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
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	borrow->Show();
}
private: System::Void Btn_Borrow_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
