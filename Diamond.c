
#include<stdio.h>
int main(){
    int i,j,h;
    int x;
    int a=0;
    printf("Enter your number:");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        for(j=(x/2);j>i;j--){
            printf("  ");
        }
        for(a=0;a<i;a++){
            printf(" ");
        }
        for(h=-(j);h<j-(i);h++){
            printf(" &");
        }
        printf("\n");
    }
    return 0;
}
