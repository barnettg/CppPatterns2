// Factories.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "BallFactory.h"
#include "BasketballMaker.h"
#include "BaseballMaker.h"
#include <string>

using namespace std;

int main()
{
	cout << "Factories " << endl;
	// Creating the Factories 
	BallFactory* f1 = new BasketballMaker(); 
	BallFactory* f2 = new BaseballMaker(); 
	// Creating a basketball object: 
	// Use the Basketball Factory 
	// to make Basketballs 
	SportsBall* bb1 = f1->createBall(); 
	// Creating a baseball object: 
	// Use the Baseball Factory 
	// to make Baseballs 
	SportsBall* bb2 = f2->createBall(); 
	// TESTING: 
	// This line should print out "Basketball" 
	cout << "" << endl;
	cout << (bb1->type) << endl;
	// This line should print out "Baseball" 
	cout << bb2->type << endl;

    return 0;
}

