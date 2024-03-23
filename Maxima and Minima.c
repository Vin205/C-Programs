                             // Assignment 3
// Write a c program to record maximum, minimum and no of students passed                             
#include<stdio.h>
int main() 
{  
  int n,i,m,p=0,max=0,min=100;
  printf("\n Enter number of students ");
  scanf("%d",&n);
   printf("\n Enter marks of students  ");
 
  for(i=1;i<=n;i++){
  scanf("%d",&m);
  if(m>=35){      // pass students condition
  p=p+1;
  }
  if(m>max){      // maximum condition
   max=m;
   
   }  
   if(m<min ){   // minimum condition
  min=m;
   }
   }
    printf(" \n No of students passed %d",p);
   printf(" \n Max marks obtained %d",max);
   printf(" \n Min marks obtained %d",min); 
    return 0;
         }

/*
Output
Enter number of students 5
Enter marks of students  34 45 56 67 78
No of students passed 4 
 Max marks obtained 78 
 Min marks obtained 34 */


