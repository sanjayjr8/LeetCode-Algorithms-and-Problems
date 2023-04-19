#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr,n,min=100,index;
    scanf("%d",&n);
    arr=(int*)malloc(n*(sizeof(int)));
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    
    for(int i=0;i<n;i++)
    {
        if (min>*(arr+i))
        {
            min=*(arr+i);
            index=i;
        }
    }
     printf("the smallest is %d is at %d\n",min,index+1);
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }

    return 0;
}
