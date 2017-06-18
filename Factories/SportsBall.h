#pragma once
#include < vector > 
#include <string>
using namespace std;
/* 
// A Sports Ball has: 
// - the Type of ball it is 
// - an array of materials used 
// to manufacture it 
// - its size, as a radius (inches) 
// - any additional comments required 
// - the company brand that made it 
// - a product name */ 
class SportsBall { 
public: 
	string type; 
	vector <string> materialsUsed; 
	float radius; 
	string comments; 
	string make; 
	string modelName; 
};


