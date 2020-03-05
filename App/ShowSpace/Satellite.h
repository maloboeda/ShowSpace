
#ifndef __Satellite_h__
#define __Satellite_h__

#include "Planete.h"

// class Planete;
class Satellite;

class Satellite: public Planete
{
	private: Planete* _planete;

	public: void setPlanete(Planete* aPlanete);

	public: Planete* getPlanete();
};

#endif
