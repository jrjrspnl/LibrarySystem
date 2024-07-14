#include "LandingPage.h"
#include "Admin.h"
#include "AdminAdd.h"
#include "AdminGenre.h"
#include "Student.h"
#include "StudentBorrow.h"
#include "AdminView.h"



using namespace LibrarySystem;

[STAThreadAttribute]
int main() {

	Application::Run(gcnew LandingPage());

	return 0;
}
