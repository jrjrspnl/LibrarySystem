#pragma once
#include "BorrowedBooks.h"
#include "BooksReturned.h"
#include "BooksData.h"

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminView
	/// </summary>
	public ref class AdminView : public System::Windows::Forms::Form
	{
	public:
		AdminView(void)
		{
			InitializeComponent();
			displayAllBooks();
			displayAllBorrowedBooks();
			displayAllReturnedBooks();
			//
			//TODO: Add the constructor code here
			//
		}

		void displayAllBooks() {
			BooksData^ bData = gcnew BooksData();

			List<BooksData^>^ listData = bData->displayAllBooks();
			Table_ViewBooks->DataSource = listData;

		}

		void displayAllBorrowedBooks() {
			BorrowedBooks^ bBooks = gcnew BorrowedBooks();

			List<BorrowedBooks^>^ listData = bBooks->displayAllBorrowedBooks();
			Table_Borrowed->DataSource = listData;
		}

		void displayAllReturnedBooks() {
			BooksReturned^ RBooks = gcnew BooksReturned();

			List<BooksReturned^>^ listData = RBooks->displayAllReturnedBooks();
			Table_Returned->DataSource = listData;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Table_ViewBooks;
	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ Table_Returned;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ Table_Borrowed;
	private: System::Windows::Forms::Panel^ panel2;



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
			this->Table_ViewBooks = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Table_Returned = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Table_Borrowed = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_ViewBooks))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Returned))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Borrowed))->BeginInit();
			this->SuspendLayout();
			// 
			// Table_ViewBooks
			// 
			this->Table_ViewBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_ViewBooks->Location = System::Drawing::Point(40, 52);
			this->Table_ViewBooks->Margin = System::Windows::Forms::Padding(2);
			this->Table_ViewBooks->Name = L"Table_ViewBooks";
			this->Table_ViewBooks->RowHeadersVisible = false;
			this->Table_ViewBooks->RowHeadersWidth = 51;
			this->Table_ViewBooks->RowTemplate->Height = 24;
			this->Table_ViewBooks->Size = System::Drawing::Size(570, 169);
			this->Table_ViewBooks->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::Bisque;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->Table_Returned);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->Table_Borrowed);
			this->panel1->Controls->Add(this->Table_ViewBooks);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(660, 436);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(40, 708);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 42);
			this->panel2->TabIndex = 8;
			// 
			// Table_Returned
			// 
			this->Table_Returned->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_Returned->Location = System::Drawing::Point(40, 522);
			this->Table_Returned->Margin = System::Windows::Forms::Padding(2);
			this->Table_Returned->Name = L"Table_Returned";
			this->Table_Returned->RowHeadersVisible = false;
			this->Table_Returned->RowHeadersWidth = 51;
			this->Table_Returned->RowTemplate->Height = 24;
			this->Table_Returned->Size = System::Drawing::Size(570, 169);
			this->Table_Returned->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(47, 480);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 26);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Books Returned";
			// 
			// Table_Borrowed
			// 
			this->Table_Borrowed->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Table_Borrowed->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_Borrowed->Location = System::Drawing::Point(40, 285);
			this->Table_Borrowed->Margin = System::Windows::Forms::Padding(2);
			this->Table_Borrowed->Name = L"Table_Borrowed";
			this->Table_Borrowed->RowHeadersVisible = false;
			this->Table_Borrowed->RowHeadersWidth = 51;
			this->Table_Borrowed->RowTemplate->Height = 24;
			this->Table_Borrowed->Size = System::Drawing::Size(570, 169);
			this->Table_Borrowed->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(47, 246);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Books Borrowed";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(47, 14);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Records of Books";
			// 
			// AdminView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(660, 436);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AdminView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminView";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_ViewBooks))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Returned))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Borrowed))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
