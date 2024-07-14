#pragma once
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
	/// Summary for AdminGenre
	/// </summary>
	public ref class AdminGenre : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
	public:
		AdminGenre(void)
		{
			InitializeComponent();
			displayGenreData();
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
		void displayGenreData() {
			Genre^ gData = gcnew Genre();

			List<Genre^>^ listData = gData->AllGenresData();
			Table_Genre->DataSource = listData;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminGenre()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Txt_Genre;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Btn_Clear;
	private: System::Windows::Forms::Button^ Btn_Delete;
	private: System::Windows::Forms::Button^ Btn_Update;
	private: System::Windows::Forms::Button^ Btn_Add;
	private: System::Windows::Forms::DataGridView^ Table_Genre;


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
			this->Txt_Genre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Btn_Clear = (gcnew System::Windows::Forms::Button());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Update = (gcnew System::Windows::Forms::Button());
			this->Btn_Add = (gcnew System::Windows::Forms::Button());
			this->Table_Genre = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Genre))->BeginInit();
			this->SuspendLayout();
			// 
			// Txt_Genre
			// 
			this->Txt_Genre->Location = System::Drawing::Point(101, 57);
			this->Txt_Genre->Multiline = true;
			this->Txt_Genre->Name = L"Txt_Genre";
			this->Txt_Genre->Size = System::Drawing::Size(162, 22);
			this->Txt_Genre->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(33, 59);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 19);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Genre:";
			// 
			// Btn_Clear
			// 
			this->Btn_Clear->BackColor = System::Drawing::Color::Linen;
			this->Btn_Clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Clear->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Clear->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Clear->Location = System::Drawing::Point(548, 50);
			this->Btn_Clear->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Clear->Name = L"Btn_Clear";
			this->Btn_Clear->Size = System::Drawing::Size(75, 32);
			this->Btn_Clear->TabIndex = 48;
			this->Btn_Clear->Text = L"CLEAR";
			this->Btn_Clear->UseVisualStyleBackColor = false;
			this->Btn_Clear->Click += gcnew System::EventHandler(this, &AdminGenre::Btn_Clear_Click);
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::Linen;
			this->Btn_Delete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Delete->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Delete->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Delete->Location = System::Drawing::Point(462, 50);
			this->Btn_Delete->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(75, 32);
			this->Btn_Delete->TabIndex = 47;
			this->Btn_Delete->Text = L"DELETE";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			this->Btn_Delete->Click += gcnew System::EventHandler(this, &AdminGenre::Btn_Delete_Click);
			// 
			// Btn_Update
			// 
			this->Btn_Update->BackColor = System::Drawing::Color::Linen;
			this->Btn_Update->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Update->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Update->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Update->Location = System::Drawing::Point(375, 50);
			this->Btn_Update->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->Size = System::Drawing::Size(75, 32);
			this->Btn_Update->TabIndex = 46;
			this->Btn_Update->Text = L"UPDATE";
			this->Btn_Update->UseVisualStyleBackColor = false;
			this->Btn_Update->Click += gcnew System::EventHandler(this, &AdminGenre::Btn_Update_Click);
			// 
			// Btn_Add
			// 
			this->Btn_Add->BackColor = System::Drawing::Color::Linen;
			this->Btn_Add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Add->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Add->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Add->Location = System::Drawing::Point(280, 50);
			this->Btn_Add->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Add->Name = L"Btn_Add";
			this->Btn_Add->Size = System::Drawing::Size(75, 32);
			this->Btn_Add->TabIndex = 45;
			this->Btn_Add->Text = L"ADD";
			this->Btn_Add->UseVisualStyleBackColor = false;
			this->Btn_Add->Click += gcnew System::EventHandler(this, &AdminGenre::Btn_Add_Click);
			// 
			// Table_Genre
			// 
			this->Table_Genre->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Table_Genre->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_Genre->Location = System::Drawing::Point(22, 129);
			this->Table_Genre->Name = L"Table_Genre";
			this->Table_Genre->RowHeadersVisible = false;
			this->Table_Genre->Size = System::Drawing::Size(613, 282);
			this->Table_Genre->TabIndex = 49;
			this->Table_Genre->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminGenre::Table_Genre_CellClick);
			// 
			// AdminGenre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(660, 436);
			this->Controls->Add(this->Table_Genre);
			this->Controls->Add(this->Btn_Clear);
			this->Controls->Add(this->Btn_Delete);
			this->Controls->Add(this->Btn_Update);
			this->Controls->Add(this->Btn_Add);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Txt_Genre);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminGenre";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminGenre";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Genre))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:  int getID = 0;

