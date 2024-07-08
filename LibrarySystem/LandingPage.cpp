#include "LandingPage.h"
#include "Admin.h"
#include "AdminAdd.h"
#include "Student.h"
#include "StudentBorrow.h"



using namespace LibrarySystem;

[STAThreadAttribute]
int main() {

	Application::Run(gcnew LandingPage());

	return 0;
}
