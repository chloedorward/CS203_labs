#include "bitOps.h"

int main(int argc, char* argv[]){
	int x = -15;
	int n = 4;
	int r161s = (1 << 16) - 1;
	int l16 = (5 >> 16) & (1 << 16 - 1);
	int bar5 = bar(5);
	int thingy = (1 << 31) >> 31;
	int pos = (x + ((x >> 31) & ((1 << n) + (~0))));
	printf("x: %d\nn: %d\npos: %d\n", x, n, pos);

}
