#include<stdio.h>

int main(){
    long long int Dom,M,N,Sqr;
    //printf("Enter size of M and N: ");
    scanf("%ld%ld",&M,&N);
    Sqr = M*N;
    if(Sqr%2==0)
    {
        Dom = Sqr/2;
    }
    else {
        Dom = (Sqr-1)/2;
    }
    printf("%ld",Dom);
    return 0;
}