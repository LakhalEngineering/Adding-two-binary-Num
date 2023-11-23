#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>

int main(){
    int somma = 0;
    int A[4];
    int B[4];
    // insert A and B
    printf("*******Insert binary A********\n");
    for(int i=0;i<4;i++)
    {
            printf("inserisci il bit {%d} of A\n", i);
            scanf("%d",&A[i]);
            while(A[i]!= 1 && A[i]!=0){
                printf("inserisci 1 or 0 !\n");
                scanf("%d",&A[i]);
            }
    }
    printf("******* Insert binary B ********\n");
    for(int j=0;j<4;j++)
    {
            printf("inserisci il bit {%d} of B\n", j);
            scanf("%d",&B[j]);
            while(B[j]!= 1 && B[j]!=0){
                printf("inserisci 1 or 0 !\n");
                scanf("%d",&B[j]);
            }
    }
    //Somme of A e B
    for(int l=0;l<4;l++){
        somma = pow(2,l)*(A[l]+B[l])+somma;
    }
    // Print 2 array
    for(int k=0;k<4;k++)
    {
            printf("il bit {%d} of A and B : %d , %d \n",k,A[k],B[k] );
    }
    // Print somme
    printf("La somma e %d", somma);
    return 0;
}