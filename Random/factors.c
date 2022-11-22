#include<stdio.h>
#include<math.h>
int main(){
    int num,root,range;
    scanf("%d",&num);
    range = num/2; 
    // 1 and N are the common factors
    // 2 to N/2 method
    printf("The factors of %d are: 1, ",num);
    for(int i = 2;i<=range;i++){
        if(num%i==0){
            printf("%d, ",i);
        }
        else 
            continue;;
    }
    printf("%d",num); 
    return 0;
}