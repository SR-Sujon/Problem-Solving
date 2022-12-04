#include <stdio.h>
int main() {
    int T,i=1;
    long long int arr[4], res=0;
    scanf("%d",&T);
    while(i<=T){
        for(int j=0;j<4;j++){
            scanf("%lld",&arr[j]);
        }
        res = arr[0]-(arr[1]+arr[2]+arr[3]);
        printf("%lld\n",res);
        i++;
    } 
    return 0;
}
