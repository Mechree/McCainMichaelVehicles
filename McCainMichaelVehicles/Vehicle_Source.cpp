// Michael McCain
// 04/24/2022
// This program creates a vehicle class and several other derivitives of that class.

#include "SUV_C.h"
void Display_Info(Vehicle_C&);

int main()
{
	string manufacturer;
	int yrB;
	Vehicle_C veh1;

	cout << "\nEnter the manufacturer of a vehicle>";
	getline(cin, manufacturer);
	cout << "\nEnter the year built>";
	cin >> yrB;
	
	veh1.Set_Vehicle_Man(manufacturer);
	veh1.Set_Vehicle_Year(yrB);

	Display_Info(veh1);
	cout << endl;

	Car_C car;
	int doors;

	cout << "\nEnter the manufacturer of a car>";
	cin.ignore();
	getline(cin, manufacturer);
	car.Set_Vehicle_Man(manufacturer);

	cout << "\nEnter the year built>";
	cin >> yrB;
	car.Set_Vehicle_Year(yrB);

	cout << "\nEnter number of doors>";
	cin >> doors;
	car.Set_Car_Doors(doors);

	Display_Info(car);

	SUV_C tahoe;
	int fuelCap;

	cout << "\nEnter the manufacturer of an SUV>";
	cin.ignore();
	getline(cin, manufacturer);
	tahoe.Set_Vehicle_Man(manufacturer);

	cout << "\nEnter the year built>";
	cin >> yrB;
	tahoe.Set_Vehicle_Year(yrB);

	cout << "\nEnter number of doors>";
	cin >> doors;
	tahoe.Set_Car_Doors(doors);

	cout << "\nEnter fuel capacity>";
	cin >> fuelCap;
	tahoe.Set_FuelCap(fuelCap);

	Display_Info(tahoe);
	//-------------------//
	cout << endl << endl;
	system("pause");
	return 0;
}

void Display_Info(Vehicle_C& obj)
{
	obj.Display_Info();
}