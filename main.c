#include <stdio.h>
#include <math.h>

int main() {
  int xeploai = 4;
  switch (xeploai)
  {
    case 1:
      printf("XEP_LOAI_XUAT_SAC"); 
      break;
    case 2:
      printf("XEP_LOAI_GIOI"); 
      break;
    case 3:
      printf("XEP_LOAI_KHA");
    default:
      printf("KHONG_HOP_LE");
  }
  return 0;
}