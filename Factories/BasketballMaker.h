#pragma once
// The Basketball Maker: 
// - creates basketball objects 
// with distinct fields 
#include "BallFactory.h"
class BasketballMaker : public BallFactory { 
public: 
	// (method implements the 
	// Interface Version) 
	// EFFECT: Creates a sports ball 
	// as a Basketball 
	SportsBall* createBall() 
	{ 
		SportsBall* b = new SportsBall(); 
		b->type = "Basketball"; 
		b->materialsUsed.reserve( 3); 
		b->materialsUsed.push_back(" rubber"); 
		b->materialsUsed.push_back(" fiber"); 
		b->materialsUsed.push_back(" synthetic composite");
		b->radius = 4.8f; b->make = "Spalding"; b->modelName = "Series Basketball"; return b;
	}
};


