#include<stdio.h>
#include<math.h>
int main(){
    int N,root=0,i = 0,j=0,flag=0;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0; i<N; i++){
        scanf("%d",&arr[i]);
    }


    while(i<N){
        j=2;
        root = sqrt(arr[i]);
        while(j<=root){
            if(arr[i]%j==0){
                flag = 1;
                break;
            } 
            else {
                continue;
            }
            j++;
        }
        if(flag==0){
            printf("%d,",arr[i]);
        }
        i++;
    }
    return 0;
}

