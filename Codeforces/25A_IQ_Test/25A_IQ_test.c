#include<stdio.h>
int main(){
    int N=0,even=0,odd=0,i=0,evenIndex=0,OddIndex=0;
    scanf("%d",&N);
    int arr[N];
    while(i<N){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
            evenIndex = i+1;
        } 
        else {
            odd++;
            OddIndex = i+1;
        }
        i++;
    }

    if(even==1) {
        printf("%d",evenIndex);
    } 
    else {
        printf("%d",OddIndex);
    }
    return 0;
}