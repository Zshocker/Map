#include "GeoPoint.h"
#include<iostream>
using namespace GeoMap;
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

GeoPoint& GeoMap::GeoPoint::operator=(const GeoPoint&R)
{
	if (this != &R) {
		this->code = R.code;
		this->lap = R.lap;
		this->lng = R.lng;
	}
	return *this;
}

void GeoMap::GeoPoint::print() const
{
	cout << " ";
}
