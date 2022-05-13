#include<iostream>
#include<string>
using namespace std;
class Person{
string name;
string tel;
public:
string getName(){
  return name;
}
string getTel(){
  return tel;
}
void set(string nam,string te){
name=nam;
tel=te;}
};
int main(){
  string a,b;
  Person per[3];
  for(int i=0;i<3;i++){
  cout<<"사람 "<<i+1<<">>";
  cin>>a>>b;
    per[i].set(a,b);
    }
  cout<<"모든 사람의 이름은 >>";
  for(int i=0;i<3;i++){
    cout<<per[i].getName()<<" ";
  }
  cout<<"\n 전화번호를 검색합니다 이름을 입력하세요.>>";
  cin>>a;
  for(int i=0;i<3;i++){
    if(per[i].getName()==a){
      cout<<"전화 번호는 >>"<<per[i].getTel();
      break;
      }
  }
}