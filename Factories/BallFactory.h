#pragma once
#include "SportsBall.h"
// interface
class BallFactory {
public: /*
		// INPUT: none
		// OUTPUT: a Sports Ball object
		// EFFECT: Creates a Sports Ball;
		// Classes that implement this will have
		// their own distinctions in making one */
	virtual SportsBall* createBall() = 0;
};
