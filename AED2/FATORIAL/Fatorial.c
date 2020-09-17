#include<stdio.h>

float Fatorial(int);


int recur = 0;
int main(){
  for(int i = 10; i<=100;i+=10){
    recur = 0;
    printf("Fatorial de %d\n",i);
    printf("eh %.0f\n",Fatorial(i));
    printf("total recursões %d\n--------\n",recur);
  }
  return 0;
}

float Fatorial(int p){
  //printf("recursão %d\n",recur);
  recur++;
  if(p == 0){
    return 1;
  }else{
    return (p*Fatorial(p-1));
  }
}
