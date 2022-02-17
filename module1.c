#include "module1.h"
#define MAX(x,y) (((x) > (y)) ? (x) : (y))
#define MIN(x,y) (((x) < (y)) ? (x) : (y))
#include <stdio.h>
int EuclidGCD(int x, int y){
		int remainder;
		int max = MAX(x,y);
		int min = MIN(x,y);
		while (min>0) {
				remainder = max%min;
				printf("%d %% %D => %d\n", max, min, remainder);
				max = min;
				min = remainder;
		}
		return max;
		}

