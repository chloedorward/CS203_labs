#include "find.h"

bool find(int x, int* p, int size){
	if(p == 0) return(false);
	for(int i = 0; i < size; i++){
		if(*p != x) return(false);
		p++;
	}
	return(true);
}

/*int main(int argc, char* argv[]){
	return 0;
}*/
