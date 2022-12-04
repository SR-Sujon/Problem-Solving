#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
    int T, i;
    char num[20];
    scanf("%d",&T);
    int arr[T], min[T];
    for(i=0; i<T; i++){
        scanf("%s[^%%\n]",num);
        arr[i] = atoi(num);
                if(arr[i]<60){
                    min[i] = (60-arr[i])+ 40 + 60;
                }
                else if(arr[i]>=60 && arr[i]<80){
                    min[i] = (80 - arr[i])*2 + 60;
                }
                else if(arr[i]>=80 && arr[i]<100){
                    min[i] = (100 - arr[i])*3;
                }
                else {
                    min[i] = 0;
                }
        printf("%d minutes\n",min[i]);
    }
    return 0;
}
