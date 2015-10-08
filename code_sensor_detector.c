#include <stdioh>
#include <stdint>

int fct_carrer(int nbr){
  return nbr*nbr;
}
int main (void){
  uint8_t tab_entier [10] ={1,2,3,4,5,6,7,8,9,10};
  uint8_t index = 0,a = 5;
  for (index=0;index<10;index++){
    printf("%d\n",tab_entier[index]);
  }
  a = fct_carrer(a);
  printf("hello world!! = %d\n",a);
  return 0;
}
