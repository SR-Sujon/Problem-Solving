#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N=0;
    scanf("%d",&N);
    for(int i = 1; i<=N; i++){
        for(int j = i; j>=1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }  
    return 0;
}
