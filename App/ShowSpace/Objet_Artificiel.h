#include <string>
using namespace std;

#ifndef __Objet_Artificiel_h__
#define __Objet_Artificiel_h__

// #include "Planete.h"

class Planete;
class Objet_Artificiel;

class Objet_Artificiel
{
	private: string _nom_objet;
	private: date _date_lancement;
	private: date _date_fin;
	private: string _mission;
	private: Planete* _planete;

	public: string getNom_objet();

	public: void setNom_objet(string aNom_objet);

	public: date getDate_lancement();

	public: void setDate_lancement(date aDate_lancement);

	public: date getDate_fin();

	public: void setDate_fin(date aDate_fin);

	public: string getMission();

	public: void setMission(string aMission);

	public: void setPlanete(Planete* aPlanete);

	public: Planete* getPlanete();
};

#endif
