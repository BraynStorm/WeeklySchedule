#pragma once

#include "Grupa.h";

class Klass {
	public:

		/* Otdelnite grupi za tozi klas (nai-chesto 2)*/
		vector<Grupa> grupi;

		/* Obshti predmeti za wsichki grupi */
		vector<Predmet> predmeti;

		Klass();
		~Klass();
};
