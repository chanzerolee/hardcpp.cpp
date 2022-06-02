#include<iostream>
using namespace std;
bool bigger(int a,int b,int &big);
int main(){
  int a,b,big;
  cin>>a>>b;
  cout<<bigger(a,b,big)<<" "<<big<<endl;
}
bool bigger(int a,int b,int &big){
  if(a>b){
    big=a;
    return false;}
  else if(b>a){
    big=b;
  return false;}
  else{
    big=a;
    return true;
  }
}