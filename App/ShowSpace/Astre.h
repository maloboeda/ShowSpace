#include <exception>
#include <string>
using namespace std;

#ifndef __Astre_h__
#define __Astre_h__

class Astre
{
	private: string _nom_astre;
	private: int _rayon;
	private: double _masse;
	private: int _temperature;
	private: float _pesanteur;
	private: int _vitesse_de_rotation;

	public: int getVitesse_de_rotation();

	public: void setVitesse_de_rotation(int aVitesse_de_rotation);

	public: float getPesanteur();

	public: void setPesanteur(float aPesanteur);

	public: int getTemperature();

	public: void setTemperature(int aTemperature);

	public: double getMasse();

	public: void setMasse(double aMasse);

	public: int getRayon();

	public: void setRayon(int aRayon);

	public: string getNom();

	public: void setNom(string aNom);
};

#endif
