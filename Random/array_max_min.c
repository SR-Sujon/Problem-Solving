#include<stdio.h>
int main() {
    int N, max, min,even=0,odd=0;
    N = 6;
    int arr[] = {10,20,60,40,80,90};
    max = arr[0];
    min =arr[0];
    for(int i=1; i<N;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
        
        //printf("Max: %d & Min: %d\n",max,min);
    }
    printf("Max: %d and Min: %d & Evens: %d and Odds: %d\n",max,min,even,odd);
    return 0;
}