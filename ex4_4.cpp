#include <iostream>
using namespace std;

class sample {
int *p;
int size;
public:
sample(int n){
  size=n;p= new int [n];
}
void read();
void write();
int big();
~sample();
};
sample::~sample(){
  delete [] p;
}
void sample::read(){
for(int i=0;i<size;i++)  
cin>>p[i];
}
void sample::write(){
  for(int i=0;i<size;i++){
    cout<<p[i]<<" ";}
  cout<<endl;
  }
int sample::big(){
  int a=p[0];
  for(int i=1;i<size;i++){
    if(a<p[i])
      a=p[i];
  }
  return a;
}
int main(){
  sample s(10);
  s.read();
  s.write();
  cout<<"가장 큰 수는"<<s.big()<<endl;
}