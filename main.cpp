/*!
@file	main.cpp
@brief	Testing IsoTrapezoid class
*/

#include <iostream>

#include "IsoTrapezoid.h"
#include "rectangle.h"
#include "rhombus.h"

using namespace std;

int main()
{

	/////////////////////////////////////////////////////////////////////////
	// Testing IsoTrapezoid
	cout << endl << "/////////////////////////////////////////////////////////////////////////" << endl << endl << "Testing IsoTrapezoid class" << endl << endl;

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
	it.Dump();
	cout << "\nGive it a positive value, all good:" << endl;
	it.SetTopSide( 2147.435432 );
	it.Dump();
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetBottomSide" << " -------------------- " << endl;
	cout << "Give it a negative value, get an error:" << endl;
	it.SetBottomSide( -30. );
	it.Dump();
	cout << "\nGive it a positive value, all good:" << endl;
	it.SetBottomSide( 2147.435432 );
	it.Dump();
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetHeight" << " -------------------- " << endl;
	cout << "Give it a negative value, get an error:" << endl;
	it.SetHeight( -30. );
	it.Dump();
	cout << "\nGive it a positive value, all good:" << endl;
	it.SetHeight( 1111.435432 );
	it.Dump();
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetParams" << " -------------------- " << endl;
	cout << "Give it all negative values, get an error:" << endl;
	it.SetParams( -30.3, -3.5, -66.7 );
	it.Dump();
	cout << "Give it positive and negative values:" << endl;
	it.SetParams( -11.1, 22.2, 33.3 );
	it.Dump();
	it.SetParams( 44.4, -55.5, -66.6 );
	it.Dump();
	it.SetParams( 77.7, -88.8, 99.9 );
	it.Dump();
	it.SetParams( 1010.10, 1111.11, -1212.12 );
	it.Dump();
	it.SetParams( -1313.13, -1414.14, 1515.15 );
	it.Dump();
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


	// Destroy the isotrapezoids
	it.~IsoTrapezoid();
	it2.~IsoTrapezoid();
	it3.~IsoTrapezoid();
	it4.~IsoTrapezoid();

	/////////////////////////////////////////////////////////////////////////
	// Testing Rectangle
	cout << endl << "/////////////////////////////////////////////////////////////////////////" << endl << endl << "Testing Rectangle class" << endl << endl;

	// The default constructor should build a Rectangle object.
	Rectangle r;
	cout << endl;


	// The r object should have the default values of 0 and 0.
	cout << "TEST:\t" << " -------------------- ";
	cout << "Default Constructor" << " -------------------- " << endl;
	r.Dump();
	cout << endl;


	// Test setters
	cout << "TEST:\t" << " -------------------- ";
	cout << "SetLength" << " -------------------- " << endl;
	cout << "Give it a negative value, get an error:" << endl;
	r.SetLength( -30 );
	r.Dump();
	cout << "\nGive it a positive value, all good:" << endl;
	r.SetLength( 2147);
	r.Dump();
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetWidth" << " -------------------- " << endl;
	cout << "Give it a negative value, get an error:" << endl;
	r.SetWidth( -30 );
	r.Dump();
	cout << "\nGive it a positive value, all good:" << endl;
	r.SetWidth( 9999);
	r.Dump();
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetDim" << " -------------------- " << endl;
	cout << "Give it all negative values, get an error:" << endl;
	r.SetDim( -30, -3);
	r.Dump();
	cout << "Give it positive and negative values:" << endl;
	r.SetDim( -11, 22);
	r.Dump();
	r.SetDim( 33, -44);
	r.Dump();
	cout << "\nGive it positive values, all good:" << endl;
	r.SetDim( 2147, 45);
	r.Dump();
	cout << endl;


	// Test Getters
	cout << "TEST:\t" << " -------------------- ";
	cout << "GetLength" << " -------------------- " << endl;
	cout << r.GetLength() << endl;
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "GetWidth" << " -------------------- " << endl;
	cout << r.GetWidth() << endl;
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "GetDim" << " -------------------- " << endl;
	int w, l;
	r.GetDim(w,l);
	cout << "width: " << w << "\tlength: " << l << endl;
	cout << endl;



	// Test copy constructor
	cout << "TEST:\t" << " -------------------- ";
	cout << "Copy Constructor" << " -------------------- " << endl;

	Rectangle r2(r);
	r2.Dump();

	cout << endl;



	// Test comparison operator.
	// Just constructed by copy object should be equal (return true).
	cout << "TEST:\t" << " -------------------- ";
	cout << "Comparison Operator" << " -------------------- " << endl;
	cout << "Should return:\ttrue" << endl;

	if ( r == r2 ) cout << "true:\tThey're the same." << endl;
	else cout << "false:\tThey're different." << endl;

	cout << endl;

	// change r2 dimensions:
	r2.SetDim( 1, 2);

	// Now the comparison should return false
	cout << "TEST:\t" << " -------------------- ";
	cout << "Comparison Operator" << " -------------------- " << endl;
	cout << "Should return:\tfalse" << endl;

	if ( r == r2 ) cout << "true:\tThey're the same." << endl;
	else cout << "false:\tThey're different." << endl;


	// Test Init constructor
	cout << "TEST:\t" << " -------------------- ";
	cout << "Init constructor" << " -------------------- " << endl;

	cout << "Bad values (negative):" << endl;
	Rectangle r3( -78. , -57);
	r3.Dump();

	cout << "Good value:" << endl;
	Rectangle r4( 78, 57);
	r4.Dump();


	// Test GetPerimeter
	cout << "TEST:\t" << " -------------------- ";
	cout << "GetPerimeter" << " -------------------- " << endl;
	cout << "NB: function of parent class polygon" << endl;

	cout << "\nr:\t"; r.Dump();
	cout << "Perimeter:\t" << r.GetPerimeter() << endl;

	cout << "\nr2:\t"; r2.Dump();
	cout << "Perimeter:\t" << r2.GetPerimeter() << endl;

	cout << "\nr3:\t"; r3.Dump();
	cout << "Perimeter:\t" << r3.GetPerimeter() << endl;

	cout << "\nr4:\t"; r4.Dump();
	cout << "Perimeter:\t" << r4.GetPerimeter() << endl;

	cout << endl;


	// Test GetArea
	cout << "TEST:\t" << " -------------------- ";
	cout << "GetArea" << " -------------------- " << endl;
	cout << "NB: function of parent class polygon" << endl;

	cout << "\nr:\t"; r.Dump();
	cout << "Area:\t" << r.GetArea() << endl;

	cout << "\nr2:\t"; r2.Dump();
	cout << "Area:\t" << r2.GetArea() << endl;

	cout << "\nr3:\t"; r3.Dump();
	cout << "Area:\t" << r3.GetArea() << endl;

	cout << "\nr4:\t"; r4.Dump();
	cout << "Area:\t" << r4.GetArea() << endl;

	cout << endl;


	// Test Draw
	cout << "TEST:\t" << " -------------------- ";
	cout << "Draw" << " -------------------- " << endl;

	r.Draw();
	cout << endl;

	r2.Draw();
	cout << endl;

	r3.Draw();
	cout << endl;

	r4.Draw();
	cout << endl;


	// Test assignment operator
	cout << "TEST:\t" << " -------------------- ";
	cout << "Assignment operator" << " -------------------- " << endl;
	r = r2 = r3 = r4;
	r.Dump();
	r2.Dump();
	r3.Dump();
	r4.Dump();

	// Destroy the rectangles
	r.~Rectangle();
	r2.~Rectangle();
	r3.~Rectangle();
	r4.~Rectangle();

	/////////////////////////////////////////////////////////////////////////
	// Testing Rhombus
	cout << endl << "/////////////////////////////////////////////////////////////////////////" << endl << endl << "Testing Rhombus class" << endl << endl;

	// The default constructor should build a Rhombus object.
	Rhombus rh;
	cout << endl;


	// The rh object should have the default values of 0 and 0.
	cout << "TEST:\t" << " -------------------- ";
	cout << "Default Constructor" << " -------------------- " << endl;
	rh.Dump();
	cout << endl;


	// Test setters

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetDiagH" << " -------------------- " << endl;
	cout << "Give it a negative value, get an error:" << endl;
	rh.SetDiagH( -30.9 );
	rh.Dump();
	cout << "\nGive it a positive value, all good:" << endl;
	rh.SetDiagH( 2147.1);
	rh.Dump();
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "SetDiagV" << " -------------------- " << endl;
	cout << "Give it a negative value, get an error:" << endl;
	rh.SetDiagV( -42.3 );
	rh.Dump();
	cout << "\nGive it a positive value, all good:" << endl;
	rh.SetDiagV( 22.2);
	rh.Dump();
	cout << endl;


	cout << "TEST:\t" << " -------------------- ";
	cout << "SetDim" << " -------------------- " << endl;
	cout << "Give it all negative values, get an error:" << endl;
	rh.SetDim( -30.2, -3.3);
	rh.Dump();
	cout << "Give it positive and negative values:" << endl;
	rh.SetDim( -11.3, 22.1);
	rh.Dump();
	rh.SetDim( 33.1, -44.7);
	rh.Dump();
	cout << "\nGive it positive values, all good:" << endl;
	rh.SetDim( 2147.21, 45.9);
	rh.Dump();
	cout << endl;


	// Test Getters
	cout << "TEST:\t" << " -------------------- ";
	cout << "GetDiagH" << " -------------------- " << endl;
	cout << rh.GetDiagH() << endl;
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "GetDiagV" << " -------------------- " << endl;
	cout << rh.GetDiagV() << endl;
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "GetDiagonals" << " -------------------- " << endl;
	float dH, dV;
	rh.GetDiagonals(dH,dV);
	cout << "H:\t" << dH << "\tV:\t" << dV << endl;
	cout << endl;

	cout << "TEST:\t" << " -------------------- ";
	cout << "GetSide" << " -------------------- " << endl;
	cout << rh.GetSide() << endl;
	cout << endl;


	// Test copy constructor
	cout << "TEST:\t" << " -------------------- ";
	cout << "Copy Constructor" << " -------------------- " << endl;

	Rhombus rh2(rh);
	rh2.Dump();

	cout << endl;



	// Test comparison operator.
	// Just constructed by copy object should be equal (return true).
	cout << "TEST:\t" << " -------------------- ";
	cout << "Comparison Operator" << " -------------------- " << endl;
	cout << "Should return:\ttrue" << endl;

	if ( rh == rh2 ) cout << "true:\tThey're the same." << endl;
	else cout << "false:\tThey're different." << endl;

	cout << endl;

	// change r2 dimensions:
	rh2.SetDim( 1.34, 33.4);

	// Now the comparison should return false
	cout << "TEST:\t" << " -------------------- ";
	cout << "Comparison Operator" << " -------------------- " << endl;
	cout << "Should return:\tfalse" << endl;

	if ( rh == rh2 ) cout << "true:\tThey're the same." << endl;
	else cout << "false:\tThey're different." << endl;


	// Test Init constructor
	cout << "TEST:\t" << " -------------------- ";
	cout << "Init constructor" << " -------------------- " << endl;

	cout << "Bad values (negative):" << endl;
	Rhombus rh3( -4.5 , -11.1);
	rh3.Dump();

	cout << "Good value:" << endl;
	Rhombus rh4( 78.34, 57.99);
	rh4.Dump();


	// Test GetPerimeter
	cout << "TEST:\t" << " -------------------- ";
	cout << "GetPerimeter" << " -------------------- " << endl;
	cout << "NB: function of parent class polygon" << endl;

	cout << "\nrh:\t"; rh.Dump();
	cout << "Perimeter:\t" << rh.GetPerimeter() << endl;

	cout << "\nrh2:\t"; rh2.Dump();
	cout << "Perimeter:\t" << rh2.GetPerimeter() << endl;

	cout << "\nrh3:\t"; rh3.Dump();
	cout << "Perimeter:\t" << rh3.GetPerimeter() << endl;

	cout << "\nrh4:\t"; rh4.Dump();
	cout << "Perimeter:\t" << rh4.GetPerimeter() << endl;

	cout << endl;


	// Test GetArea
	cout << "TEST:\t" << " -------------------- ";
	cout << "GetArea" << " -------------------- " << endl;
	cout << "NB: function of parent class polygon" << endl;

	cout << "\nr:\t"; rh.Dump();
	cout << "Area:\t" << rh.GetArea() << endl;

	cout << "\nrh2:\t"; rh2.Dump();
	cout << "Area:\t" << rh2.GetArea() << endl;

	cout << "\nrh3:\t"; rh3.Dump();
	cout << "Area:\t" << rh3.GetArea() << endl;

	cout << "\nrh4:\t"; rh4.Dump();
	cout << "Area:\t" << rh4.GetArea() << endl;

	cout << endl;


	// Test Draw
	cout << "TEST:\t" << " -------------------- ";
	cout << "Draw" << " -------------------- " << endl;

	rh.Draw();
	cout << endl;

	rh2.Draw();
	cout << endl;

	rh3.Draw();
	cout << endl;

	rh4.Draw();
	cout << endl;


	// Test assignment operator
	cout << "TEST:\t" << " -------------------- ";
	cout << "Assignment operator" << " -------------------- " << endl;
	rh = rh2 = rh3 = rh4;
	rh.Dump();
	rh2.Dump();
	rh3.Dump();
	rh4.Dump();



    return 0;

}
