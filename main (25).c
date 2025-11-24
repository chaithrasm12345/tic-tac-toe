#include<stdio.h>
int main()
{
    int n,key,flag;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the key:");
    scanf("%d",&key);
    int arr1[n];
    printf("Enter the array element:");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr1[i]);
        if(key==arr1[i])
        {
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    printf("key is not found\n");
    else
    {
        printf("key is found\n");
    }
}