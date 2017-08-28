#include <stdio.h>
#include <stdlib.h>

void number();
void triangle();

int main()
{
    number();
}

void number(){
    int n=8,i=0,j=0;
    for (i=1;i<n;i++){
        for (j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}

void triangle(){
    int a=5, i=0, j=0, k=0;
    for (i=0; i<=a; i++){
        for (j=1; j<=(5-i); j++){
            printf(" ");
        for (k=1; )
        }
    }

}
