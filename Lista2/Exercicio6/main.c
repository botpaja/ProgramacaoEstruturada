#include <stdio.h>
long long bonati(int n){
  if(n==0 ) return 0;
  else if(n==1) return 1;
  else {
    if(n%2==0) return bonati(n-1)+bonati(n-2);
    else if(n%2!=0) return bonati(n-1)*bonati(n-2);
  }
  
}
int main(void) {
  int num;
  while(scanf("%d", &num)!=EOF){

  printf("%lld\n", bonati(num-1));
  }
  return 0;
}
