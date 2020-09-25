#include<stdio.h>

void Chica(int);

int main(){
  int num, aux;
  num = 50;
  for(int i = 1;i<=num;i++){
    printf("%d eh divisivel por 7?\n",i);
    Chica(i);
    printf("---------------\n");
  }
return 0;
}

void Chica(int n){
  int aux;
  aux = n;
  while(aux != 49 && !(aux < 10)){
    aux = (aux/10)+((aux%10)*5);
  }
  if(aux == 49 || aux == 7){
    printf("Sim\n");
    return;
  }else if(aux <= 9 && aux != 7){
    printf("Nao\n");
    return;
  }
}
