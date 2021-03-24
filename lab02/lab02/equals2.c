#include "equals2.h"

/* now just use the "equals.h" version
unsigned equals(int* x, int* y){
	if(*x != *y){
		return 0;
	}
	if(x != y){
		return -1;
	}
	return (int)x;
}*/

int equals2(int** x, int** y, int size){
	/* size is the number of elements in each array */
	/* return -1 is all the int* in the arrays are the same
	and the index of the first occurence where they are different */
	unsigned negOne = -1;
	for(int i = 0; i < size; i++){
		unsigned eq = equals(*x, *y);
		if(eq == 0 || eq == negOne){
			printf("Not equals at %d\n", eq);
			return (int)i;
		}
		x++;
		y++;
	}
	printf("Equals\n");
	return -1;
}

/* had a main function before combining files
int main(int argc, char* argv[]){
	int n = 5;
	int* p = &n;
	int** a = malloc(5 * sizeof(5* sizeof(int)));
	int** b = malloc(5 * sizeof(5* sizeof(int)));
	int** afill = a;
	int** bfill = b;
	for(int i = 0; i < 5; i++){
		*afill = p;
		*bfill = p;
		afill++;
		bfill++;
	}
	int ans = equals2(a, b, 5);
	printf("ans: %d\n", ans);
	free(a);
	free(b);
	return 0;
}*/
