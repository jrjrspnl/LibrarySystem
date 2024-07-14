#pragma once
#include <cliext\utility>
#using <System.Data.dll>
#include "BooksData.h"
#include "Genre.h"

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AdminAdd
	/// </summary>
	public ref class AdminAdd : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
	public:
		AdminAdd(void)
		{
			InitializeComponent();
			displayGenre();
			displayAllBooks();
			//
			//TODO: Add the constructor code here
			//
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

		void displayAllBooks() {
			BooksData^ bData = gcnew BooksData();

			List<BooksData^>^ listData = bData->displayAllBooks();
			Table_Books->DataSource = listData;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ Txt_BookID;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Txt_BookTitle;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Txt_BookAuthor;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ Cbox_Status;
	private: System::Windows::Forms::Button^ Btn_Add;
	private: System::Windows::Forms::Button^ Btn_Update;
	private: System::Windows::Forms::Button^ Btn_Delete;
	private: System::Windows::Forms::Button^ Btn_Clear;
	private: System::Windows::Forms::DataGridView^ Table_Books;

	private: System::Windows::Forms::ComboBox^ Cbox_Genre;
	private: System::Windows::Forms::TextBox^ Txt_Quantity;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ Date_Book;







	protected:

	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Txt_BookID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Txt_BookTitle = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Txt_BookAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Cbox_Status = (gcnew System::Windows::Forms::ComboBox());
			this->Btn_Add = (gcnew System::Windows::Forms::Button());
			this->Btn_Update = (gcnew System::Windows::Forms::Button());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Clear = (gcnew System::Windows::Forms::Button());
			this->Table_Books = (gcnew System::Windows::Forms::DataGridView());
			this->Cbox_Genre = (gcnew System::Windows::Forms::ComboBox());
			this->Txt_Quantity = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Date_Book = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Books))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(21, 38);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Genre:";
			// 
			// Txt_BookID
			// 
			this->Txt_BookID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_BookID->Location = System::Drawing::Point(119, 76);
			this->Txt_BookID->Margin = System::Windows::Forms::Padding(2);
			this->Txt_BookID->Name = L"Txt_BookID";
			this->Txt_BookID->Size = System::Drawing::Size(154, 26);
			this->Txt_BookID->TabIndex = 32;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(21, 77);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 22);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Book ID:";
			// 
			// Txt_BookTitle
			// 
			this->Txt_BookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_BookTitle->Location = System::Drawing::Point(468, 36);
			this->Txt_BookTitle->Margin = System::Windows::Forms::Padding(2);
			this->Txt_BookTitle->Name = L"Txt_BookTitle";
			this->Txt_BookTitle->Size = System::Drawing::Size(154, 26);
			this->Txt_BookTitle->TabIndex = 34;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(292, 38);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 22);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Book Title:";
			// 
			// Txt_BookAuthor
			// 
			this->Txt_BookAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_BookAuthor->Location = System::Drawing::Point(468, 76);
			this->Txt_BookAuthor->Margin = System::Windows::Forms::Padding(2);
			this->Txt_BookAuthor->Name = L"Txt_BookAuthor";
			this->Txt_BookAuthor->Size = System::Drawing::Size(154, 26);
			this->Txt_BookAuthor->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(294, 78);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 22);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Book Author:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(296, 118);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 22);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Publication Year:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label6->Location = System::Drawing::Point(21, 160);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 22);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Status:";
			// 
			// Cbox_Status
			// 
			this->Cbox_Status->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbox_Status->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_Status->FormattingEnabled = true;
			this->Cbox_Status->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->Cbox_Status->Location = System::Drawing::Point(119, 159);
			this->Cbox_Status->Margin = System::Windows::Forms::Padding(2);
			this->Cbox_Status->Name = L"Cbox_Status";
			this->Cbox_Status->Size = System::Drawing::Size(154, 24);
			this->Cbox_Status->TabIndex = 40;
			// 
			// Btn_Add
			// 
			this->Btn_Add->BackColor = System::Drawing::Color::Linen;
			this->Btn_Add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Add->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Add->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Add->Location = System::Drawing::Point(293, 160);
			this->Btn_Add->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Add->Name = L"Btn_Add";
			this->Btn_Add->Size = System::Drawing::Size(75, 32);
			this->Btn_Add->TabIndex = 41;
			this->Btn_Add->Text = L"ADD";
			this->Btn_Add->UseVisualStyleBackColor = false;
			this->Btn_Add->Click += gcnew System::EventHandler(this, &AdminAdd::Btn_Add_Click);
			// 
			// Btn_Update
			// 
			this->Btn_Update->BackColor = System::Drawing::Color::Linen;
			this->Btn_Update->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Update->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Update->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Update->Location = System::Drawing::Point(388, 160);
			this->Btn_Update->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->Size = System::Drawing::Size(75, 32);
			this->Btn_Update->TabIndex = 42;
			this->Btn_Update->Text = L"UPDATE";
			this->Btn_Update->UseVisualStyleBackColor = false;
			this->Btn_Update->Click += gcnew System::EventHandler(this, &AdminAdd::Btn_Update_Click);
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::Linen;
			this->Btn_Delete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Delete->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Delete->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Delete->Location = System::Drawing::Point(475, 160);
			this->Btn_Delete->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(75, 32);
			this->Btn_Delete->TabIndex = 43;
			this->Btn_Delete->Text = L"DELETE";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			this->Btn_Delete->Click += gcnew System::EventHandler(this, &AdminAdd::Btn_Delete_Click);
			// 
			// Btn_Clear
			// 
			this->Btn_Clear->BackColor = System::Drawing::Color::Linen;
			this->Btn_Clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Clear->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Clear->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Clear->Location = System::Drawing::Point(561, 160);
			this->Btn_Clear->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Clear->Name = L"Btn_Clear";
			this->Btn_Clear->Size = System::Drawing::Size(75, 32);
			this->Btn_Clear->TabIndex = 44;
			this->Btn_Clear->Text = L"CLEAR";
			this->Btn_Clear->UseVisualStyleBackColor = false;
			this->Btn_Clear->Click += gcnew System::EventHandler(this, &AdminAdd::Btn_Clear_Click);
			// 
			// Table_Books
			// 
			this->Table_Books->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_Books->Location = System::Drawing::Point(22, 220);
			this->Table_Books->Margin = System::Windows::Forms::Padding(2);
			this->Table_Books->Name = L"Table_Books";
			this->Table_Books->RowHeadersVisible = false;
			this->Table_Books->RowHeadersWidth = 51;
			this->Table_Books->RowTemplate->Height = 24;
			this->Table_Books->Size = System::Drawing::Size(614, 197);
			this->Table_Books->TabIndex = 45;
			this->Table_Books->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminAdd::Table_Books_CellClick);
			// 
			// Cbox_Genre
			// 
			this->Cbox_Genre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbox_Genre->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_Genre->FormattingEnabled = true;
			this->Cbox_Genre->Location = System::Drawing::Point(119, 39);
			this->Cbox_Genre->Margin = System::Windows::Forms::Padding(2);
			this->Cbox_Genre->Name = L"Cbox_Genre";
			this->Cbox_Genre->Size = System::Drawing::Size(154, 24);
			this->Cbox_Genre->TabIndex = 46;
			// 
			// Txt_Quantity
			// 
			this->Txt_Quantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Quantity->Location = System::Drawing::Point(119, 118);
			this->Txt_Quantity->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Quantity->Name = L"Txt_Quantity";
			this->Txt_Quantity->Size = System::Drawing::Size(154, 26);
			this->Txt_Quantity->TabIndex = 48;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label7->Location = System::Drawing::Point(21, 119);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 22);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Quantity:";
			// 
			// Date_Book
			// 
			this->Date_Book->CustomFormat = L"yyyy-MM-dd";
			this->Date_Book->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date_Book->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Date_Book->Location = System::Drawing::Point(468, 116);
			this->Date_Book->Margin = System::Windows::Forms::Padding(2);
			this->Date_Book->Name = L"Date_Book";
			this->Date_Book->Size = System::Drawing::Size(154, 26);
			this->Date_Book->TabIndex = 49;
			// 
			// AdminAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(660, 436);
			this->Controls->Add(this->Date_Book);
			this->Controls->Add(this->Txt_Quantity);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Cbox_Genre);
			this->Controls->Add(this->Table_Books);
			this->Controls->Add(this->Btn_Clear);
			this->Controls->Add(this->Btn_Delete);
			this->Controls->Add(this->Btn_Update);
			this->Controls->Add(this->Btn_Add);
			this->Controls->Add(this->Cbox_Status);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Txt_BookAuthor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Txt_BookTitle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Txt_BookID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AdminAdd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminAdd";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Books))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int getID = 0;

	public: void displayGenre() {
		if (checkConnection())
		{
			try
			{
				connection->Open();

				System::String^ selectData = "SELECT * FROM Genre";

				SqlCommand^ cmd = gcnew SqlCommand(selectData, connection); {

					SqlDataReader^ reader = cmd->ExecuteReader();

					if (reader->HasRows) {
					}
					while (reader->Read()) {
						Cbox_Genre->Items->Add(reader["genre"]->ToString());
					}
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

	private: bool emptyFields() {
		if (Txt_BookID->Text == "" ||
			Txt_BookTitle->Text == "" ||
			Cbox_Genre->SelectedIndex == -1 ||
			Date_Book->Value == Date_Book->MinDate ||
			Txt_Quantity->Text == "" ||
			Cbox_Status->SelectedIndex == -1) {
			return true;
		}
		else {
			return false;
		}
	}

	  private:  void clearFields() {
		  Txt_BookID->Text = "";
		  Txt_BookTitle->Text = "";
		  Txt_BookAuthor->Text = "";
		  Cbox_Genre->SelectedIndex = -1;
		  Date_Book->Value = Date_Book->MinDate;
		  Txt_Quantity->Text ="";
		  Cbox_Status->SelectedIndex = -1;
	  }

	private: System::Void Btn_Add_Click(System::Object^ sender, System::EventArgs^ e) {
		if (emptyFields()) {
			MessageBox::Show("Empty Fieldss", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (checkConnection()) {
			try {
				connection->Open();

				// Check if book ID already exists
				System::String^ selectData = "SELECT COUNT(*) FROM books WHERE book_id = @bookID";
				SqlCommand^ cmdExist = gcnew SqlCommand(selectData, connection);
				cmdExist->Parameters->AddWithValue("@bookID", Txt_BookID->Text->Trim());

				int count = (int)cmdExist->ExecuteScalar();

				if (count > 0) {
					MessageBox::Show("BOOK ID: " + Txt_BookID->Text->Trim() + " already exists", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					// Insert new book record
					System::String^ insertData = "INSERT INTO books (book_id, genre, book_title, book_author, publication_year, quantity, status, date_insert)" +
						"VALUES(@bookID, @genre, @bookTitle, @bookAuthor, @pYear, @qty, @status, @date)";

					SqlCommand^ insertD = gcnew SqlCommand(insertData, connection);
					insertD->Parameters->AddWithValue("@bookID", Txt_BookID->Text->Trim());
					insertD->Parameters->AddWithValue("@genre", Cbox_Genre->SelectedItem->ToString()->Trim());
					insertD->Parameters->AddWithValue("@bookTitle", Txt_BookTitle->Text->Trim());
					insertD->Parameters->AddWithValue("@bookAuthor", Txt_BookAuthor->Text->Trim());
					insertD->Parameters->AddWithValue("@pYear", Date_Book->Value);
					insertD->Parameters->AddWithValue("@qty", Txt_Quantity->Text->Trim());
					insertD->Parameters->AddWithValue("@status", Cbox_Status->SelectedItem->ToString()->Trim());

					DateTime now = DateTime::Now;
					insertD->Parameters->AddWithValue("@date", now.ToString("yyyy-MM-dd HH:mm:ss"));

					insertD->ExecuteNonQuery();
					clearFields();
					displayAllBooks();
					MessageBox::Show("Added Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
	private: System::Void Table_Books_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= -1) {

			DataGridViewRow^ row = Table_Books->Rows[e->RowIndex];

			getID = (int)row->Cells[0]->Value;

			Txt_BookID->Text = row->Cells[1]->Value->ToString();
			Cbox_Genre->Text = row->Cells[2]->Value->ToString();
			Txt_BookTitle->Text = row->Cells[3]->Value->ToString();
			Txt_BookAuthor->Text = row->Cells[4]->Value->ToString();
			Date_Book->Text = row->Cells[5]->Value->ToString();
			Txt_Quantity->Text = row->Cells[6]->Value->ToString();
			Cbox_Status->Text = row->Cells[7]->Value->ToString();

		}
	}

private: System::Void Btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {
	if (emptyFields()) {
		MessageBox::Show("Empty Fields", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (MessageBox::Show("Are you sure you want to update B00K ID: " + Txt_BookID->Text->Trim() + "?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			if (checkConnection()) {
				try {
					connection->Open();

					// Get the current status if needed (not used in this example)
					System::String^ currentStatus = "";
					System::String^ selectQuery = "SELECT status FROM books WHERE book_id = @bookID";
					SqlCommand^ selectCmd = gcnew SqlCommand(selectQuery, connection);
					selectCmd->Parameters->AddWithValue("@bookID", Txt_BookID->Text->Trim());
					SqlDataReader^ reader = selectCmd->ExecuteReader();

					if (reader->Read()) {
						currentStatus = reader["status"]->ToString();
					}
					reader->Close();

					// Update logic
					int qty = Convert::ToInt32(Txt_Quantity->Text->ToString()->Trim());
					System::String^ status = qty > 0 ? "Available" : "Not available"; // Set status based on quantity

					System::String^ updateData = "UPDATE books SET book_id = @bookID, genre = @genre, book_title = @bookTitle, book_author = @bookAuthor, publication_year = @pYear, quantity = @qty, status = @status WHERE id = @id";

					SqlCommand^ updateCmd = gcnew SqlCommand(updateData, connection);
					updateCmd->Parameters->AddWithValue("@bookID", Txt_BookID->Text->Trim());
					updateCmd->Parameters->AddWithValue("@genre", Cbox_Genre->SelectedItem->ToString()->Trim());
					updateCmd->Parameters->AddWithValue("@bookTitle", Txt_BookTitle->Text->Trim());
					updateCmd->Parameters->AddWithValue("@bookAuthor", Txt_BookAuthor->Text->Trim());
					updateCmd->Parameters->AddWithValue("@pYear", Date_Book->Value);
					updateCmd->Parameters->AddWithValue("@qty", qty);
					updateCmd->Parameters->AddWithValue("@status", status);
					updateCmd->Parameters->AddWithValue("@id", getID);

					updateCmd->ExecuteNonQuery();
					clearFields();
					displayAllBooks();
					MessageBox::Show("Updated Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
}
		private: System::Void Btn_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
			clearFields();

		}
private: System::Void Btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (emptyFields()) {
		MessageBox::Show("Empty Fields", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (MessageBox::Show("Are you sure you want to delete BOOK ID: " + Txt_BookID->Text->Trim() + "?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			if (checkConnection()) {
				try {
					connection->Open();

					System::String^ deleteData = "DELETE FROM books WHERE id = @id";

					SqlCommand^ deleteD = gcnew SqlCommand(deleteData, connection); {

						deleteD->Parameters->AddWithValue("@id", getID);

						deleteD->ExecuteNonQuery();
						clearFields();
						displayAllBooks();
						MessageBox::Show("Deleted Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
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

}
};
	}
