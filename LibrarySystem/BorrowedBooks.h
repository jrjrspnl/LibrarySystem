#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

public ref class BorrowedBooks {

public:
    property String^ Quantity;
    property String^ BorrowedDate;
    property String^ StudentNumber;
    property String^ BookID;
    property int ID;

    List<BorrowedBooks^>^ displayAllBorrowedBooks() {
        List<BorrowedBooks^>^ listData = gcnew List<BorrowedBooks^>();

        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
        {
            connection->Open();

            // Select only rows where returned_date is NULL
            String^ selectBook = "SELECT * FROM BorrowedBooks WHERE returned_date IS NULL";

            SqlCommand^ cmd = gcnew SqlCommand(selectBook, connection);
            {
                SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read())
                {
                    BorrowedBooks^ bBooks = gcnew BorrowedBooks();

                    bBooks->ID = (int)reader["id"];
                    bBooks->BookID = reader["book_id"]->ToString();
                    bBooks->StudentNumber = reader["student_number"]->ToString();
                    bBooks->BorrowedDate = reader["borrowed_date"]->ToString();
                    bBooks->Quantity = reader["quantity"]->ToString();

                    listData->Add(bBooks);
                }
            }
        }
        return listData;
    }

};
