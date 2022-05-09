#include<iostream>
#include<string>
using namespace std;
int main(){
  string a;
  cout<<"문자를 입력하시오"<<endl;
  getline(cin,a);

  int len=a.length();
  for(int i=0;i<len;i++){
    string first=a.substr(0,1);
    string namuge=a.substr(1,len-1);
    a=namuge+first;
    cout<<a<<endl;
  }
}