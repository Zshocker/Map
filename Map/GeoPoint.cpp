#include "GeoPoint.h"
#include<iostream>
using namespace std;
GeoMap::GeoPoint::GeoPoint(float lap, float lng, int x)
{
	this->lap = lap;
	this->lng = lng;
	this->code = x;
}

GeoMap::GeoPoint::GeoPoint(const GeoPoint& R)
{
	this->code = R.code;
	this->lap = R.lap;
	this->lng = R.lng;
}

void GeoMap::GeoPoint::print() const
{
	cout << " ";
}
