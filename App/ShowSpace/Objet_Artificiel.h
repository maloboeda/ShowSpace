#include <string>
#include <ctime>
using namespace std;

#ifndef __Objet_Artificiel_h__
#define __Objet_Artificiel_h__

#include "Planete.h"

class Planete;
class Objet_Artificiel;

class Objet_Artificiel
{
	private: string _nom_objet;
    private: tm _date_lancement;
    private: tm _date_fin;
	private: string _mission;
	private: Planete* _planete;

	public: string getNom_objet();

	public: void setNom_objet(string aNom_objet);

    public: tm getDate_lancement();

    public: void setDate_lancement(tm aDate_lancement);

    public: tm getDate_fin();

    public: void setDate_fin(tm aDate_fin);

	public: string getMission();

	public: void setMission(string aMission);

	public: void setPlanete(Planete* aPlanete);

	public: Planete* getPlanete();
};

#endif
