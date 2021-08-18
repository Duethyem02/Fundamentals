#include <stdio.h>
#include <conio.h>
void main()
{    // Find minimum and maximum element in an array
    int a1[20],i,len,min,max;
    printf("Enter length of your array:");
    scanf("%d",&len);
    printf("Enter %d elements:\n",len);
    for (i=0;i<len;i++)
    {
        scanf("%d",&a1[i]);
    }
    for (i=0;i<len;i++)
    {
        if (i==0)
        {
            min=a1[i];
            max=a1[i];
        }
        else 
        {
            if (a1[i]>max)
                max=a1[i];
            if (a1[i]<min)
                min=a1[i];
        }
    }
    printf("minimum value is %d \nmaximum value is %d",min,max);
                
    getch ();
    
    
} 

