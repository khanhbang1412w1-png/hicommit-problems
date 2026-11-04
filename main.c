#include <stdio.h>

int main() {
  float dtb, drl;
  scanf("%d", &dtb, &drl);
  printf("Nhap dtb, drl:", dtb, drl);{
    if (dtb>=9 && drl>=90){
      printf("HOC_BONG_XS");
    }else if (8<=dtb<9 && 80<=drl>=90 || dtb>=90 && 80<=drl<90){
      printf("HOC_BONG_GIOI");
    }else if(7<=dtb<8&&70<=drl>=90 || 8<=dtb<9&&70<=drl<80 || dtb>=90&&70<=drl<80){
      printf("HOC_BONG_KHA");
    }else{
      printf("KHONG_DAT");
    }     
  }
  return 0;
}