#include<iostream>
#include"Observe.h"
#include"Subject.h"
using namespace std;

void main()
{
	Sub sub;
	Observe Ob;


	sub.addObserver(&Ob);
	sub.addObserver(&Ob);
	sub.addObserver(&Ob);
	//sub.removeObsever(&Ob);
	sub.notifyObserver();
	
}