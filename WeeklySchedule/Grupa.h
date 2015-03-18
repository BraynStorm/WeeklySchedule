#pragma once

#include <iostream>
#include <map>

#include "Uchitel.h";
#include "Predmet.h";

using namespace std;

typedef pair<Uchitel, Predmet> UchitelPredmetPair;

class Grupa {
	public:
		int id;
		map<Uchitel, Predmet> predmeti;
		map<Predmet, int> broiChasove;
		Grupa();
		~Grupa();
};

