#include<stdio.h>
int main(){
    double avg,sum,x;
    int i = 1,j;

    while(i<=10){
        printf("Enter 3 subjects marks of student %d :\n",i);
        j=1;
        sum = 0.0;
        while(j<=3){
            scanf("%lf",&x);
            sum += x;
            j++;
        }
        avg = (double)(sum)/3;
        printf("Avg marks of student %d : %lf\n",i,avg);
        i++;
    }
    
    return 0;
}