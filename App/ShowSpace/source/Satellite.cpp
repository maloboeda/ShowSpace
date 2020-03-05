
#include "Satellite.h"
#include "Planete.h"

void Satellite::setPlanete(Planete* aPlanete) {
	this->_planete = aPlanete;
}

Planete* Satellite::getPlanete() {
	return this->_planete;
}

