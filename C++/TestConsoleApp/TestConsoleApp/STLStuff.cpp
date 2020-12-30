#include "stdafx.h"
#include "STLStuff.h"
#include <vector>
#include <iostream>

void testVector()
{
	std::vector<testStruct>	tsv;

	testStruct	ts1;
	testStruct	ts2;

	ts1.x = 1;

	tsv.push_back(ts1);

	ts1.x = 2;

	std::cout << "ts1.x = " << ts1.x << " tsv[0] = " << tsv[0].x << std::endl;


}