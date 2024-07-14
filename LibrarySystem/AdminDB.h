#pragma once
#include "RegisteredStudents.h"

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AdminDB
	/// </summary>
	public ref class AdminDB : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
	public:
		AdminDB(void)
		{
			InitializeComponent();
			displayAllStudents();
			displayAllBooks();
			displayBooksBorrowed();
			displayBooksReturned();
			displayAllRegisteredStudents();
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

	void displayAllStudents() {

		if (checkConnection())
		{
			try
			{
				connection->Open();

				String^ selectData = "SELECT count(UserID) FROM Users WHERE Role = @role";

				SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

				cmd->Parameters->AddWithValue("@role", "student");

				SqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read())
				{
					int count = Convert::ToInt32(reader[0]);
					Lbl_Users->Text = count.ToString();
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

	void displayBooksBorrowed() {

		if (checkConnection())
		{
			try
			{
				connection->Open();

				String^ selectData = "SELECT count(id) FROM BorrowedBooks WHERE returned_date IS NULL";

				SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

				SqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read())
				{
					int count = Convert::ToInt32(reader[0]);
					Lbl_Borrowed->Text = count.ToString();
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

	void displayBooksReturned() {

		if (checkConnection())
		{
			try
			{
				connection->Open();

				String^ selectData = "SELECT count(id) FROM BorrowedBooks WHERE returned_date IS NOT NULL";

				SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

				SqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read())
				{
					int count = Convert::ToInt32(reader[0]);
					Lbl_Returned->Text = count.ToString();
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

	void displayAllBooks() {

		if (checkConnection())
		{
			try
			{
				connection->Open();

				String^ selectData = "SELECT COUNT(id) FROM books";

				SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);

				SqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read())
				{
					int count = Convert::ToInt32(reader[0]);
					Lbl_TotalBooks->Text = count.ToString();
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

	void displayAllRegisteredStudents() {
		RegisteredStudents^ sData = gcnew RegisteredStudents();

		List<RegisteredStudents^>^ listData = sData->displayAllRegisteredStudents();
		Table_Students->DataSource = listData;

	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminDB()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ Lbl_Users;
	private: System::Windows::Forms::Label^ Lbl_TotalBooks;

	private: System::Windows::Forms::Label^ Lbl_Borrowed;

	private: System::Windows::Forms::Label^ Lbl_Returned;
private: System::Windows::Forms::DataGridView^ Table_Students;

private: System::Windows::Forms::Label^ label1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDB::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Lbl_Users = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Lbl_TotalBooks = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Lbl_Borrowed = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Lbl_Returned = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Table_Students = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Students))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Linen;
			this->panel1->Controls->Add(this->Lbl_Users);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(20, 27);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(139, 99);
			this->panel1->TabIndex = 0;
			// 
			// Lbl_Users
			// 
			this->Lbl_Users->AutoSize = true;
			this->Lbl_Users->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Users->Location = System::Drawing::Point(20, 55);
			this->Lbl_Users->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Users->Name = L"Lbl_Users";
			this->Lbl_Users->Size = System::Drawing::Size(32, 22);
			this->Lbl_Users->TabIndex = 5;
			this->Lbl_Users->Text = L"20";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(75, 44);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(53, 44);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(12, 14);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Students";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Linen;
			this->panel2->Controls->Add(this->Lbl_TotalBooks);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(179, 27);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(139, 99);
			this->panel2->TabIndex = 1;
			// 
			// Lbl_TotalBooks
			// 
			this->Lbl_TotalBooks->AutoSize = true;
			this->Lbl_TotalBooks->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_TotalBooks->Location = System::Drawing::Point(20, 55);
			this->Lbl_TotalBooks->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_TotalBooks->Name = L"Lbl_TotalBooks";
			this->Lbl_TotalBooks->Size = System::Drawing::Size(43, 22);
			this->Lbl_TotalBooks->TabIndex = 7;
			this->Lbl_TotalBooks->Text = L"100";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(74, 44);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(53, 44);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(8, 15);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Total Books";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Linen;
			this->panel3->Controls->Add(this->Lbl_Borrowed);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(339, 27);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(139, 99);
			this->panel3->TabIndex = 1;
			// 
			// Lbl_Borrowed
			// 
			this->Lbl_Borrowed->AutoSize = true;
			this->Lbl_Borrowed->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Borrowed->Location = System::Drawing::Point(24, 55);
			this->Lbl_Borrowed->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Borrowed->Name = L"Lbl_Borrowed";
			this->Lbl_Borrowed->Size = System::Drawing::Size(32, 22);
			this->Lbl_Borrowed->TabIndex = 8;
			this->Lbl_Borrowed->Text = L"10";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(74, 44);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(53, 44);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(14, 14);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 22);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Borrowed";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Linen;
			this->panel4->Controls->Add(this->Lbl_Returned);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Location = System::Drawing::Point(496, 27);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(139, 99);
			this->panel4->TabIndex = 1;
			// 
			// Lbl_Returned
			// 
			this->Lbl_Returned->AutoSize = true;
			this->Lbl_Returned->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Returned->Location = System::Drawing::Point(21, 55);
			this->Lbl_Returned->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Returned->Name = L"Lbl_Returned";
			this->Lbl_Returned->Size = System::Drawing::Size(32, 22);
			this->Lbl_Returned->TabIndex = 9;
			this->Lbl_Returned->Text = L"50";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(88, 45);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(42, 44);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label6->Location = System::Drawing::Point(10, 14);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 22);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Returned";
			// 
			// Table_Students
			// 
			this->Table_Students->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Table_Students->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_Students->Location = System::Drawing::Point(20, 197);
			this->Table_Students->Name = L"Table_Students";
			this->Table_Students->RowHeadersVisible = false;
			this->Table_Students->Size = System::Drawing::Size(615, 227);
			this->Table_Students->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(32, 161);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 22);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Registered Students";
			// 
			// AdminDB
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(660, 436);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Table_Students);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AdminDB";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Students))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
