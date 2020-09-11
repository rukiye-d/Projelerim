#include <cs50.h>
#include <stdio.h>

int main(void)
{
    while(1)
    {
        int h = get_int("height: ");
       
         int basamak=1;
         int bosluk = h-1;
          

          if (h>=1 && h<=8)
         {  
             for(int i=0; i<h;i++)
             {   
                    
               for(int j=0;j<bosluk;j++)
               { 
                  printf(" ");
               }
                                
               for(int j=0;j<basamak;j++)
               { 
                   printf("#");
               }
                                
                  printf("\n");
                  basamak++;
                  bosluk--;       
               }
            break;                         
         }
    }

        
                   
                           
}




