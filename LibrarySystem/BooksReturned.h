#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class BooksReturned{
public:
    property String^ ReturnedDate;
    property String^ Quantity;
    property String^ BorrowedDate;
    property String^ StudentNumber;
    property String^ BookID;
    property int ID;

    List<BooksReturned^>^ displayAllReturnedBooks() {
        List<BooksReturned^>^ listData = gcnew List<BooksReturned^>();

        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
        {
            connection->Open();

            // Select only rows where returned_date is not NULL
            String^ selectBook = "SELECT * FROM BorrowedBooks WHERE returned_date IS NOT NULL";

            SqlCommand^ cmd = gcnew SqlCommand(selectBook, connection);
            {
                SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read())
                {
                    BooksReturned^ RBooks = gcnew BooksReturned();

                    RBooks->ID = (int)reader["id"];
                    RBooks->BookID = reader["book_id"]->ToString();
                    RBooks->StudentNumber = reader["student_number"]->ToString();
                    RBooks->BorrowedDate = reader["borrowed_date"]->ToString();
                    RBooks->Quantity = reader["quantity"]->ToString();
                    RBooks->ReturnedDate = reader["returned_date"]->ToString(); // Set ReturnedDate

                    listData->Add(RBooks);
                }
            }
        }
        return listData;
    }
};

