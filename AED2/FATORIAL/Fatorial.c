#include<stdio.h>
int recur = 0;
int main(){
  for(int i = 10; i<=100;i+=10){
    recur = 0;
    printf("Fatorial de %d\n",i);
    int resp = Fatorial(i);
    printf("eh %d",resp);
    printf("--------\n");
  }
  return 0;
}

int Fatorial(int p){
  printf("recursão %d\n",recur);
  recur++;
  if(p == 0){
    return 1;
  }else{
    return p*Fatorial(p-1);
  }
}
