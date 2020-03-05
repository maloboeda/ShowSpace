#include <string>
using namespace std;

#include "Objet_Artificiel.h"
#include "Planete.h"

string Objet_Artificiel::getNom_objet() {
	return this->_nom_objet;
}

void Objet_Artificiel::setNom_objet(string aNom_objet) {
	this->_nom_objet = aNom_objet;
}

date Objet_Artificiel::getDate_lancement() {
	return this->_date_lancement;
}

void Objet_Artificiel::setDate_lancement(date aDate_lancement) {
	this->_date_lancement = aDate_lancement;
}

date Objet_Artificiel::getDate_fin() {
	return this->_date_fin;
}

void Objet_Artificiel::setDate_fin(date aDate_fin) {
	this->_date_fin = aDate_fin;
}

string Objet_Artificiel::getMission() {
	return this->_mission;
}

void Objet_Artificiel::setMission(string aMission) {
	this->_mission = aMission;
}

void Objet_Artificiel::setPlanete(Planete* aPlanete) {
	this->_planete = aPlanete;
}

Planete* Objet_Artificiel::getPlanete() {
	return this->_planete;
}

