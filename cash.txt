
    
#include <stdio.h>
#include <cs50.h>
#include <math.h>

void greedyAlgoritma(int c);

int main(void)
{
    float dollars=get_float("change owned: ");
    float coin=round(dollars*100);
    if(coin>0)
    { 
        greedyAlgoritma(coin);
    }
    else 
    {
        coin=get_float("change owned: ");
    }
}

void greedyAlgoritma(int c)
{
    int q=0,d=0,n=0,p=0;
    while(c>=25)
    {
        q++;
        c= c - 25;
    }
        while(c>=10)
    {
        d++;
        c= c - 10;
    }
        while(c>=5)
    {
        n++;
        c= c - 5;
    }
        while(c>=1)
    {
        p++;
        c= c - 1;
    }
    printf("%i\n",q+d+n+p);
 
}
