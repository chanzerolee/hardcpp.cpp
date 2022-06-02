#include<iostream>
using namespace std;
double half(double &a){
  a=10;
  return a;
}
int main(){
  double n=20;
  half(n);
  cout<<n;
}
