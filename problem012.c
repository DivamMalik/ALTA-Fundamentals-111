#include <stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  switch(x) {
    case(3):case(4):case(5):
    printf("Spring");
    break;
    case(6):case(7):case(8):
    printf("Summer");
    break;
    case(9):case(10):case(11):
    printf("Autum");
    break;
    case(12):case(1):case(2):
    printf("Winter");
    break;
  }
  return 0;
}
