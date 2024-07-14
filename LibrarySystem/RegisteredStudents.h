using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class RegisteredStudents
{
public:
    property String^ DateRegistered;
    property String^ Birthdate;
    property String^ LastName;
    property String^ FirstName;
    property String^ StudentNumber;
    property int UserID;

    List<RegisteredStudents^>^ displayAllRegisteredStudents() {
        List<RegisteredStudents^>^ listData = gcnew List<RegisteredStudents^>();

        SqlConnection^ connection = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\jimwiel\\Documents\\library.mdf;Integrated Security=True;Connect Timeout=30");
        connection->Open();

        String^ student = "SELECT UserID, StudentNumber, FirstName, LastName, Birthdate, Date_Registered FROM Users WHERE Role = @role";

        SqlCommand^ cmd = gcnew SqlCommand(student, connection);
        cmd->Parameters->AddWithValue("@role", "student");
        SqlDataReader^ reader = cmd->ExecuteReader();

        while (reader->Read())
        {
            RegisteredStudents^ sData = gcnew RegisteredStudents();

            sData->UserID = reader->GetInt32(0);
            sData->StudentNumber = reader["StudentNumber"]->ToString();
            sData->FirstName = reader["FirstName"]->ToString();
            sData->LastName = reader["LastName"]->ToString();
            sData->Birthdate = reader["Birthdate"]->ToString();
            sData->DateRegistered = reader["Date_Registered"]->ToString();

            listData->Add(sData);
        }

        return listData;
    }
};
