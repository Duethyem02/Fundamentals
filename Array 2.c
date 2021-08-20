#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{  //Reversing a given (already stored) array 
    int array[]={34,56,54,32,67,89,90,32,21};
    int rev[9];
    int i;
    for (i=0;i<9;i++)
    {
        rev[i]=array[9-1-i];
        printf("%d ",rev[i]);
    }
    
    getch ();
    
    
}
