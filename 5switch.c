                         //    Assignment 5
//  Write a C program using functions to perform following operations 1.Addition of matrices 2. 
//   multiplication of matrices 3.Transpose of matrices                          
#include<stdio.h>
 int main() 
 {
  int i,j,r,c,k, first[50][50],second[50][50];    // array declaration
  int sum[50][50], mul[50][50],  trans[50][50],op; 
  
  
  printf("Enter no of rows and cols");
  scanf("%d %d",&r,&c);                        // two dimensional array input
  
 
  printf("Enter elements of matrix 1\n");
   for(i=0;i<r;i++) 
   {
   for(j=0;j<c;j++)
   {
   scanf("%d",& first[i][j]);
   }
   } 
   
   printf("Enter elements of matrix 2\n");
   for(i=0;i<r;i++) 
   {
   for(j=0;j<c;j++)                         
   {
   scanf("%d",& second[i][j]);
   }
   } 
  printf("Enter your choice\n 1add\n 2 Product\n 3 Transpose\n");  
  scanf("%d",&op);
  
     switch(op)
     {
     case 1:
   printf("Sum of matrix\n");
   for(i=0;i<r;i++) 
   {
    for(j=0;j<c;j++)                   
   {
    sum[i][j]= first[i][j] + second[i][j];
       printf("%d\t",sum[i][j]);
   } printf("\n");
   }
   break;
   
   case 2:
   printf("Product of matrix\n");
   for(i=0;i<r;i++) 
   {
    for(j=0;j<c;j++)
   {
    for(k=0;k<j;k++)
   {
     mul[i][j]= (first[i][k] )+ (second[k][j]);
  
      
   } 
   
      printf("%d\t",mul[i][j]);
    
   } 
      printf("\n");
   }
   break;
   case 3:
    printf("Transpose of matrix\n");
   for(i=0;i<r;i++) 
   {
    for(j=0;j<c;j++)
   {
   trans[i][j]= first[j][i];
   printf("%d\t",trans[i][j]);
   } printf("\n");
   }
   break;
   }
       
   return 0;
}
 /*
 Output
 Enter no of rows and cols 2 2
2 2
Enter elements of matrix 1
1 2 3 4
Enter elements of matrix 2
4 5 6 7
Enter your choice
 1add
 2 Product
 3 Transpose
1
Sum of matrix
5	7	
9	11
	
2
Product of matrix
0	6	
0	8
	
3
Transpose of matrix 1
1	3	
2	4	 */

