#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long fat(int n){
  if(n==1) return n;
  else return n*fat(n-1);
}

unsigned long long pot(int n, int m){
  if(m==1) return n;
  else return n*pot(n,m-1);
}

int main(void) {
  int num, num2, numfat,rodadas, pontopot=0, 
pontofat=0;
unsigned long long resultpot, resultfat;
  char potencia[20];
  scanf("%d", &rodadas);

  for(int i=0; i<rodadas; i++){

  scanf("%s", &potencia); 
  char *sdigit = strdup(potencia);
  char *pdigit =  strsep(&sdigit, "^");
  num= atoi(pdigit);
  num2= atoi(sdigit);
 resultpot = pot(num,num2);

 scanf("%d", &numfat);
 resultfat=fat(numfat);

  printf("%d%s%d", resultpot," ", resultfat);
 if(resultpot>resultfat) pontopot++;
 else pontofat++;
}

if(pontopot>pontofat) printf("%s","potencia ganhou");
  else if(pontofat>pontopot) printf("%s", "fatorial ganhou");
    else if(pontofat==pontopot) printf("%s", "empate");
  return 0;
} 
