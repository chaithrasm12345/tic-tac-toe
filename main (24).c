#include <stdio.h>
int main()
{
    int n,max=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the arry element:");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr1[i]);
        if(arr1[i]>max){
            max=arr1[i];
        }
       
        
    }
    printf("Maximum value:%d",max);
}
   
