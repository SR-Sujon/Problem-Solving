#include<stdio.h>
// The Eucladian Algorithm for GCD
// gcd(a,b) = gcd (b,a%b) until one is 0
// gcd(p,0) = gcd(0,p) = p is the GCD
// lcm(a,b) = (a * b) / gcd(a,b)

int gcd(int a, int b){
    if(a%b==0){
        return b;
    }
    else {
        gcd(b,a%b);
    }
}

int main(){
    int num1, num2, GCD,LCM;
    scanf("%d %d",&num1,&num2);
    if(num1>=num2)
        GCD = gcd(num1,num2);
    else
        GCD = gcd(num2,num1);

    LCM = (num1 * num2) / GCD;
    printf("The GCD of %d and %d is %d",num1,num2,GCD);
    printf("The LCM of %d and %d is %d",num1,num2,LCM);

    return 0;
}