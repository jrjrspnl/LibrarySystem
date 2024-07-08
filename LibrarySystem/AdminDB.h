#pragma once

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminDB
	/// </summary>
	public ref class AdminDB : public System::Windows::Forms::Form
	{
	public:
		AdminDB(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->Lbl_Users);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(26, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(185, 122);
			this->panel1->TabIndex = 0;
			// 
			// Lbl_Users
			// 
			this->Lbl_Users->AutoSize = true;
			this->Lbl_Users->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Users->Location = System::Drawing::Point(27, 68);
			this->Lbl_Users->Name = L"Lbl_Users";
			this->Lbl_Users->Size = System::Drawing::Size(38, 27);
			this->Lbl_Users->TabIndex = 5;
			this->Lbl_Users->Text = L"20";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(100, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 54);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 27);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Users";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->Lbl_TotalBooks);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(239, 33);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(185, 122);
			this->panel2->TabIndex = 1;
			// 
			// Lbl_TotalBooks
			// 
			this->Lbl_TotalBooks->AutoSize = true;
			this->Lbl_TotalBooks->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_TotalBooks->Location = System::Drawing::Point(26, 68);
			this->Lbl_TotalBooks->Name = L"Lbl_TotalBooks";
			this->Lbl_TotalBooks->Size = System::Drawing::Size(51, 27);
			this->Lbl_TotalBooks->TabIndex = 7;
			this->Lbl_TotalBooks->Text = L"100";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(98, 54);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(71, 54);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 27);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Total Books";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->Lbl_Borrowed);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(452, 33);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(185, 122);
			this->panel3->TabIndex = 1;
			// 
			// Lbl_Borrowed
			// 
			this->Lbl_Borrowed->AutoSize = true;
			this->Lbl_Borrowed->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Borrowed->Location = System::Drawing::Point(32, 68);
			this->Lbl_Borrowed->Name = L"Lbl_Borrowed";
			this->Lbl_Borrowed->Size = System::Drawing::Size(38, 27);
			this->Lbl_Borrowed->TabIndex = 8;
			this->Lbl_Borrowed->Text = L"10";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(99, 54);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(71, 54);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 27);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Borrowed";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->Lbl_Returned);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Location = System::Drawing::Point(661, 33);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(185, 122);
			this->panel4->TabIndex = 1;
			// 
			// Lbl_Returned
			// 
			this->Lbl_Returned->AutoSize = true;
			this->Lbl_Returned->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Returned->Location = System::Drawing::Point(28, 68);
			this->Lbl_Returned->Name = L"Lbl_Returned";
			this->Lbl_Returned->Size = System::Drawing::Size(38, 27);
			this->Lbl_Returned->TabIndex = 9;
			this->Lbl_Returned->Text = L"50";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(117, 55);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(56, 54);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 27);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Returned";
			// 
			// AdminDB
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(880, 536);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
