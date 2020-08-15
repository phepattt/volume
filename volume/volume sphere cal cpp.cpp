#define _CRT_SECURE_NO_WARNINGS
#define pi 3.1415926535
#include <stdio.h>
		int main()
		{
			double R , V ;
			printf(" range input : ");
			scanf("%lf", &R);
			V = 4 / 3 * pi * R * R * R ;
			printf("volume %lf", V);

		}