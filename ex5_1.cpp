#include<iostream>
using namespace std;
class Circle{
int radius;
public:
Circle();
Circle(int a){
  radius=a;
}
int getradius(){
  return radius;
}
};
void swap(Circle &a,Circle &b){
  Circle c=a;
  a=b;
  b=c;
}
int main(){
  Circle a(2);
  Circle b(1);
  cout<<"a : "<<a.getradius()<<" , b : "<<b.getradius()<<endl;
  swap(a,b);
  cout<<"a : "<<a.getradius()<<" , b : "<<b.getradius()<<endl;
}