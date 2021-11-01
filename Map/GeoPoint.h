#pragma once
namespace GeoMap {
	class GeoPoint
	{
	private:
		float lap,lng;
		int code;
	public:
		GeoPoint(float lap=0, float lng=0, int x=0);
		GeoPoint(const GeoPoint&);
		//GeoPoint& operator=(const GeoPoint&);
		void print()const;
	private: void working();
	};
};


