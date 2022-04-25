#ifndef Car_C_
#define Car_C_

#include "Vehicles_C.h"

class Car_C : public  Vehicle_C
{
private:
	int doors;
public:
	Car_C();
	Car_C(int);
	Car_C(int, string, int);
	//getter
	int Get_Car_Doors() const;
	//setter
	void Set_Car_Doors(int);
	//redefined methods/functions
	virtual void Display_Info();

};

#endif // !Car_C_

