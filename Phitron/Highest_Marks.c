#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N=0,highest=0;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0; i<N; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>highest){
            highest = arr[i];
        }
    }
    for(int i = 0; i<N; i++){
        arr[i] = highest - arr[i];
        printf("%d ",arr[i]);
    }  
    return 0;
}
