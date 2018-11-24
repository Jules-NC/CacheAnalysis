#include <stdlib.h>
int main(){
  
	int UNMILLION = 1000*1000; 
  
	int* A = malloc(UNMILLION*sizeof(int));
	for(int i = 0; i<UNMILLION; i++){
		A[i] = rand();
	}
  
  int* B = malloc(1000*1000*sizeof(int));
  for(int i = 0; i<UNMILLION; i++){
    B[i] = (A[(i-1)-1000] + A[i - 1000] + A[(i+1) -1000] + A[i-1] + A[i] + A[i+1] + A[(i-1)+1000] + A[i + 1000] + A[(i+1) + 1000])/9;
  }
}
