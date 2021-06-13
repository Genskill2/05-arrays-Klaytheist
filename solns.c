/* Enter your solutions in this file */
#include <stdio.h>
int max(int array[], int count)
{
    int maximum = array[0];
    for(int i = 1; i < count; i++)
        if(array[i] > maximum)
           maximum = array[i];
    return maximum;
}
int min(int array[], int count)
{
    int minimum = array[0];
    for(int i = 1; i < count; i++)
        if(array[i] < minimum)
           minimum = array[i];
    return minimum;
}
float average(int array[], int count)
{
    float sum = 0;
    for(int i = 0; i < count; i++)
        sum += array[i];
    return sum/count;
}
int mode(int array[], int count)
{
    int mode_val[] = {0,-1},temp[2];
    for(int i = 0; i < count; i++)
    {
        temp[0] = array[i]; 
        temp[1] = 0;
        for(int j = 0; j < count; j++)
            if(array[j] == temp[0])
                temp[1]++;
        if(temp[1] > mode_val[1])
        {
            mode_val[0] = temp[0];
            mode_val[1] = temp[1];
        }
    }
    return mode_val[0];  
}
int factors(int number, int array[])
{
    int flag, count = 0, i;
    while( number > 1 )
        for(i = 2 ; i <= number ; i++)
        {
            flag  = 0;
            for(int j = 2 ; j <= i/2 ; j++)
                if(i%j == 0)
                {
                    flag = 1;
                    break;
                }
            if(flag == 0 && number%i == 0)
               {
                   array[count] = i;
                   count++;
                   number/=i;
                   break;
               }
        }
    return count;
}
