#include <iostream>
#include <cmath>
using namespace std;

int dToBinary(int n){
  int i=0;
  int bitVal=0;
  while(n>0){
    int bit=n&1;
    bitVal=bitVal+(bit*pow(10,i++));
    n=n>>1;
  }
  return bitVal;
}
int bToDecimal(int n){
  int i=0;
  int bitVal=0;
  while(n>0){
    int bit=n%10;
    bitVal=bitVal+(bit*pow(2,i++));
    n=n/10;
  }
  return bitVal;
}
int main() {
  int n;
  cout<<"enter a number:"<<endl;
  cin>>n;
  // int binary=dToBinary(n);
  // cout<<binary<<endl;
  int decimal=bToDecimal(n);
  cout<<decimal<<endl;
}
