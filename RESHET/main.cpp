#include <iostream>
#include "lamp.h"
//---------------------------------------------
/*
This programm works but still doesn't works in
googletests... I think it because I had implemented
the class without functor...???
*/
//---------------------------------------------

/*
This comment just for make changes for Git
*/

using namespace std;

int main()
	{
Lamp R;
unsigned long long int reshet = R.input_data ();
cout<< reshet<<endl;

		return 0;
	}
