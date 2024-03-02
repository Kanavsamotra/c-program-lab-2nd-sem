//WAP TO PRINT THE POSITION OF THE SMALLEST NUMBER OF N ELEMENTS USING ARRAYS.......................
#include<stdio.h>
void main()
{
    int x,i,n,arr[20],small=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements......\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[small])
        {
            small = i;
        }
    }
    printf("The largest element is %d\n",arr[small]);
    printf("The position is %d",small+1);
}