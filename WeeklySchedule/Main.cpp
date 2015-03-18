#include <iostream>
#include <vector>

#include "Klass.h"
#include "WeeklySchedule.h"

using namespace std;
using namespace WeeklySchedule;

[STAThread]
int main() {
	MyForm theForm;
	vector<Klass> klasove;
	
	Application::Run(%theForm);


	return 0;
}