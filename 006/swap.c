#include "swap.h"

void swaping(int a, int b, int c) {
	if (a > b) {a += b; b = a - b; a -= b;}
	if (a > c) {a += c; c = a - c; a -= c;}
	if (b > c) {b += c; c = b - c; b -= c;}
 	
	printf("Chieu tang dan: %d %d %d \n", a, b, c);
}
