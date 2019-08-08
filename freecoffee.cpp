#include <iostream>
#include<math.h>
using namespace std;

int main() {
  long int rate,discount,s=0,y;
  cin>>rate>>discount;
  while(rate!=1)
  {
  s=s+rate;      
  y=ceil((rate*discount)/100);
  rate=rate-y;
  
  }
  cout<<s+1;
}

