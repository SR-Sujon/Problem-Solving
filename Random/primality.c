#include<stdio.h>
#include<math.h>
//Primality test with root of N method
int main(){
    int num,root,flag=0;
    scanf("%d",&num);
    root = sqrt(num);
    for(int i = 2;i<=root;i++){
        if(num%i==0){
            flag=1;
            break;
        }
        else 
            continue;;
    }
    if(flag==0){
        printf("Prime");
    }else{
        printf("Composite");
    }
    return 0;
}