#include <stdlib.h>
int main(){
	int UNMILLION = 1000*1000; 
	int* A = (int*)malloc(UNMILLION*sizeof(int));
	int* B = (int*)malloc(UNMILLION*sizeof(int));

	for(int i = 0; i<UNMILLION; i++){
		A[i] = 0;
		B[i] = A[i];
	}
}