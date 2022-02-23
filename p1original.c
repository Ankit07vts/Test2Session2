#include <stdio.h>
#include <math.h>

void input(float*x1 , float*x2 , float*y1 , float*y2)
{
  printf("Enter a point \n");
  scanf("%f%f\n",x1,x2);
  printf("Enter a point\n");
  scanf("%f%f",y1,y2);   
}

void distance(float x1,float x2,float y1,float y2,float*d)
{
  float x,y;
  x=x1-x2;
  y=y1-y2;
  *d=sqrt(x*x+y*y); 
}

void output(float x1,float x2,float y1,float y2,float d)
{
  printf("the distance between poinr (%f,%f) and (%f,%f) is %f\n",x1,x2,y1,y2,d);
  
}
int main()
{
  float x1,x2,y1,y2,d;
  input(&x1,&x2,&y1,&y2);
  distance(x1,x2,y1,y2,&d);
  output(x1,x2,y1,y2,d);
  return 0; 
}
