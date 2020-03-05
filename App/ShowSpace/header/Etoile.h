#include <string>
#include <vector>
using namespace std;

#ifndef __Etoile_h__
#define __Etoile_h__

#include "Planete.h"
#include "Astre.h"

class Planete;
// class Astre;
class Etoile;

class Etoile: public Astre
{
	private: string _type;
	private: string _systeme;
	private: std::vector<Planete*> _planetes;

	public: string getType();

	public: void setType(string aType);

	public: string getSysteme();

	public: void setSysteme(string aSysteme);

	public: void addPlanetes(Planete* aPlanetes);

	public: void removePlanetes(Planete* aPlanetes);

	public: Planete** toPlanetesArray();
};

#endif
