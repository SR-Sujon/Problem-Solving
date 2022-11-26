#include<stdio.h>
int main(){
    int n,h,i,a;
    scanf("%d %d",&n,&h);
    int width = 0;
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>h)
            width +=2;
        else
            width++;
    }
    printf("%d",width);
    return 0;
}