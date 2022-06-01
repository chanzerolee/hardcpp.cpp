#include <iostream>
#include<string>
using namespace std;
class Circle{
int radius;
string name;
public:
void setCircle(string name,int radius){
  this->name=name;
  this->radius=radius;
}
double getArea(){
  return 3.14*radius*radius;
}
string getName(){
  return name;
}
};
class CircleManager{
  Circle *p;
  int size;
public:
  CircleManager(int size){
    this->size=size;
    p=new Circle [size];
    for(int i=0;i<size;i++){
      cout<<"원 "<<i+1<<"의 이름과 반지름 >>";
      int a;string b;
      cin>>b>>a;
      p[i].setCircle(b,a);
      }
  }
  ~CircleManager(){
    delete [] p;
  }
  void searchByName(){
    string a;
      cout<<"검색하고자 하는 원의 이름>>";
      cin>>a;
    for(int i=0;i<size;i++){
      if(p[i].getName()==a){
      p[i].getArea();
      break;}
      }
  };
  void searchByArea(){
    int a;
    cout<<"최소 면적을 정수러 입력하세요>>";
    cin>>a;
    cout<<a<<"보다 큰 원을 검색합니다."<<endl;
    for(int i=0;i<size;i++){
      if(p[i].getArea()>a)
        cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea()<<" ";
    }
    cout<<endl;
  }
};

int main(){
  int a;
  cout<<"원의 개수:";
  cin>>a;
  CircleManager circle(a);
  circle.searchByName();
  circle.searchByArea();
  }