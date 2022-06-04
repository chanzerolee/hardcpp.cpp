#include<iostream>
using namespace std;
class MyIntStack{
int p[10];
int tos=0;
public:
bool push(int n);
bool pop(int &n);
};
bool MyIntStack::push(int n){
  ++tos;
  if(tos>10){
    tos--;
    return false;
    }
  return true;
}
bool MyIntStack::pop(int &n){
    n=--tos;
  if(n<0)
    return false;
  return true;
}
int main(){
  MyIntStack a;
  for(int i=0;i<11;i++){
    if(a.push(i))cout<<i<<' ';
    else cout<< endl<<i+1<<" 번쨰 Stack full"<<endl;
  }
  int n;
  for(int i=0;i<11;i++){
    if(a.pop(n))cout<<n<<' ';
    else cout<<endl<<i+1<<" 번째 Stack empty";
  }
  cout<<endl;
}