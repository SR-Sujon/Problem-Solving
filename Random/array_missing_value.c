#include<stdio.h>
int main() {
    int N,x,i;
    scanf("%d",&N);
    int arr[100];
    for(i=1;i<N;i++){
        scanf("%d",&x);
        arr[x] = 1;
        //printf("%d\n",arr[i]);
    }
    
    for(i=1;i<=N;i++){
        if(arr[i]==0){
            printf("Missing value: %d",i);
            break;
        }
    }
    
    
    return 0;
}