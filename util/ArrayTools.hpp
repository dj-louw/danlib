#ifndef ArrayTools
#define ArrayTools

/*
ArrayTools.hpp
Simple array and vector based utility functions
Coyright Daniël Louw <daniel@dline.co.za> 2014
*/

void PrintArray(vector<int> _inputArray)
{
	for (int elem : _inputArray)
	{
		cout << elem << " | "; 
	}
	cout << endl;
}

#endif
