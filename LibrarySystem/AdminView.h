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
	/// Summary for AdminView
	/// </summary>
	public ref class AdminView : public System::Windows::Forms::Form
	{
	public:
		AdminView(void)
		{
			InitializeComponent();
			displayAllBooks();
			//
			//TODO: Add the constructor code here
			//
		}

		void displayAllBooks() {
			BooksData^ bData = gcnew BooksData();

			List<BooksData^>^ listData = bData->displayAllBooks();
			Table_ViewBooks->DataSource = listData;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_ViewBooks))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Table_ViewBooks
			// 
			this->Table_ViewBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_ViewBooks->Location = System::Drawing::Point(43, 88);
			this->Table_ViewBooks->Margin = System::Windows::Forms::Padding(2);
			this->Table_ViewBooks->Name = L"Table_ViewBooks";
			this->Table_ViewBooks->RowHeadersVisible = false;
			this->Table_ViewBooks->RowHeadersWidth = 51;
			this->Table_ViewBooks->RowTemplate->Height = 24;
			this->Table_ViewBooks->Size = System::Drawing::Size(570, 308);
			this->Table_ViewBooks->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(17, 22);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(623, 393);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(21, 16);
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
			this->Controls->Add(this->Table_ViewBooks);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AdminView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminView";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_ViewBooks))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
