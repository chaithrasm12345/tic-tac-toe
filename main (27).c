#include <stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the value of m and n for first materix:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the elements for first materix:\n");
    for(int i=0;i<=m-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("Enter the value of m and n for second materix:");
    scanf("%d%d",&p,&q);
    if(n==p){
        int b[p][q];
        printf("Enter the elements for first materix:\n");
        for(int i=0;i<=p-1;i++){
            for(int j=0;j<=q-1;j++){
                scanf("%d",&b[i][j]);
            }
        }
    
    int c[m][q];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=q-1;j++){
            c[i][j]=0;
            for(int k=0;k<=n-1;k++){
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("The multiplication of matrix are\n");
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=q-1;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }}
    else{
        printf("The 1st materix columns and 2nd materix rows must be equal\n");
    }
    return 0;
    
}
   
