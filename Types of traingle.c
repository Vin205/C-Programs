                            // Assignment 2
// Write a c program to accept length of three sides of a triangle and display type of triangle
# include  <math.h><stdio>
int main(){
int a,b,c,s,p;

printf("Enter three sides a, b ,c \n");
scanf(" %d %d %d",&a ,&b ,&c);
p= a+b+c;
s=sqrt((s*(s-a)*(s-b)*(s-c))) ;


if(a==b && b==c && c==a)
{
  
  printf("An Equilateral triangle\n");
printf("\n Area Equilateral triangle :\n %d",s);
printf("\n Perimeter Equilateral triangle: %d\n",p);

}

else if(a==b || b==c || c==a)
{ 
printf(" Isoceles triangle\n");
printf("\n Perimeter of isoceles triangle: %d\n",p);
printf("\n Area Equilateral triangle : %d",s);
}
else if( c*c== a*a +b*b || a*a== c*c + b*b || b*b== c*c + a*a)  
{
 printf(" A right angle triangle\n ");
 printf(" Area of right angle triangle %d\n",s);
 printf(" Perimeter right angle triangle %d\n",p);

}
 return 0;
 }
/*
  Output
  Enter three sides a, b ,c 
    3 3 3
  An Equilateral triangle

  Area Equilateral triangle :
  21
  Perimeter Equilateral triangle: 9
*/

