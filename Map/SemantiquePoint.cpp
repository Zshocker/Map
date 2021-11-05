#include "SemantiquePoint.h"

SemantiquePoint::SemantiquePoint(float lat, float lng, int code, string S):GeoPoint(lat,lng,code)
{
	this->semantic = S;
	//this->lat= 1;
}

SemantiquePoint::SemantiquePoint(const SemantiquePoint& P):GeoPoint(P)
{
	this->semantic = P.semantic;
}

SemantiquePoint& SemantiquePoint::operator=(const SemantiquePoint&P)
{
	if (this != &P) {
		this->GeoPoint::operator=(P);
		this->semantic = P.semantic;
	}
	return *this;
}

void SemantiquePoint::print()
{
	cout << semantic;
}
