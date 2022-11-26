#include<stdio.h>
int main(){

    int N,k;
    scanf("%d %d",&N, &k);

    while(k>0 && N>0){
        if((N%10) == 0){
            N = N/10;
        }
        else {
            N--;
        }
        k--;
    }
    printf("%d",N);
    return 0;
}