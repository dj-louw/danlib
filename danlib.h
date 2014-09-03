#ifndef DANLIB
#define DANLIB

/*
DanLib
a library of things that I often use for all the different things I write
Coyright Daniël Louw <daniel@dline.co.za> 2014
*/


#include <string>
#include <fstream>	
#include <iostream>
#include <iterator> // for istream_iterator
#include <algorithm> // for std::copy
#include <vector>


namespace DanLib 
{
	#include "util/FileTool.hpp"
	#include "util/Tokenizer.hpp"
	#include "sort/BitonicSorter.hpp"	
}









#endif