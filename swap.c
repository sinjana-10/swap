#include<stdio.h>
int main()
{
  int p=10,q=13;
  printf("before swap the value is p=%d, q=%d",p,q);
  p=p+q;
  q=p-q;
  p=p-q;
  printf("after swap the value is p=%d, q=%d",p,q);
  return 0;
}
