#include <stdio.h>
#include <stdlib.h>

int ** getMatrix(int r, int c){ 
    int **m; 
    m = (int **) malloc(r*sizeof(int *)); 
    for (int i=0; i<r; i++) { 
        m[i] = malloc(c*sizeof(int)); 
    }
    return m;
}

int * getVector(int r){
    int *v;
    v = (int *) malloc(r*sizeof(int));
    return v;
}

int main(){
    int CA_N=10, CA_K=3, CA_V, CA_T;
    printf("Reading covering array\n");
    int ** CA = (int **)getMatrix(CA_N, CA_K);
    for (int i=0; i<CA_N; i++) {
        for (int j=0; j<CA_K; j++) {
            printf("%d %d \n", i, j);
        }
    }
}
