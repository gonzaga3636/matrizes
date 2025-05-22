#include <stdio.h>

int main() {
    
    int M[4][4] = {{1,2,3,41},{5,6,7,8},{9,10,11,12},{13,14,15,16}}, i, j, soma = 0;
    
       
       for(i = 0; i < 4; i++){
           soma += M[i][3 - i];
       }
       
    printf("Resultado: %d", soma);
    
    
    return 0;
}
