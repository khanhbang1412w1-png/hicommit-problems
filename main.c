#include <stdio.h>

int main(void) {
  float dtb, drl;
  scanf("%f%f", &dtb, &drl);
    if (dtb>=9.0 && drl>=90){
      printf("HOC_BONG_XS");
    }else if (8.0<=dtb && drl>=80){
      printf("HOC_BONG_GIOI");
    }else if(7.0<=dtb && drl>=70){
      printf("HOC_BONG_KHA");
    }else{
      printf("KHONG_DAT");
    }     
  return 0;
}