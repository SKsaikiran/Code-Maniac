#include <stdio.h>

int main() {
    int i;
    int a[10]={1,4,5};
    int b[10]={1,3,2};
    int c[10];
    for(i=0;i<3;i++)
    {
       c[i]=a[i]+b[i];
      printf("%d",c[i]);
    }
    
    
}