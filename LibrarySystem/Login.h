#pragma once
#include "Register.h"
#include "Admin.h"
#include "Student.h"


namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
	public:
		Login(void)
		{
			InitializeComponent();
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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ Cbox_Module;
	private: System::Windows::Forms::TextBox^ Txt_Password;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Txt_Username;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ btnContinue;


	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkReg;
	private: System::Windows::Forms::PictureBox^ Pb_Exit;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Cbox_Module = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Txt_Username = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Password = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkReg = (gcnew System::Windows::Forms::LinkLabel());
			this->Pb_Exit = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(34, 68);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(262, 284);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Linen;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(9, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(340, 397);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(462, 61);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Login";
			// 
			// Cbox_Module
			// 
			this->Cbox_Module->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Cbox_Module->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_Module->FormattingEnabled = true;
			this->Cbox_Module->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"student", L"admin" });
			this->Cbox_Module->Location = System::Drawing::Point(393, 176);
			this->Cbox_Module->Margin = System::Windows::Forms::Padding(2);
			this->Cbox_Module->Name = L"Cbox_Module";
			this->Cbox_Module->Size = System::Drawing::Size(242, 26);
			this->Cbox_Module->TabIndex = 2;
			this->Cbox_Module->SelectedIndexChanged += gcnew System::EventHandler(this, &Login::Cbox_Module_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(393, 154);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Module";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(391, 206);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Student ID:";
			// 
			// Txt_Username
			// 
			this->Txt_Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Username->Location = System::Drawing::Point(393, 230);
			this->Txt_Username->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Username->Name = L"Txt_Username";
			this->Txt_Username->Size = System::Drawing::Size(242, 26);
			this->Txt_Username->TabIndex = 5;
			// 
			// Txt_Password
			// 
			this->Txt_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Password->Location = System::Drawing::Point(393, 282);
			this->Txt_Password->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Password->Name = L"Txt_Password";
			this->Txt_Password->PasswordChar = '*';
			this->Txt_Password->Size = System::Drawing::Size(242, 26);
			this->Txt_Password->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(391, 261);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Password:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(416, 387);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 14);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Don\'t Have An Account\?";
			// 
			// btnContinue
			// 
			this->btnContinue->BackColor = System::Drawing::Color::Linen;
			this->btnContinue->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContinue->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnContinue->Location = System::Drawing::Point(468, 329);
			this->btnContinue->Margin = System::Windows::Forms::Padding(2);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(95, 42);
			this->btnContinue->TabIndex = 11;
			this->btnContinue->Text = L"Login";
			this->btnContinue->UseVisualStyleBackColor = false;
			this->btnContinue->Click += gcnew System::EventHandler(this, &Login::btnContinue_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->Location = System::Drawing::Point(0, 0);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(75, 19);
			this->linkLabel1->TabIndex = 0;
			// 
			// linkReg
			// 
			this->linkReg->AutoSize = true;
			this->linkReg->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkReg->LinkColor = System::Drawing::Color::SaddleBrown;
			this->linkReg->Location = System::Drawing::Point(561, 386);
			this->linkReg->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkReg->Name = L"linkReg";
			this->linkReg->Size = System::Drawing::Size(57, 14);
			this->linkReg->TabIndex = 13;
			this->linkReg->TabStop = true;
			this->linkReg->Text = L"Register";
			this->linkReg->VisitedLinkColor = System::Drawing::Color::Tomato;
			this->linkReg->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkReg_LinkClicked);
			// 
			// Pb_Exit
			// 
			this->Pb_Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Exit.BackgroundImage")));
			this->Pb_Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Pb_Exit->Location = System::Drawing::Point(649, 8);
			this->Pb_Exit->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Exit->Name = L"Pb_Exit";
			this->Pb_Exit->Size = System::Drawing::Size(31, 29);
			this->Pb_Exit->TabIndex = 14;
			this->Pb_Exit->TabStop = false;
			this->Pb_Exit->Click += gcnew System::EventHandler(this, &Login::Pb_Exit_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(688, 417);
			this->Controls->Add(this->Pb_Exit);
			this->Controls->Add(this->linkReg);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Txt_Password);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Txt_Username);
			this->Controls->Add(this->Cbox_Module);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (Cbox_Module->SelectedItem == nullptr) {
		MessageBox::Show("Please select a role before continuing.", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (String::IsNullOrEmpty(Txt_Username->Text) || String::IsNullOrEmpty(Txt_Password->Text)) {
		MessageBox::Show("Username and password fields cannot be empty.", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ studentNumber = Txt_Username->Text;
	String^ password = Txt_Password->Text;
	String^ selectedRole = Cbox_Module->SelectedItem->ToString(); // Get selected role from ComboBox

	try {
		connection->Open();

		String^ query = "SELECT Role FROM Users WHERE StudentNumber = @StudentNumber AND Password = @Password";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@StudentNumber", studentNumber);
		command->Parameters->AddWithValue("@Password", password);

		Object^ role = command->ExecuteScalar();

		if (role != nullptr) {
			String^ userRole = role->ToString();

			// Check if the role from the database matches the role selected in the ComboBox
			if (userRole == selectedRole) {
				// Redirect based on user role
				if (userRole == "admin") {
					this->Hide();
					Admin^ ad1 = gcnew Admin(this);
					ad1->ShowDialog();
					clearFields();

				}
				else if (userRole == "student") {
					this->Hide();
					Student^ min1 = gcnew Student(this);
					min1->ShowDialog();	
					clearFields();
				}
			}
			else {
				MessageBox::Show("Invalid match! Please select the correct role.", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				clearFields(); 
			}
		}
		else {
			MessageBox::Show("Invalid credentials!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			clearFields();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}
}

private: System::Void clearFields() {
	Txt_Username->Clear();
	Txt_Password->Clear();
	Cbox_Module->SelectedIndex = -1; // Optionally, clear the selected role
}
private: System::Void linkReg_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->Hide();
	Register^ obj1 = gcnew Register(this);
	obj1->Show();
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Cbox_Module_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Pb_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
