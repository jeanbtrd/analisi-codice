/*!
@file	main.cpp
@brief	Testing IsoTrapezoid class
*/

#include <iostream>

#include "IsoTrapezoid.h"

using namespace std;

int main()
{

	// The default constructor should build a IsoTrapezoid object.
	IsoTrapezoid it;
	cout << endl;


	// The rt object should have the default values of 0 and 0.
	cout << "TEST:\t" << " -------------------- ";
	cout << "Default Constructor" << " -------------------- " << endl;
	it.Dump();
	cout << endl;


	// Test setters
	cout << "TEST:\t" << " -------------------- ";
	cout << "SetTopSide" << " -------------------- " << endl;
	cout << "Give it a negative value, get an error:" << endl;
	it.SetTopSide( -30. );
	cout << "\nGive it a positive value, all good:" << endl;
	it.SetTopSide( 2147.435432 );
	it.Dump();
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetBottomSide" << " -------------------- " << endl;
	cout << "Give it a negative value, get an error:" << endl;
	it.SetBottomSide( -30. );
	cout << "\nGive it a positive value, all good:" << endl;
	it.SetBottomSide( 2147.435432 );
	it.Dump();
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetHeight" << " -------------------- " << endl;
	cout << "Give it a negative value, get an error:" << endl;
	it.SetHeight( -30. );
	cout << "\nGive it a positive value, all good:" << endl;
	it.SetHeight( 2147.435432 );
	it.Dump();
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetParams" << " -------------------- " << endl;
	cout << "Give it negative values, get an error:" << endl;
	it.SetParams( -30.3, -3.5, -66.7 );
	cout << "\nGive it positive values, all good:" << endl;
	it.SetParams( 2147.435432, 45.2, 11.2 );
	it.Dump();
	cout << endl;


	// Test Getters
	cout << "TEST:\t" << " -------------------- ";
	cout << "GetSide" << " -------------------- " << endl;
	cout << it.GetSide() << endl;
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "GetTopSide" << " -------------------- " << endl;
	cout << it.GetTopSide() << endl;
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "GetBottomSide" << " -------------------- " << endl;
	cout << it.GetBottomSide() << endl;
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "GetHeight" << " -------------------- " << endl;
	cout << it.GetHeight() << endl;
	cout << endl;



	// Test copy constructor
	cout << "TEST:\t" << " -------------------- ";
	cout << "Copy Constructor" << " -------------------- " << endl;

	IsoTrapezoid it2(it);
	it2.Dump();

	cout << endl;



	// Test comparison operator.
	// Just constructed by copy object should be equal (return true).
	cout << "TEST:\t" << " -------------------- ";
	cout << "Comparison Operator" << " -------------------- " << endl;
	cout << "Should return:\ttrue" << endl;

	if ( it == it2 ) cout << "true:\tThey're the same." << endl;
	else cout << "false:\tThey're different." << endl;

	cout << endl;

	// change it2 parameters:
	it2.SetParams( 1.1, 2.2, 3.3 );

	// Now the comparison should return false
	cout << "TEST:\t" << " -------------------- ";
	cout << "Comparison Operator" << " -------------------- " << endl;
	cout << "Should return:\tfalse" << endl;

	if ( it == it2 ) cout << "true:\tThey're the same." << endl;
	else cout << "false:\tThey're different." << endl;


	// Test Init constructor
	cout << "TEST:\t" << " -------------------- ";
	cout << "Init constructor" << " -------------------- " << endl;

	cout << "Bad values (negative):" << endl;
	IsoTrapezoid it3( -78. , -57.54 , -2.3);
	it3.Dump();

	cout << "Good value:" << endl;
	IsoTrapezoid it4( 78. , 57.54 , 2.3);
	it4.Dump();


	// Test GetPerimeter
	cout << "TEST:\t" << " -------------------- ";
	cout << "GetPerimeter" << " -------------------- " << endl;
	cout << "NB: function of parent class polygon" << endl;

	cout << "\nit:\t"; it.Dump();
	cout << "Perimeter:\t" << it.GetPerimeter() << endl;

	cout << "\nit2:\t"; it2.Dump();
	cout << "Perimeter:\t" << it2.GetPerimeter() << endl;

	cout << "\nit3:\t"; it3.Dump();
	cout << "Perimeter:\t" << it3.GetPerimeter() << endl;

	cout << "\nit4:\t"; it4.Dump();
	cout << "Perimeter:\t" << it4.GetPerimeter() << endl;

	cout << endl;


	// Test GetArea
	cout << "TEST:\t" << " -------------------- ";
	cout << "GetArea" << " -------------------- " << endl;
	cout << "NB: function of parent class polygon" << endl;

	cout << "\nit:\t"; it.Dump();
	cout << "Area:\t" << it.GetArea() << endl;

	cout << "\nit2:\t"; it2.Dump();
	cout << "Area:\t" << it2.GetArea() << endl;

	cout << "\nit3:\t"; it3.Dump();
	cout << "Area:\t" << it3.GetArea() << endl;

	cout << "\nit4:\t"; it4.Dump();
	cout << "Area:\t" << it4.GetArea() << endl;

	cout << endl;


	// Test Draw
	cout << "TEST:\t" << " -------------------- ";
	cout << "Draw" << " -------------------- " << endl;

	it.Draw();
	cout << endl;

	it2.Draw();
	cout << endl;

	it3.Draw();
	cout << endl;

	it4.Draw();
	cout << endl;


	// Test assignment operator
	cout << "TEST:\t" << " -------------------- ";
	cout << "Assignment operator" << " -------------------- " << endl;
	it = it2 = it3 = it4;
	it.Dump();
	it2.Dump();
	it3.Dump();
	it4.Dump();


    return 0;
}
