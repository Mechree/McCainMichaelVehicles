#include "Vehicles_C.h"

Vehicle_C::Vehicle_C()
{
	manufacturer = "";
	yearBuilt = 0;

}

Vehicle_C::Vehicle_C(string man, int yr)
{
	manufacturer = man;
	yearBuilt = yr;
}

int Vehicle_C::Get_Vehicle_Year() const
{
	return yearBuilt;
}

string Vehicle_C::Get_Vehicle_Man() const
{
	return manufacturer;
}

void Vehicle_C::Set_Vehicle_Year(int yr)
{
	yearBuilt = yr;
}

void Vehicle_C::Set_Vehicle_Man(string man)
{
	manufacturer = man;
}

void Vehicle_C::Display_Info()
{
	cout << "\nManufacturer : " << manufacturer;
	cout << "\nYear Built   : " << yearBuilt;
}