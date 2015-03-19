#pragma once

#include <map>

#include "Uchitel.h";

class Grupa {
	public:
		/* id na grupata (t.e. purva, vtora, etc) */
		int id;

		/* Vector s vsichki uchiteli, koito prepodavat  !!! SAMO !!!  na tazi grupa */
		vector<Uchitel> uchiteli;

		/* BroiChasove za vseki predmet */
		map<Predmet, int> broiChasove;

		Uchitel* getUchitel(string);

		Grupa();
		~Grupa();
};

