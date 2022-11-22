#include<stdio.h>

int main(){
    long long int n;
    int sum=0;
    scanf("%ld",&n);
    //int digits = 1;
    
    while(n>0){
       sum += n%10;
       n=n/10;
    }
    printf("%d",sum);
    return 0;
}
