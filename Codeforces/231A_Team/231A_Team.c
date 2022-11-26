#include<stdio.h>
int main(){
    int N,count=0,solved=0,x;
    scanf("%d",&N);
    while(N>0){
        for(int i = 0; i<3; i++){
            scanf("%d",&x);
            if(x==1){
                count++;
            }
            else continue;
        }

        if(count > 1)
            solved++;
        count = 0;
        N--;
    }

    printf("%d",solved);
    return 0;
}