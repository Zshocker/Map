#include "SemantiquePoint.h"

SemantiquePoint::SemantiquePoint(float lat, float lng, int code, string S):GeoPoint(lat,lng,code)
{
	this->semantic = S;
	//this->lat= 1;
}

void SemantiquePoint::print()
{
	cout << semantic;
}
