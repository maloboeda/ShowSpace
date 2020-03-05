#include <string>
#include <vector>
using namespace std;

#include "Etoile.h"
#include "Planete.h"
#include "Astre.h"

string Etoile::getType() {
	return this->_type;
}

void Etoile::setType(string aType) {
	this->_type = aType;
}

string Etoile::getSysteme() {
	return this->_systeme;
}

void Etoile::setSysteme(string aSysteme) {
	this->_systeme = aSysteme;
}

void Etoile::addPlanetes(Planete* aPlanetes) {
	this->_planetes.push_back(aPlanetes);
}

void Etoile::removePlanetes(Planete* aPlanetes) {
	for (unsigned int i = this->_planetes.size() - 1; i >= 0; i--)
	{
		if (this->_planetes[i] == aPlanetes)
		{
			this->_planetes.erase(this->_planetes.begin() + i);
		}
	}
}

Planete** Etoile::toPlanetesArray() {
	Planete** lPlanetes_Temp = new Planete*[this->_planetes.size()];
	for (unsigned int i = 0; i < this->_planetes.size(); i++)
	{
		lPlanetes_Temp[i] = this->_planetes[i];
	}
	return lPlanetes_Temp;
}

