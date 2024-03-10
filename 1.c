#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter age of ram: \n");
    scanf("%d",&a);
    printf("enter age of shyam: \n");
    scanf("%d",&b);
    printf("enter age of ajay: \n");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("ram is bigger in age");
    }
    if (b>a && b>c)
    {
        printf("shyam is bigger in age");

    }
     if (c>a && c>b)
    {
        printf("ajay is bigger in age");

    } 
    if (a==b && b==a && a==c && b==c)
    {
        printf("same age");
    }
    
    
    return 0;
}