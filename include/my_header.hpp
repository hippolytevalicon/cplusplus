//  Copyright (c) 2017 Antoine Tran Tan
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP
void exo2(void)
{
	long n = 3, fac = 1, i = 1;

	if (n > 0)
		while (i <= n)
		{
			fac = fac * i;
			i = i + 1;
		}

	else

		if (n < 0)
			fac = 0;
}


#endif // MY_HEADER_HPP

