#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][2]={{1,2},{3,4},{5,6}};
    printf("[");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<1;j++)
        {
            printf("[%d,%d] ",nums[i][j],nums[i][j+1]);
        }
    }
    printf("]");
    return 0;
}
