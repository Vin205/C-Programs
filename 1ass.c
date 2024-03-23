
// ASSIGNMENT 1
// Roll no 17 FY C In a departmental store a customer is offered x% discount and sales tax is y% on discount amount write a c- program // 
// preprocessor
  #include<stdio.h>
  //main function
int main()
{ // local declaration 
int pp,dv, x, dp,st,y, amt;
printf("Enter the printed price of laptop");
scanf("%d",&pp);
printf("Enter the discount value");
scanf("%d",&dv);
// formula to calculate 
x=pp*dv/100;
dp=pp-x;
printf("discounted price is:%d",dp);
printf(" Enter the sales tax" );
scanf("%d", &st);
//formula to calculate
y=dp*st/100;
amt= dp + y;
printf("Final amount is : %d", amt);
return 0; //returns the flow of execution  of function from where it is called
} // main 

/* output

Enter the printed price of laptop 5000
Enter the discount value 10
discounted price is:4500 
Enter the sales tax 10
Final amount is : 4950 */


