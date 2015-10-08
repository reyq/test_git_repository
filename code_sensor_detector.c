#include <stdioh>
#include <stdint>

int main (void){
  uint8_t tab_entier [10] ={1,2,3,4,5,6,7,8,9,10};
  uint8_t index = 0;
  for index=0;index<10;index++){
    printf("%d\n",tab_entier[index]);
  }
  printf("hello world!!\n");
  return 0;
}
