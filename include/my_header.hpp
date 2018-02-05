//  Copyright (c) 2017 Antoine Tran Tan
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <stdlib.h>
#include <time.h>
#include <my_header.hpp>

int essayer_code(unsigned short code)
{
	srand(time(NULL));
	static unsigned short guess = rand() % 10000;

	return (code == guess);
}


void exo3(void)
{
	long x = 7845, n = 0, T = 0;

	while (n != x)
	{
		T = essayer_code(n);
		n = n + 1;
	}
}


#endif // MY_HEADER_HPP

