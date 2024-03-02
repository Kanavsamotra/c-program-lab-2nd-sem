//WAP TO PRINT THE POSITION OF THE SMALLEST NUMBER OF N ELEMENTS USING ARRAYS.......................
#include<stdio.h>
void main()
{
    int x,i,n,arr[20],large=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements......\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[large])
        {
            large = i;
        }
    }
    printf("The largest element is %d\n",arr[large]);
    printf("The position is %d",large+1);
}