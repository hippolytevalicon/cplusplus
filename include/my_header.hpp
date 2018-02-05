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


void exo5(void)
{
	long a = 0, b = 0, c = 0, d = 0;

	while ((c < 50) && (b < 50))
	{
		while ((a != 1) && (b < 50))
		{
			std::cout << "Joueur 1 lance le de ..." << std::endl;
			std::cin.get();

			a = lancer_de();
			if ((a == 2) || (a == 4) || (a == 6))
				b = b + a;
			else
				if (a == 3)
					b = b * 2;
				else
					b = 0;
			std::cout << "Points du joueur 1 : "
				<< b
				<< std::endl;
		}
		a = 0;
		while ((a != 1) && (c < 50) && (b < 50))
		{
			std::cout << "Joueur 2 lance le de ..." << std::endl;
			std::cin.get();
			a = lancer_de();
			if ((a == 2) || (a == 4) || (a == 6))
				c = c + a;
			else
				if (a == 3)
					c = c * 2;
				else
					c = 0;
			std::cout << "Points du joueur 2 "
				<< c
				<< std::endl;
		}
		a = 0;


	}
	if (c >= b)

		std::cout << "Joueur 2 a gagne !" << std::endl;
	else

		std::cout << "Joueur 1 a gagne !" << std::endl;
}


#endif // MY_HEADER_HPP

