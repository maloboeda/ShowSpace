#include <exception>
#include <vector>
using namespace std;

#include "Planete.h"
#include "Satellite.h"
#include "Objet_Artificiel.h"
#include "Etoile.h"
#include "Astre.h"

int Planete::getRévolution() {
	return this->_révolution;
}

void Planete::setRévolution(int aRévolution) {
	this->_révolution = aRévolution;
}

bool Planete::getAtmopshere() {
	return this->_atmopshere;
}

void Planete::setAtmopshere(bool aAtmopshere) {
	this->_atmopshere = aAtmopshere;
}

int Planete::getPression_atmospherique() {
	return this->_pression_atmospherique;
}

void Planete::setPression_atmospherique(int aPression_atmospherique) {
	this->_pression_atmospherique = aPression_atmospherique;
}

int Planete::getVitesse_orbitale() {
	return this->_vitesse_orbitale;
}

void Planete::setVitesse_orbitale(int aVitesse_orbitale) {
	this->_vitesse_orbitale = aVitesse_orbitale;
}

int Planete::getTaille_orbite() {
	return this->_taille_orbite;
}

void Planete::setTaille_orbite(int aTaille_orbite) {
	this->_taille_orbite = aTaille_orbite;
}

int Planete::getPosition_orbitale() {
	return this->_position_orbitale;
}

void Planete::setPosition_orbitale(int aPosition_orbitale) {
	this->_position_orbitale = aPosition_orbitale;
}

void Planete::addSatellites(Satellite* aSatellites) {
	this->_satellites.push_back(aSatellites);
}

void Planete::removeSatellites(Satellite* aSatellites) {
	for (unsigned int i = this->_satellites.size() - 1; i >= 0; i--)
	{
		if (this->_satellites[i] == aSatellites)
		{
			this->_satellites.erase(this->_satellites.begin() + i);
		}
	}
}

Satellite** Planete::toSatellitesArray() {
	Satellite** lSatellites_Temp = new Satellite*[this->_satellites.size()];
	for (unsigned int i = 0; i < this->_satellites.size(); i++)
	{
		lSatellites_Temp[i] = this->_satellites[i];
	}
	return lSatellites_Temp;
}

void Planete::addObjets(Objet_Artificiel* aObjets) {
	this->_objets.push_back(aObjets);
}

void Planete::removeObjets(Objet_Artificiel* aObjets) {
	for (unsigned int i = this->_objets.size() - 1; i >= 0; i--)
	{
		if (this->_objets[i] == aObjets)
		{
			this->_objets.erase(this->_objets.begin() + i);
		}
	}
}

Objet_Artificiel** Planete::toObjetsArray() {
	Objet_Artificiel** lObjets_Temp = new Objet_Artificiel*[this->_objets.size()];
	for (unsigned int i = 0; i < this->_objets.size(); i++)
	{
		lObjets_Temp[i] = this->_objets[i];
	}
	return lObjets_Temp;
}

void Planete::addEtoile(Etoile* aEtoile) {
	this->_etoile.push_back(aEtoile);
}

void Planete::removeEtoile(Etoile* aEtoile) {
	for (unsigned int i = this->_etoile.size() - 1; i >= 0; i--)
	{
		if (this->_etoile[i] == aEtoile)
		{
			this->_etoile.erase(this->_etoile.begin() + i);
		}
	}
}

Etoile** Planete::toEtoileArray() {
	Etoile** lEtoile_Temp = new Etoile*[this->_etoile.size()];
	for (unsigned int i = 0; i < this->_etoile.size(); i++)
	{
		lEtoile_Temp[i] = this->_etoile[i];
	}
	return lEtoile_Temp;
}

Planete::Planete() {
	_pression_atmospherique = 0;
}

