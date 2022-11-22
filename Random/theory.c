#include<stdio.h>
int main() 
{ 
    int a,b,c,d; 
    scanf("%d %d %d %d",&a,&b,&c,&d); 
    if(a>b) 
    { 
        if(a>c) 
        { 
            if(a>d) 
            {   
                printf("Largest = %d",a); 
            } 
            else 
            { 
                printf("Largest = %d",d); 
            } 
        } 
    } 
    else if(b>c) 
        { 
            if(b>d) 
                { 
                    printf("Largest = %d",b); 
                } 
            else 
                { 
                    printf("Largest = %d",d); 
                } 
        } 
        else if(c>d) 
            { 
               printf("Largest = %d",c); 
            } 
        else 
        { 
            printf("Largest = %d",d); 
        } 

    if(a<b) 
    { 
        if(a<c) 
        { 
            if(a<d) 
            {   
                printf("Smallest = %d",a); 
            } 
            else
            { 
                printf("Smallest = %d",d); 
            } 
        } 
    } 
    else if(b<c) 
        { 
            if(b<d) 
                { 
                    printf("Smallest = %d",b); 
                } 
            else 
                { 
                    printf("Smallest = %d",d); 
                } 
        } 
        else if(c<d) 
            { 
               printf("Smallest = %d",c); 
            } 
        else 
        { 
            printf("Smallest = %d",d); 
        } 
    
    return 0;
}