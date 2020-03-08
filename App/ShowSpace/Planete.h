#include <exception>
#include <vector>
using namespace std;

#ifndef __Planete_h__
#define __Planete_h__

//#include "Satellite.h"
#include "Objet_Artificiel.h"
#include "Etoile.h"
#include "Astre.h"

class Satellite;
class Objet_Artificiel;
class Etoile;
class Astre;
class Planete;

class Planete: public Astre
{
    private: int _revolution;
	private: bool _atmopshere;
	private: int _pression_atmospherique;
	private: int _vitesse_orbitale;
	private: int _taille_orbite;
	private: int _position_orbitale;
    private: std::vector<Satellite*> _satellites;
	private: std::vector<Objet_Artificiel*> _objets;
	private: std::vector<Etoile*> _etoile;

    public: int getRevolution();

    public: void setRevolution(int aRevolution);

	public: bool getAtmopshere();

	public: void setAtmopshere(bool aAtmopshere);

	public: int getPression_atmospherique();

	public: void setPression_atmospherique(int aPression_atmospherique);

	public: int getVitesse_orbitale();

	public: void setVitesse_orbitale(int aVitesse_orbitale);

	public: int getTaille_orbite();

	public: void setTaille_orbite(int aTaille_orbite);

	public: int getPosition_orbitale();

	public: void setPosition_orbitale(int aPosition_orbitale);

    public: void addSatellites(Satellite* aSatellites);

    public: void removeSatellites(Satellite* aSatellites);

    public: Satellite** toSatellitesArray();

	public: void addObjets(Objet_Artificiel* aObjets);

	public: void removeObjets(Objet_Artificiel* aObjets);

	public: Objet_Artificiel** toObjetsArray();

	public: void addEtoile(Etoile* aEtoile);

	public: void removeEtoile(Etoile* aEtoile);

	public: Etoile** toEtoileArray();

	public: Planete();
};

#endif
