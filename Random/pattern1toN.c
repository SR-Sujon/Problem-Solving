#include<stdio.h>
int main(){
    int N=0,lines=1;
    scanf("%d",&N);
    for(int k=N; k>=1;k--){
        for(int i = 1; i<=k; i++){
            printf("%d ",i);
        }
        printf("\n");
        
        for(int j=1;j<=lines;j++){
            printf(" ");
        }
        lines++;
    }
    return 0;
}