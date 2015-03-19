#include "Grupa.h"


Grupa::Grupa() {}
Grupa::~Grupa() {}

Uchitel* Grupa::getUchitel(string name) {

	if (name.length() < 3 || uchiteli.size() < 1)
		return nullptr;

	for (auto i = uchiteli.begin(); i != uchiteli.end(); i++) {
		if (i->name == name) {
			return &(*i);
		}
	}

	return nullptr;
}
