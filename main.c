#include <stdio.h>

int main() {
  int a[5]={12,14,16,18,20};
  int i;
 printf("enter a 5 num\n");
  for(i=0;i<=4;i++)
  scanf("%d",&a[i]);
  
 for(i=4;i>=0;i--)
  printf(" %d",a[i]);
  
}