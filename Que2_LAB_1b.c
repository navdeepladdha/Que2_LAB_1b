#include <stdio.h>
int main()
{  
  int n;
  printf("Enter Row = ");
  scanf("%d",&n);
  
  int m;
  printf("Enter Col = ");
  scanf("%d",&m);
  
   int arr[n][m];
   
   printf("enter the ele of Matrix : \n");
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
       scanf("%d",&arr[i][j]);
     }
   }
   
     printf("the matrix is : \n");
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
       printf("%d",arr[i][j]);
     }printf("\n");
   }
   
   printf("\n the Transpose is : \n");
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
       printf("%d",arr[j][i]);
     }printf("\n");
   }
   
}