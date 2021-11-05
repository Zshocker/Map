#include "Hotel.h"

GeoMap::Hotel::Hotel(float lat, float lng, int code, string S, string nom, int nbreCh):SemantiquePoint(lat,lng,code,S)
{
	this->nmbrChambre = nbreCh;
	this->nom = nom;
}

bool GeoMap::Hotel::VerfierDispo() const
{
	return false;
}

GeoMap::Hotel::Hotel(const Hotel&H):SemantiquePoint(H)
{
	this->nom = H.nom;
	this->nmbrChambre = H.nmbrChambre;
}

Hotel& GeoMap::Hotel::operator=(const Hotel& C)
{
	if (this != &C) 
	{
		this->SemantiquePoint::operator=(C);
		this->nom = C.nom;
		this->nmbrChambre = C.nmbrChambre;
	}
	return *this;
}
