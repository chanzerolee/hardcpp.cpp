#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cout<<"여러 줄을 문자열을 입력하세여. 입력의 끝은 &문자 입니다."<<endl;
  getline(cin,s,'&');
  cin.ignore();

  string f,r;
  cout<<"find:";
  getline(cin,f,'\n');
  cout<<"replace:";
  getline(cin,r,'\n');
  int i=0;
  while(true){
    int findex=s.find(f,i);
    if(findex==-1)
      break;
    s.replace(findex,f.size(),r);
    i=findex+r.length();
  }
  cout<<s;
}