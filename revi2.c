#include <stdio.h>
int main (){
    int v[10],maior;

    for(int i=0;i<10;i++){
        scanf("%d",&v[i]);
    }

    maior = v[0];

    for(int i=1;i<10;i++)
    {
        if(maior<v[i]){
            maior = v[i];
        }
    }

    printf("%d",maior);
    return 0;
}
    