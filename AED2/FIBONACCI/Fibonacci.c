#include<stdio.h>
int recur = 0;
int main(){
  for(int i = 10; i<=100;i+=10){
    recur = 0;
    printf("Fibonacci de %d\n",i);
    int resp = Fibonacci(i);
    printf("eh %d",resp);
    printf("--------\n");
  }
  return 0;
}

int Fibonacci(int p){
  printf("recursão %d\n",recur);
  recur++;
  if(p <= 1){
    return p;
  }else{
    return Fibonacci(p-1)+Fibonacci(p-2);
  }
}