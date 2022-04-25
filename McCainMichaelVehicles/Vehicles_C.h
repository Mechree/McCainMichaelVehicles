#ifndef Vehicle_C_
#define Vehicle_C_
#include<string>
#include<iostream>

using namespace std;

class Vehicle_C
{
private:
	string manufacturer;
	int yearBuilt;

public:
	// constructors
	Vehicle_C();
	Vehicle_C(string, int);
	// getters
	int Get_Vehicle_Year() const;
	string Get_Vehicle_Man() const;
	// setters
	void Set_Vehicle_Year(int);
	void Set_Vehicle_Man(string);
	// redfined 

	virtual void Display_Info();
};

#endif // !Vehicles_C_
