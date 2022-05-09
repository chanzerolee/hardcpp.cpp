#include<iostream>
#include<string>
using namespace std;
int main(){
  string a;
  cout<<"39+29+21+21처럼 덧셈 문자를 입력하시오"<<endl;
  getline(cin,a);
  int sum=0;
  int su=0;
  while(true){
   int findex=a.find("+",su);
    if(findex==-1){
      string part= a.substr(su);
      if(part== "")break;
      cout<<part<<endl;
      sum+=stoi(part);
      break;
    }
    cout<<findex<<endl;
    int count=findex - su;
    string part=a.substr(su,count);
    cout<<part<<endl;
    sum+=stoi(part);
    su=findex+1;
  }
  cout<<"숫자의 합은>>"<<sum;
}