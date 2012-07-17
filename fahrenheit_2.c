#include <stdio.h>

/* fahrenheit converter 2 - for loop */

/* the concept of 'symbolic constants' is new to me
However, de-facto at least they appear to be identical to ... well... constants*/

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20){
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}