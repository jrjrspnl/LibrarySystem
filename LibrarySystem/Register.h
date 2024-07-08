#pragma once
#include "Register.h"
#include <cliext\utility>
#using <System.Data.dll>


namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
	public:
		Form^ obj;
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Register(Form^ obj1) {
			obj = obj1;
			InitializeComponent();
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
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Txt_Firstname;
	private: System::Windows::Forms::TextBox^ Txt_LastName;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Txt_StudentNumber;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ Date_Dob;
	private: System::Windows::Forms::TextBox^ Txt_Password;






	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Txt_ConfirmPass;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ btnBack;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Txt_Firstname = (gcnew System::Windows::Forms::TextBox());
			this->Txt_LastName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Txt_StudentNumber = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Date_Dob = (gcnew System::Windows::Forms::DateTimePicker());
			this->Txt_Password = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Txt_ConfirmPass = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Linen;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(350, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(330, 397);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(42, 57);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 294);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(100, 57);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 44);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Register";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(17, 133);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 18);
			this->label2->TabIndex = 10;
			this->label2->Text = L"First Name";
			// 
			// Txt_Firstname
			// 
			this->Txt_Firstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Firstname->Location = System::Drawing::Point(20, 154);
			this->Txt_Firstname->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Firstname->Name = L"Txt_Firstname";
			this->Txt_Firstname->Size = System::Drawing::Size(147, 26);
			this->Txt_Firstname->TabIndex = 15;
			// 
			// Txt_LastName
			// 
			this->Txt_LastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_LastName->Location = System::Drawing::Point(182, 154);
			this->Txt_LastName->Margin = System::Windows::Forms::Padding(2);
			this->Txt_LastName->Name = L"Txt_LastName";
			this->Txt_LastName->Size = System::Drawing::Size(147, 26);
			this->Txt_LastName->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(178, 133);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 18);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Last Name";
			// 
			// Txt_StudentNumber
			// 
			this->Txt_StudentNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_StudentNumber->Location = System::Drawing::Point(20, 218);
			this->Txt_StudentNumber->Margin = System::Windows::Forms::Padding(2);
			this->Txt_StudentNumber->Name = L"Txt_StudentNumber";
			this->Txt_StudentNumber->Size = System::Drawing::Size(147, 26);
			this->Txt_StudentNumber->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(17, 197);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 18);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Student Number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(178, 197);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 18);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Birthdate";
			// 
			// Date_Dob
			// 
			this->Date_Dob->CustomFormat = L"yyyy-MM-dd";
			this->Date_Dob->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date_Dob->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Date_Dob->Location = System::Drawing::Point(182, 218);
			this->Date_Dob->Margin = System::Windows::Forms::Padding(2);
			this->Date_Dob->Name = L"Date_Dob";
			this->Date_Dob->Size = System::Drawing::Size(147, 26);
			this->Date_Dob->TabIndex = 26;
			// 
			// Txt_Password
			// 
			this->Txt_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Password->Location = System::Drawing::Point(20, 279);
			this->Txt_Password->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Password->Name = L"Txt_Password";
			this->Txt_Password->PasswordChar = '*';
			this->Txt_Password->Size = System::Drawing::Size(147, 26);
			this->Txt_Password->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label6->Location = System::Drawing::Point(17, 258);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 18);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Password";
			// 
			// Txt_ConfirmPass
			// 
			this->Txt_ConfirmPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_ConfirmPass->Location = System::Drawing::Point(182, 279);
			this->Txt_ConfirmPass->Margin = System::Windows::Forms::Padding(2);
			this->Txt_ConfirmPass->Name = L"Txt_ConfirmPass";
			this->Txt_ConfirmPass->PasswordChar = '*';
			this->Txt_ConfirmPass->Size = System::Drawing::Size(147, 26);
			this->Txt_ConfirmPass->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label7->Location = System::Drawing::Point(178, 258);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 18);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Confirm Password";
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::Linen;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnRegister->Location = System::Drawing::Point(76, 338);
			this->btnRegister->Margin = System::Windows::Forms::Padding(2);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(210, 36);
			this->btnRegister->TabIndex = 31;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &Register::btnRegister_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Bisque;
			this->btnBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.Image")));
			this->btnBack->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBack->Location = System::Drawing::Point(-2, 0);
			this->btnBack->Margin = System::Windows::Forms::Padding(2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Padding = System::Windows::Forms::Padding(8);
			this->btnBack->Size = System::Drawing::Size(50, 45);
			this->btnBack->TabIndex = 33;
			this->btnBack->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBack->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &Register::btnBack_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(688, 417);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->Txt_ConfirmPass);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Txt_Password);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Date_Dob);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Txt_StudentNumber);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Txt_LastName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Txt_Firstname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		obj->Show();
	}
  private:  void clearFields() {
	  Txt_Firstname->Text = "";
	  Txt_LastName->Text = "";
	  Txt_StudentNumber->Text = "";
	  Txt_Password->Text = "";
	  Date_Dob->Value = Date_Dob->MinDate;
  }
	bool IsPasswordValid(String^ password) {
			  
	     if (password->Length < 8) {
			return false;
		  }

		 bool hasDigit = false;
		 bool hasSpecialChar = false;

		 for each (char c in password) {
			 if (Char::IsDigit(c)) {
				 hasDigit = true;
			 }
			 else if (!Char::IsLetterOrDigit(c)) {
				 hasSpecialChar = true;
			 }

			 if (hasDigit && hasSpecialChar) {
				 return true;
			 }
		 }
			   return false;
		   }
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {

		if (String::IsNullOrEmpty(Txt_Firstname->Text) ||
			String::IsNullOrEmpty(Txt_LastName->Text) ||
			String::IsNullOrEmpty(Txt_StudentNumber->Text) ||
			Date_Dob->Value == Date_Dob->MinDate ||
			String::IsNullOrEmpty(Txt_Password->Text) ||
			String::IsNullOrEmpty(Txt_ConfirmPass->Text))
		{
			MessageBox::Show("Empty Fields!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; 
		}

		if (Txt_Password->Text != Txt_ConfirmPass->Text) {
			MessageBox::Show("Passwords do not match!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ password = Txt_Password->Text;
		if (!IsPasswordValid(password)) {
			MessageBox::Show("Password must be at least 8 characters long and contain at least one digit and one special character.", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			clearFields();
			return;

		}

		try {
			connection->Open();

			String^ checkUsername = "SELECT COUNT(*) FROM Users WHERE StudentNumber = @StudentNumber";
			SqlCommand^ checkCommand = gcnew SqlCommand(checkUsername, connection);
			checkCommand->Parameters->AddWithValue("@StudentNumber", Txt_StudentNumber->Text->Trim());

			int userCount = (int)checkCommand->ExecuteScalar();

			if (userCount > 0) {
				clearFields();
				MessageBox::Show("This account already exitst!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				
				String^ insertData = "INSERT INTO Users (FirstName, LastName, StudentNumber, Birthdate, Password, Date_registered,  role) " +
					"VALUES (@FirstName, @LastName, @StudentNumber, @Birthdate, @Password, @Date, @Role)";
				SqlCommand^ insertCommand = gcnew SqlCommand(insertData, connection);
				insertCommand->Parameters->AddWithValue("@FirstName", Txt_Firstname->Text);
				insertCommand->Parameters->AddWithValue("@LastName", Txt_LastName->Text);
				insertCommand->Parameters->AddWithValue("@StudentNumber", Txt_StudentNumber->Text);
				insertCommand->Parameters->AddWithValue("@Birthdate", Date_Dob->Value);
				insertCommand->Parameters->AddWithValue("@Password", Txt_Password->Text);

				DateTime today = DateTime::Today;
				insertCommand->Parameters->AddWithValue("@Date", today);
				insertCommand->Parameters->AddWithValue("@Role", "student");

				insertCommand->ExecuteNonQuery();
				clearFields();
				MessageBox::Show("Successfully Registered!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Hide();
				obj->Show();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void Register_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
	}