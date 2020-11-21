/// VehicleTestMain.cpp
#include <iostream>
#include <string>
using namespace std;
#include "Vehicle.h"

/// <summary>
/// Acceleration Test.
/// </summary>
/// <param name="vehicle">The vehicle.</param>
/// <param name="amount">The amount.</param>
void TEST_Acceleration(Vehicle& vehicle, double amount)
{
	double previousSpeed = vehicle.getCurrentSpeed();
	if (vehicle.Accelarate(amount))
	{
		cout<< "SUCCESS : Accelerated " << endl;
		cout << "Previous Speed : " << previousSpeed << " Current Speed : " <<
			vehicle.getCurrentSpeed() << endl;
	}
	else
	{
		cout << "FAILURE : Could not accelerated" << endl;
	}
}

/// <summary>
/// Deceleration Test.
/// </summary>
/// <param name="vehicle">The vehicle.</param>
/// <param name="amount">The amount.</param>
void TEST_Deceleration(Vehicle& vehicle, double amount)
{
	double previousSpeed = vehicle.getCurrentSpeed();
	if (vehicle.Decelerate(amount))
	{
		cout << endl << "SUCCESS : Decelerated " << endl;
		cout << "Previous Speed : " << previousSpeed << " Current Speed : " <<
			vehicle.getCurrentSpeed() << endl;
	}
	else
	{
		cout << "FAILURE : Could not decelerated" << endl;
	}
}

/// <summary>
/// GetIn Test.
/// </summary>
/// <param name="vehicle">The vehicle.</param>
/// <param name="passengerNumber">The passenger number.</param>
void TEST_GetIn(Vehicle& vehicle, int passengerNumber)
{
	int previousPassenger = vehicle.getCurrentPassengerNumber();
	if (vehicle.GetIn(passengerNumber))
	{
		cout << endl << "SUCCESS : Got-In " << endl;
		cout << "Previous PassengerNumber : " << previousPassenger << " Current PassengerNumber : " <<
			vehicle.getCurrentPassengerNumber() << endl;
	}
	else
	{
		cout << "FAILURE : Could not got-in" << endl;
	}
}

/// <summary>
/// Get Out Test.
/// </summary>
/// <param name="vehicle">The vehicle.</param>
/// <param name="passengerNumber">The passenger number.</param>
void TEST_GetOut(Vehicle& vehicle, int passengerNumber)
{
	int previousPassenger = vehicle.getCurrentPassengerNumber();
	if (vehicle.GetOut(passengerNumber))
	{
		cout  << "SUCCESS : Got-Out " << endl;
		cout << "Previous PassengerNumber : " << previousPassenger << " Current PassengerNumber : " <<
			vehicle.getCurrentPassengerNumber() << endl;
	}
	else
	{
		cout << "FAILURE : Could not got-out" << endl;
	}
}

/// <summary>
/// Start Engine Test.
/// </summary>
/// <param name="vehicle">The vehicle.</param>
void TEST_StartEngine(Vehicle& vehicle)
{
	vehicle.StartEngine();
}

/// <summary>
/// Stop Engine Test.
/// </summary>
/// <param name="vehicle">The vehicle.</param>
void TEST_StopEngine(Vehicle& vehicle)
{
	vehicle.StopEngine();
}

/// <summary>
/// Main function.
/// </summary>
/// <returns></returns>
int main()
{
	cout << "+-----------------------+" << endl
		<< "| TEST OF FIRST VEHICLE |" << endl
		<< "+-----------------------+" << endl;
	Vehicle vehicle1(4, 220);
	vehicle1.StartEngine();
	TEST_Acceleration(vehicle1, 30);
	TEST_Deceleration(vehicle1, 20);
	TEST_GetIn(vehicle1, 2);
	TEST_GetOut(vehicle1, 1);
	vehicle1.StopEngine();

	cout << "+------------------------+" << endl
		<< "| TEST OF SECOND VEHICLE |" << endl
		<< "+------------------------+" << endl;
	Vehicle vehicle2(5, 180);
	TEST_Acceleration(vehicle2, 30);
	TEST_Deceleration(vehicle2, 20);
	TEST_GetIn(vehicle2, 2);
	TEST_GetOut(vehicle2, 1);
	return 0;
}