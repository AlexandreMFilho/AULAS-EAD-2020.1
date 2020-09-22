#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int * Quicksort(int*,int, int);
void Troca(int *, int, int);

int main(){
  std::string str ("alexandremaia");//{97,108,101,120,97,110,100,114,101,109,97,105};
  int ordenado[50];
  strcpy(ordenado,Quicksort(nome,1,str.length()));
  printf("%s\n%s\n",nome,ordenado);
}

int* Quicksort(int*v,int e, int d){
  if(d>e){
    int i = e;
    int j = d;
    int piso = floor((e+d)/2);
    int t = v[piso];
    while(i<= j){
      while (v[i] < t){
        i+=1;
      }while(v[j] > t){
        j-=1;
      }if(i<=j){
        Troca(v,i,j);
        i+=1;
        j-=1;
      }
    }
    Quicksort(e,j);
    Quicksort(i,d);
  }
}

void Troca(int *v,int i,int j){
  int aux;
  aux = v[i];
  v[i] = v[j];
  v[j] = aux;
}
