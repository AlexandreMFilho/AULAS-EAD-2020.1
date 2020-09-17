#include<stdio.h>

double Fatorial(int);


int recur = 0;
int main(){
  for(int i = 10; i<=100;i+=10){
    recur = 0;
    printf("Fatorial de %d\n",i);
    printf("eh %.1lf\n",Fatorial(i));
    printf("total recursões %d\n--------\n",recur);
  }
  return 0;
}

double Fatorial(int p){
  //printf("recursão %d\n",recur);
  recur++;
  if(p == 0){
    return 1;
  }else{
    return (p*Fatorial(p-1));
  }
}
