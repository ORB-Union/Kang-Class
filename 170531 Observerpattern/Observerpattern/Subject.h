#pragma once
#include<vector>
#include"Observe.h"


using namespace std;
class Sub
{
private :
	vector<Observe*> observers;

public :
	void addObserver(Observe* observer);
	void removeObsever(Observe* observer);
	void notifyObserver();
};