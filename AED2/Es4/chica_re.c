#include<stdio.h>

int Chica(int);

int main(){
  int num, aux, n = 50;
  for(int i = 0;i<=n;i++){
    printf("%d eh divisivel por 7?\n",i);
    aux = Chica(i);
    if(aux > 0){
      printf("Sim\n");
    }else{
      printf("Nao\n");
    }
    printf("---------------\n");
  }
return 0;
}

int Chica(int n){
  if(n == 49){
    //ok é div
    return 1;
  }else if(n < 10){
    if(n == 7){
      //ok é div
      return 1;
    }else{
      //Não é div
      return -1;
    }
  }
  int val,rest;
  val = n/10;
  rest = (n%10)*5;
  return Chica(val+rest);
}
