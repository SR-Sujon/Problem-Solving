#include<stdio.h>

int main(){
    long long int x=0, steps=0;
    scanf("%ld",&x);
    
    if(x%5==0){
        steps = x / 5;
    }
    else{
        steps = (x/5) + 1; 
    }
    
    printf("%ld",steps);
    return 0;
}