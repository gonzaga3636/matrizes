#include <stdio.h>

int main() {

    int M[4][5] = {{5,4,2,8,7},{3,6,9,1,4},{0,3,5,2,9},{4,9,7,6,2}},v[4], i, j, menor;
    
    for(i = 0; i < 4; i++){
        menor = M[i][0];
        for(j = 0; j < 5; j++){
            if(M[i][j] < menor){
                menor = M[i][j];
            }
        }
    
    v[i] = menor;
    printf("%d ", v[i]);
    }

        
    return 0;
