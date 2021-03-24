#include "equals.h"

unsigned equals(int* x, int* y){
	/* printf("*x: %i\n", *x);
	printf("*y: %i\n", *y);
	printf("x: %p\n", x);
	printf("y: %p\n", y); */
	if(*x != *y){
		return 0;
	}
	if(x != y){
		return -1;
	}
	return x;
	/* returns 0 if the two ints match, -1 if they match */
	/* returns address if they match and have same address */
	/* do not return the pointer to a variable declared locally */
}

/*int main(int argc, char* argv[]){
	int x = 6;
	int y = 5;
	if(argc == 2){
		x = atoi(argv[1]);
		y = atoi(argv[2]);
	}
	int* xp = &x;
	int* yp = &y;
	printf("x's address: %X\n", &x);
	printf("y's address: %X\n", &y);
	printf("xp points to: %p\n", xp);
	printf("yp points to: %p\n", yp);
	unsigned eq = equals(xp, yp);
	printf("The result is 0x%X\n", eq);
	if(*xp != *yp) printf("values aren't equal\n");
	if(xp != yp) printf("pointers aren't equal\n");
	return 0;
}*/
