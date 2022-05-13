#include<iostream>
#include<string>
using namespace std;
int main(){
  string a;
  cout<<"아래에 한줄을 입력하세여(exit 종료)"<<endl;
  while(true){
    getline(cin,a);
    if(a=="exit")
      break;
    string b;
    int i=0;
      for(int j=a.length();j>=0;j--){
        b=b+a[j];
        i++;
      }    
      cout<<b<<endl;
    }
  }