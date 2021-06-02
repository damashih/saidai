#include<iostream>
using ll = long long;

ll ack(ll m, ll n){
  if(m==0) return n+1;
  else if(n==0) ack(m-1,1);
  else ack(m-1,ack(m,n-1));
}

int main(){
  ll m,n;
  std::cout < < "input number under 5 : ";
  std::cin > > m;
  std::cout < < "input number you like : ";
  std::cin > > n;
  std::cout < < ack(m,n) < < std::endl;

  return 0;
}
