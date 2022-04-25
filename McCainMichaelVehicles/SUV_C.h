#ifndef SUV_C_
#define SUV_C_

#include "Car_C.h"

class SUV_C : public Car_C
{
private:
	float fuelCap; // in gallons
public:
	SUV_C();
	SUV_C(float, int, string, int);

	float Get_FuelCap() const;
	
	void Set_FuelCap(float);

	virtual void Display_Info();
};

#endif // !SUV_C_
