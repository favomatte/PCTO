#include <stdio.h>

int main()
{
  int n1;
  int n2;
  printf("scrivi due numeri\n");
  scanf("%d\n%d", &n1, &n2); 
  if(n1%n2 == 0)
  {
    printf("il primo numero è un multiplo del secondo");
  } 
  else 
  {
    printf("il primo numero non è un multiplo del secondo");
  }
  return(0);
}