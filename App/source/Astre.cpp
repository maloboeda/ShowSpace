#include <exception>
#include <string>
using namespace std;

#include "Astre.h"
int Astre::getVitesse_de_rotation() {
	return this->_vitesse_de_rotation;
}

void Astre::setVitesse_de_rotation(int aVitesse_de_rotation) {
	this->_vitesse_de_rotation = aVitesse_de_rotation;
}

float Astre::getPesanteur() {
	return this->_pesanteur;
}

void Astre::setPesanteur(float aPesanteur) {
	this->_pesanteur = aPesanteur;
}

int Astre::getTemperature() {
	return this->_temperature;
}

void Astre::setTemperature(int aTemperature) {
	this->_temperature = aTemperature;
}

double Astre::getMasse() {
	return this->_masse;
}

void Astre::setMasse(double aMasse) {
	this->_masse = aMasse;
}

int Astre::getRayon() {
	return this->_rayon;
}

void Astre::setRayon(int aRayon) {
	this->_rayon = aRayon;
}

string Astre::getNom() {
	throw "Not yet implemented";
}

void Astre::setNom(string aNom) {
	throw "Not yet implemented";
}

