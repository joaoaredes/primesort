
#include <stdio.h>

int main() {

int num=0, i, j=-1, vetor[100000], a, b, aux;

while (num != -1) {
  scanf("%d", &num);
  if(num==1){
  j++;
  vetor[j] = num;

  } else {
  for (i=2 ; i<num ; i++) {
    if (num % i == 0) {
      j++;
      vetor[j] = num;
      break;
    }
  }
  }
}

for (i=0; i<=j; i++){
  for (b=0; b<=j; b++){
    if (vetor[i] > vetor[b]){
      aux = vetor[b];
      vetor[b] = vetor[i];
      vetor[i] = aux;
    }
  }
}


for(a=0; a<=j; a++) {
  printf("%d\n", vetor[a]);
}

}
