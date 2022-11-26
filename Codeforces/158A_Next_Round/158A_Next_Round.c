#include<stdio.h>
int main(){
    int i=0, N = 0, k=0, count = 0;
    scanf("%d %d",&N, &k);
    int arr[N];

    while(i<N){
        scanf("%d",&arr[i]);
        i++;
    }

    for(i=0;i<N;i++){
        if(arr[i] > 0 && arr[i]>=arr[k-1]) { 
                count++;
            }
        else continue;
    }

    printf("%d",count);
    return 0;
}