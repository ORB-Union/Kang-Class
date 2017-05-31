#include<vector>
#include<iostream>
#include"Observe.h"
#include"Subject.h"

void Sub::addObserver(Observe *observer)
{
	observers.push_back(observer);

}

void Sub::removeObsever(Observe *observer)
{
	for (vector<Observe*>::iterator to_remove = observers.begin(); to_remove != observers.end(); ++to_remove)
	{
		if (*to_remove == observer)
		{
			observers.erase(to_remove);
			break;
		}
	}
}

void Sub::notifyObserver()
{
	for (auto o : observers)
	{
		if (o != nullptr)
		{
			o->notify();
		}
	}
}