//  Copyright (c) 2017 Antoine Tran Tan
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <stdlib.h>
#include <time.h>

unsigned short lancer_de()
{
	srand(time(NULL));
	return (rand() % 6) + 1;
}


void exo4(void)
{
	long a = 0, b = 0, c = 0;

	while (a != 1)
	{
		a = lancer_de();
		if ((a == 2) || (a == 4) || (a == 6))
			b = b + a;
		else
			if (a == 3)
				b = b * 2;
			else
				b = 0;
	

	}
}


#endif // MY_HEADER_HPP

