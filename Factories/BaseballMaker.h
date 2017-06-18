#pragma once
#include "SportsBall.h"
#include "BallFactory.h"

// The Baseball Maker: 
// - creates baseball objects with distinct fields 
class BaseballMaker : public BallFactory 
{ 
	// (method implements the Interface Version) 
	// EFFECT: Creates a sports ball as a Basketball 
	SportsBall* createBall() 
	{ 
		SportsBall* b = new SportsBall(); 
		b-> type = "Baseball"; 
		b-> materialsUsed.reserve( 6); 
		b-> materialsUsed.push_back(" cork");
		b->materialsUsed.push_back(" wool");
		b->materialsUsed.push_back(" poly/ cotton"); 
		b->materialsUsed.push_back(" cowhide"); 
		b->materialsUsed.push_back(" yarn"); 
		b->materialsUsed.push_back(" composite rubber"); 
		b->radius = 1.45f;
		b->make = "Rawlings"; 
		b->modelName = "MLB Official Baseball"; 
		return b;
	}
}; 

