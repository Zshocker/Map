#pragma once
#include "GeoPoint.h"
#include<iostream>
using namespace std;
using namespace GeoMap;
class SemantiquePoint :public GeoPoint
{
private:
	string semantic;
public:
	SemantiquePoint(float lat = 0, float lng = 0, int code = 0, string S = "");
	SemantiquePoint(const SemantiquePoint&P);
	SemantiquePoint& operator=(const SemantiquePoint&);
	void print();
};

