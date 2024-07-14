#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class Genre
{
public:
    property String^ Date;
    property String^ genre;
    property int ID;

    List<Genre^>^ AllGenresData() {
        List<Genre^>^ listData = gcnew List<Genre^>();

        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
        {
            connection->Open();

            String^ selectData = "SELECT * FROM Genre";

            SqlCommand^ cmd = gcnew SqlCommand(selectData, connection);
            {

                SqlDataReader^ reader = cmd->ExecuteReader();

                while (reader->Read())
                {

                    Genre^ gData = gcnew Genre();

                    gData->ID = (int)reader["id"];
                    gData->genre = reader["Genre"]->ToString();
                    gData->Date = reader["date"]->ToString();

                    listData->Add(gData);
                }
            }
        }
        return listData;
    }
};