#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    char line[100];
    scanf("%s[^%%\n]",line);
    printf("Hello,World\n");
    x = atoi(line);
    printf("%d",x);
    return 0;
}