#include <stdio.h>
int main(){
    int y[5],x[5],i;
    printf("\nDigite o primero vetor:");
    for (i=0;i<5;i++) 
    {
        scanf("%d",&x[i]);
    }
    printf("\nDigite o segundo vetor:");
    for (i=0;i<5;i++) 
    {
        scanf("%d",&y[i]);
    }
    for (i=0;i<5;i++)
    {
        if(x[i] != y[i]){
            printf("\nSao diferentes");
            break;
        }    
    }

    if(i==5){
        printf("\niguais");
    }
        
        
        
    
    


    
}