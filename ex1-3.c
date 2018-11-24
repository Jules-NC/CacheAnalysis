#include <stdlib.h>
#include <string.h>

int main(){
	int UNMILLION = 1000*1000; 
	int* A = (int*)calloc(UNMILLION, sizeof(int));
	int* B = (int*)malloc(UNMILLION*sizeof(int));

	memcpy(B, A, UNMILLION);
}