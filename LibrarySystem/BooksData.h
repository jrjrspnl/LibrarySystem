#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class BooksData
{
public:
    property String^ Date; // 0
    property String^ Status; // 1
    property String^ Quantity; // 2
    property String^ PYear; // 3
    property String^ BookAuthor; // 4
    property String^ BookTitle; // 5
    property String^ Genre; // 6
    property String^ BookID; // 7
    property int ID; // 8

    List<BooksData^>^ displayAllBooks() {
        List<BooksData^>^ listData = gcnew List<BooksData^>();

        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
        {
            connection->Open();

            String^ selectBook = "SELECT * FROM books";

            SqlCommand^ cmd = gcnew SqlCommand(selectBook, connection);
            {
                SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read())
                {

                    BooksData^ bData = gcnew BooksData();

                    bData->ID = (int)reader["id"];
                    bData->BookID = reader["book_id"]->ToString();
                    bData->Genre = reader["genre"]->ToString();
                    bData->BookTitle = reader["book_title"]->ToString();
                    bData->BookAuthor = reader["book_author"]->ToString();
                    bData->PYear = reader["publication_year"]->ToString();
                    bData->Quantity = reader["quantity"]->ToString();
                    bData->Status = reader["status"]->ToString();
                    bData->Date = reader["date_insert"]->ToString();

                    listData->Add(bData);
                }
            }
        }
        return listData;
    }
    List<BooksData^>^ AllAvailableBooks() {
        List<BooksData^>^ listData = gcnew List<BooksData^>();

        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
        {
            connection->Open();

            String^ selectBook = "SELECT * FROM books WHERE status = @status";

            SqlCommand^ cmd = gcnew SqlCommand(selectBook, connection);
            {
                cmd->Parameters->AddWithValue("@status", "Available");
                SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read())
                {

                    BooksData^ bData = gcnew BooksData();

                    bData->ID = (int)reader["id"];
                    bData->BookID = reader["book_id"]->ToString();
                    bData->Genre = reader["genre"]->ToString();
                    bData->BookTitle = reader["book_title"]->ToString();
                    bData->BookAuthor = reader["book_author"]->ToString();
                    bData->PYear = reader["publication_year"]->ToString();
                    bData->Quantity = reader["quantity"]->ToString();
                    bData->Status = reader["status"]->ToString();
                    bData->Date = reader["date_insert"]->ToString();

                    listData->Add(bData);
                }
            }
        }
        return listData;
    }
};
