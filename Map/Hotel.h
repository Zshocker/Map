#pragma once
#include "SemantiquePoint.h"
namespace GeoMap {
	class Hotel :
		private SemantiquePoint
	{
	private:
		string nom;
		int nmbrChambre;
	public:
		Hotel(float lat = 0, float lng = 0, int code = 0, string S = "", string nom = "", int nbreCh=0);
		bool VerfierDispo()const ;
		Hotel(const Hotel&);
		Hotel& operator=(const Hotel&);
	};
}


