#include <stdio.h>

int main() {
  int d;
  long long v;
  scanf ("%d %lld", &d, &v);
  if (d<=0 || v<=0){
    printf("INVALID\n");
  } else if (v>=500000 || d<15){
    printf("0\n");
  } else if (d<=5){
    printf("15000\n");
  } else if (d<=15){
    printf("25000\n");
  } else {
    printf("40000\n");
  }  
  return 0;
}