#include <stdio.h>
#include <stdlib.h>

int isPerfect(int num)
{
    int i, sum;
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    if(sum == num){
        return 1;}
    else{
        return 0;}
}

void printPerfect(int start, int end)
{
    while(start <= end)
    {
        if(isPerfect(start))
        {
            printf("%d\n", start);
        }
        start++;
    }
}

int main()
{
    int start, end;
    scanf("%d", &start);
    scanf("%d", &end);
    printPerfect(start, end);
    return 0;
}
