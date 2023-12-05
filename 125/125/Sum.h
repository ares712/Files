#pragma once
class Sum
{
public:
	
	Sum();


	void Add(float _input);
	void Result();

	float result;	

	vector<float> floatVec;

	

private:
	static Sum* instance;

};