#include <stdlib.h>
int main(){
	int UNMILLION = 1000*1000; 
	int* A = (int*)malloc(UNMILLION*sizeof(int));
	int* B = (int*)malloc(UNMILLION*sizeof(int));

	for(int i=0; i<1000; i++){ // Lignes
		for(int j=0; j<1000; j++){  //Colonnes
			A[1000*j+i] = rand();
			B[1000*j+i] = (A[1000*j+i-1] + A[1000*j+i] + A[1000*j+i+1] + 
			A[1000*(j+1)+i-1] + A[1000*(j+1)+i] + A[1000*(j+1)+i+1] +
			A[1000*(j-1)+i-1] + A[1000*(j-1)+i] + A[1000*(j-1)+i+1])/9;
		}
	}
}