private:  void clearFields() {
	Txt_Genre->Text = "";
}

	private: System::Void Btn_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		clearFields();
	}
private: System::Void Btn_Add_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Txt_Genre->Text == "") {
		MessageBox::Show("Empty Fields!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (checkConnection()) {
			try
			{
				connection->Open();

				System::String^ checkGen = "SELECT * FROM Genre WHERE Genre = @gen";
				SqlCommand^ cmd = gcnew SqlCommand(checkGen, connection); {
					cmd->Parameters->AddWithValue("@gen", Txt_Genre->Text->Trim());

					SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
					DataTable^ table = gcnew DataTable();
					adapter->Fill(table);

					if (table->Rows->Count > 0)
					{
						MessageBox::Show("Genre: " + Txt_Genre->Text->Trim() + " is already exist!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
					{
						System::String^ insertData = "INSERT INTO Genre(Genre, date) VALUES(@gen, @date)";
						SqlCommand^ insertD = gcnew SqlCommand(insertData, connection); {
							insertD->Parameters->AddWithValue("@gen", Txt_Genre->Text->Trim());
							DateTime today = DateTime::Today;
							insertD->Parameters->AddWithValue("@date", today);

							insertD->ExecuteNonQuery();
							clearFields();
							displayGenreData();
							MessageBox::Show("Added Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

						}
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
}
private: System::Void Btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Txt_Genre->Text == "")
	{
		MessageBox::Show("Empty Fields!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (MessageBox::Show("Are you sure you want to update Genre: " + getID + "?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			if (checkConnection())
			{
				try
				{
					connection->Open();

					System::String^ updateData = "UPDATE Genre SET Genre = @gen WHERE id = @id";
					SqlCommand^ updateCmd = gcnew SqlCommand(updateData, connection);

					updateCmd->Parameters->AddWithValue("@gen", Txt_Genre->Text->Trim());
					updateCmd->Parameters->AddWithValue("@id", getID);

					updateCmd->ExecuteNonQuery();
					clearFields();
					displayGenreData();
					MessageBox::Show("Updated Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally {
					connection->Close();
				}
			}
		}
	}
}
private: System::Void Btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Txt_Genre->Text == "")
	{
		MessageBox::Show("Empty Fields!", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (MessageBox::Show("Are you sure you want to delete Genre: " + getID + "?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			if (checkConnection())
			{
				try
				{
					connection->Open();

					System::String^ removeData = "DELETE Genre WHERE id = @id";
					SqlCommand^ delCmd = gcnew SqlCommand(removeData, connection);

					delCmd->Parameters->AddWithValue("@Gen", Txt_Genre->Text->Trim());
					delCmd->Parameters->AddWithValue("@id", getID);

					delCmd->ExecuteNonQuery();
					clearFields();
					displayGenreData();
					MessageBox::Show("Deleted Successfully!", "Information Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally {
					connection->Close();
				}
			}
		}
	}
}
private: System::Void Table_Genre_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= -1) {

		DataGridViewRow^ row = Table_Genre->Rows[e->RowIndex];

		getID = (int)row->Cells[0]->Value;
		Txt_Genre->Text = row->Cells[1]->Value->ToString();
	}
}
};
}
