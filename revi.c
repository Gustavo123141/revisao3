#include <stdio.h>
#include <string.h>
    int main (){

    char str1[200];

    char str2[100];

    char str3[100];

    puts("Digite seu nome:");
    scanf("%100[^\n]s",str1);

    getchar();
    puts("Digite seu sobrenome:");
    scanf("%100[^\n]s",str2);

    if(strcmp(str1,str2)==0) {
        printf("iguais");
    }
    else{
        printf("Diferentes");
    }
         
    strcat(str1,str2);
   
    printf("\nstr1 = %s",str1);
     
    strcpy(str3,str2); 
    printf("\nstr3 = %s",str3);
    
    return 0;
    }
