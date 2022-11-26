#include<stdio.h>
int main(){
    int N=0,i=0,moves=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<N-1;i++){
        while(arr[i]>arr[i+1]){
            arr[i+1]++;
            moves++;
            //printf("index: %d value: %d\n",i+1,arr[i+1]);
        }
    }
    printf("%d",moves);
    return 0;
}