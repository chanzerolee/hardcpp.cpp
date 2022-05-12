#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main(){
  srand((unsigned)time(0));
  string a;
  cout<<"아래에 한줄을 입력하세여(exit는 종료문자)"<<endl;
  while(true){
    getline(cin,a);    
    if(a=="exit"){
      break;}
    int n=rand()%a.length();
    char c=rand();
      if(c%2==0){
      c=rand()% (122-97+1)+97;
    }
    else{
      c=rand()%(90-65+1)+65;
    }
    a[n]=c;
    cout<<a<<endl;
    
  }
}
