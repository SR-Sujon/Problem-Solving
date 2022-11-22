#include<stdio.h>

int main(){
    long long int n;
    scanf("%ld",&n);
    int digits = 0;
    
    while(n/10!=0){
        digits++;
    }
    printf("%d",digits);
    return 0;
}