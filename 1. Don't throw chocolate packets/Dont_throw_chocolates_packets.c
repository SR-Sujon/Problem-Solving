/*
Problem title: Don't throw Chocolate Packets
Description: A shop owner proposed to the customers that if 4 chocolate packets of the sold products is returned, he will provide 1 new chocolate for that.
*/

#include <stdio.h>
int main()
{
    int chocolates,packets,new_chocloates;
    printf("Enter initial chocolates quantity:");
    scanf("%d",&chocolates);
    packets=chocolates;
    while(packets>=4){
        new_chocloates = packets/4;
        chocolates += new_chocloates;
        packets = new_chocloates + packets%4;
        printf("New chocolates: %d, After eating Packets: %d\n",new_chocloates,packets);
    }
    printf("Total Choclates one can get is: %d, Packets remaining: %d",chocolates,packets);
    return 0;
}