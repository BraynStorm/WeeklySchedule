#pragma once

#include <iostream>
#include <vector>

#include "Predmet.h"

using namespace std;

class Uchitel {
	public:

		/* Ime na uchitelq. */
		string name;

		/* Vector, s vsichki predmeti, po koito tozi ochitel prepodava. */
		vector<Predmet> predmenti;

		/* id na uchitel, za po-lesna identifikaciq. */
		int id;
		Uchitel();
		~Uchitel();
};

