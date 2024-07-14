#pragma once

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for StudentReturn
	/// </summary>
	public ref class StudentReturn : public System::Windows::Forms::Form
	{
		SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
	public:
		String^ studentNumber;
		Form^ ret;
		StudentReturn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		StudentReturn(Form^ return1, String^ studentNumber)
		{
			InitializeComponent();
			this->studentNumber = studentNumber;
			ret = return1;

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
		~StudentReturn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Btn_Return;
	private: System::Windows::Forms::Button^ Pbox_Return;






	private: System::Windows::Forms::DataGridView^ Table_Return;
	private: System::Windows::Forms::NumericUpDown^ Numeric_Num;


	private: System::Windows::Forms::PictureBox^ Pb_Exit;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ Lbl_Year;
	private: System::Windows::Forms::Label^ Lbl_BookAuthor;
	private: System::Windows::Forms::Label^ Lbl_BookTitle;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentReturn::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Btn_Return = (gcnew System::Windows::Forms::Button());
			this->Pbox_Return = (gcnew System::Windows::Forms::Button());
			this->Table_Return = (gcnew System::Windows::Forms::DataGridView());
			this->Numeric_Num = (gcnew System::Windows::Forms::NumericUpDown());
			this->Pb_Exit = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Lbl_Year = (gcnew System::Windows::Forms::Label());
			this->Lbl_BookAuthor = (gcnew System::Windows::Forms::Label());
			this->Lbl_BookTitle = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Return))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Numeric_Num))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->BeginInit();
			this->SuspendLayout();
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
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(670, 67);
			this->panel2->TabIndex = 7;
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
			// Btn_Return
			// 
			this->Btn_Return->BackColor = System::Drawing::Color::Linen;
			this->Btn_Return->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Return->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Return->Location = System::Drawing::Point(80, 336);
			this->Btn_Return->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Return->Name = L"Btn_Return";
			this->Btn_Return->Size = System::Drawing::Size(87, 38);
			this->Btn_Return->TabIndex = 28;
			this->Btn_Return->Text = L"Return";
			this->Btn_Return->UseVisualStyleBackColor = false;
			this->Btn_Return->Click += gcnew System::EventHandler(this, &StudentReturn::Btn_Return_Click);
			// 
			// Pbox_Return
			// 
			this->Pbox_Return->BackColor = System::Drawing::Color::Bisque;
			this->Pbox_Return->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pbox_Return.BackgroundImage")));
			this->Pbox_Return->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Pbox_Return->FlatAppearance->BorderSize = 0;
			this->Pbox_Return->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Pbox_Return->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pbox_Return->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Pbox_Return->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Pbox_Return->Location = System::Drawing::Point(8, 78);
			this->Pbox_Return->Margin = System::Windows::Forms::Padding(2);
			this->Pbox_Return->Name = L"Pbox_Return";
			this->Pbox_Return->Padding = System::Windows::Forms::Padding(11, 0, 8, 0);
			this->Pbox_Return->Size = System::Drawing::Size(41, 37);
			this->Pbox_Return->TabIndex = 56;
			this->Pbox_Return->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Pbox_Return->UseVisualStyleBackColor = false;
			this->Pbox_Return->Click += gcnew System::EventHandler(this, &StudentReturn::Pbox_Return_Click);
			// 
			// Table_Return
			// 
			this->Table_Return->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table_Return->Location = System::Drawing::Point(282, 99);
			this->Table_Return->Name = L"Table_Return";
			this->Table_Return->RowHeadersVisible = false;
			this->Table_Return->Size = System::Drawing::Size(366, 275);
			this->Table_Return->TabIndex = 57;
			this->Table_Return->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentReturn::Table_Return_CellClick);
			// 
			// Numeric_Num
			// 
			this->Numeric_Num->Location = System::Drawing::Point(16, 174);
			this->Numeric_Num->Name = L"Numeric_Num";
			this->Numeric_Num->Size = System::Drawing::Size(120, 20);
			this->Numeric_Num->TabIndex = 58;
			// 
			// Pb_Exit
			// 
			this->Pb_Exit->BackColor = System::Drawing::Color::NavajoWhite;
			this->Pb_Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Exit.BackgroundImage")));
			this->Pb_Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Pb_Exit->Location = System::Drawing::Point(633, 5);
			this->Pb_Exit->Margin = System::Windows::Forms::Padding(2);
			this->Pb_Exit->Name = L"Pb_Exit";
			this->Pb_Exit->Size = System::Drawing::Size(31, 29);
			this->Pb_Exit->TabIndex = 60;
			this->Pb_Exit->TabStop = false;
			this->Pb_Exit->Click += gcnew System::EventHandler(this, &StudentReturn::Pb_Exit_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label8->Location = System::Drawing::Point(13, 153);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 18);
			this->label8->TabIndex = 91;
			this->label8->Text = L"Quantity:";
			// 
			// Lbl_Year
			// 
			this->Lbl_Year->AutoSize = true;
			this->Lbl_Year->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Year->Location = System::Drawing::Point(141, 265);
			this->Lbl_Year->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Year->Name = L"Lbl_Year";
			this->Lbl_Year->Size = System::Drawing::Size(0, 14);
			this->Lbl_Year->TabIndex = 97;
			// 
			// Lbl_BookAuthor
			// 
			this->Lbl_BookAuthor->AutoSize = true;
			this->Lbl_BookAuthor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_BookAuthor->Location = System::Drawing::Point(114, 235);
			this->Lbl_BookAuthor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_BookAuthor->Name = L"Lbl_BookAuthor";
			this->Lbl_BookAuthor->Size = System::Drawing::Size(0, 14);
			this->Lbl_BookAuthor->TabIndex = 96;
			// 
			// Lbl_BookTitle
			// 
			this->Lbl_BookTitle->AutoSize = true;
			this->Lbl_BookTitle->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_BookTitle->Location = System::Drawing::Point(100, 206);
			this->Lbl_BookTitle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_BookTitle->Name = L"Lbl_BookTitle";
			this->Lbl_BookTitle->Size = System::Drawing::Size(0, 14);
			this->Lbl_BookTitle->TabIndex = 95;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(13, 263);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 18);
			this->label5->TabIndex = 94;
			this->label5->Text = L"Publication Year:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(13, 233);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 18);
			this->label4->TabIndex = 93;
			this->label4->Text = L"Book Author:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(13, 204);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 18);
			this->label3->TabIndex = 92;
			this->label3->Text = L"Book Title:";
			// 
			// StudentReturn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(670, 397);
			this->Controls->Add(this->Lbl_Year);
			this->Controls->Add(this->Lbl_BookAuthor);
			this->Controls->Add(this->Lbl_BookTitle);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Pb_Exit);
			this->Controls->Add(this->Numeric_Num);
			this->Controls->Add(this->Table_Return);
			this->Controls->Add(this->Pbox_Return);
			this->Controls->Add(this->Btn_Return);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StudentReturn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentReturn";
			this->Load += gcnew System::EventHandler(this, &StudentReturn::StudentReturn_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table_Return))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Numeric_Num))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: void displayBorrowedBooks() {
	if (checkConnection()) {
		try {
			connection->Open();

			System::String^ query = "SELECT bb.id, b.book_id, b.book_title, b.book_author, b.publication_year, bb.quantity FROM BorrowedBooks bb INNER JOIN books b ON bb.book_id = b.book_id WHERE bb.student_number = @student_number AND bb.returned_date IS NULL";
			SqlCommand^ cmd = gcnew SqlCommand(query, connection);
			cmd->Parameters->AddWithValue("@student_number", studentNumber);
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);

			Table_Return->DataSource = dt;
			Table_Return->SelectionMode = DataGridViewSelectionMode::FullRowSelect;  // Ensure full row selection
		}
		catch (Exception^ ex) {
			MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
}
private: System::Void Pb_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Pbox_Return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ret->Show();
}
	private: System::Void Btn_Return_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Table_Return->SelectedRows->Count == 0) {
			MessageBox::Show("Please select a book to return.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		DataGridViewRow^ selectedRow = Table_Return->SelectedRows[0];
		System::String^ borrowedBookID = selectedRow->Cells["id"]->Value->ToString();
		System::String^ bookID = selectedRow->Cells["book_id"]->Value->ToString();
		int quantityToReturn = safe_cast<int>(Numeric_Num->Value);

		if (quantityToReturn <= 0) {
			MessageBox::Show("Please enter a valid quantity to return.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (checkConnection()) {
			try {
				connection->Open();

				// Check current borrowed quantity of the specific borrow record
				System::String^ checkQuantityQuery = "SELECT quantity FROM BorrowedBooks WHERE id = @id AND student_number = @student_number AND returned_date IS NULL";
				SqlCommand^ cmdCheckQuantity = gcnew SqlCommand(checkQuantityQuery, connection);
				cmdCheckQuantity->Parameters->AddWithValue("@id", borrowedBookID);
				cmdCheckQuantity->Parameters->AddWithValue("@student_number", studentNumber);
				int currentBorrowedQuantity = Convert::ToInt32(cmdCheckQuantity->ExecuteScalar());

				if (quantityToReturn > currentBorrowedQuantity) {
					MessageBox::Show("Quantity to return exceeds borrowed quantity.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Update books table
				System::String^ updateBooks = "UPDATE books SET quantity = quantity + @quantity WHERE book_id = @book_id";
				SqlCommand^ cmdUpdateBooks = gcnew SqlCommand(updateBooks, connection);
				cmdUpdateBooks->Parameters->AddWithValue("@quantity", quantityToReturn);
				cmdUpdateBooks->Parameters->AddWithValue("@book_id", bookID);
				cmdUpdateBooks->ExecuteNonQuery();

				// Update BorrowedBooks table
				System::String^ updateBorrowedBooks;
				if (quantityToReturn == currentBorrowedQuantity) {
					updateBorrowedBooks = "UPDATE BorrowedBooks SET returned_date = GETDATE() WHERE id = @id AND student_number = @student_number AND returned_date IS NULL";
				}
				else {
					updateBorrowedBooks = "UPDATE BorrowedBooks SET quantity = quantity - @quantity WHERE id = @id AND student_number = @student_number AND returned_date IS NULL";
				}
				SqlCommand^ cmdUpdateBorrowedBooks = gcnew SqlCommand(updateBorrowedBooks, connection);
				cmdUpdateBorrowedBooks->Parameters->AddWithValue("@quantity", quantityToReturn);
				cmdUpdateBorrowedBooks->Parameters->AddWithValue("@id", borrowedBookID);
				cmdUpdateBorrowedBooks->Parameters->AddWithValue("@student_number", studentNumber);
				cmdUpdateBorrowedBooks->ExecuteNonQuery();

				// Check current stock of the book after return
				System::String^ checkStockQuery = "SELECT quantity FROM books WHERE book_id = @book_id";
				SqlCommand^ cmdCheckStock = gcnew SqlCommand(checkStockQuery, connection);
				cmdCheckStock->Parameters->AddWithValue("@book_id", bookID);
				int currentStock = Convert::ToInt32(cmdCheckStock->ExecuteScalar());

				// Update book status to 'Available' if all borrowed copies are returned
				if (currentStock > 0) {
					System::String^ updateStatusQuery = "UPDATE books SET status = 'Available' WHERE book_id = @book_id";
					SqlCommand^ cmdUpdateStatus = gcnew SqlCommand(updateStatusQuery, connection);
					cmdUpdateStatus->Parameters->AddWithValue("@book_id", bookID);
					cmdUpdateStatus->ExecuteNonQuery();
				}

				MessageBox::Show("Book returned successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Connection Failed: " + ex->Message, "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				connection->Close();
			}
		}
	}
private: System::Void StudentReturn_Load(System::Object^ sender, System::EventArgs^ e) {
	displayBorrowedBooks();
}
private: System::Void Table_Return_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		DataGridViewRow^ row = Table_Return->Rows[e->RowIndex];
		Lbl_BookTitle->Text = row->Cells["book_title"]->Value->ToString();
		Lbl_BookAuthor->Text = row->Cells["book_author"]->Value->ToString();
		Lbl_Year->Text = row->Cells["publication_year"]->Value->ToString();
	}
}
};
}
