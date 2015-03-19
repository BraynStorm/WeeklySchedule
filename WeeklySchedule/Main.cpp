#include <iostream>
#include <vector>

#include "Klass.h"
#include "WeeklySchedule.h"

using namespace std;
using namespace WeeklySchedule;

Klass* selectedKlass;
Grupa* selectedGrupa;
Uchitel* selectedUchitel;
Predmet* selectedPredmet;


vector<Klass> klasove;

[STAThread] int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MyForm theForm;
	Application::Run(%theForm);
	return 0;
}