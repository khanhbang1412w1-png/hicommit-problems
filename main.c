#include <stdio.h>

int main() 
{
  int t;
  scanf("%d", t);
  if (t < 15){
    printf("LANH\n");
  } else if (15 < t < 25){
    printf("MAT\n");
  } else if (25 < t < 35){
    printf("NONG\n");
  } else (t < 35){
    printf("RAT_NONG\n");
  }
  return 0;
}