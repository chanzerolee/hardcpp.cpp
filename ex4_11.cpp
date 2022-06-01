#include<iostream>
#include<string>
using namespace std;

class Container{
int size;
public:
Container(){size=10;}
void fill(){
  size=10;
}
void consume(){
  size-=1;
}
int getSize(){
  return size;
}
};

class CoffeeVending{
Container tong[3];
void fill(){
  tong[0].fill();
  tong[1].fill();
  tong[2].fill();
}
void selectEspresso(){
  tong[0].consume();
  tong[1].consume();
  cout<<"에스프레소 드세여\n";
  }
void selectAmericano(){
  tong[0].consume();
  tong[1].consume();
  tong[1].consume();
  cout<<"아메리카노 드세요\n";
}
void sugerCoffee(){
  tong[0].consume();
  tong[1].consume();
  tong[2].consume();
  cout<<"설탕 커피 드세요"<<endl;
}
void show(){
  cout<<"커피: "<<tong[0].getSize()<<" 물: "<<tong[1].getSize()<<"설탕: "<<tong[2].getSize()<<endl;
}
public:
void run(){
  int a;
  fill();
  while(true){
    cout<<"메뉴를 눌러주세여.(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
    cin>>a;
      if(tong[0].getSize()<0||tong[1].getSize()<0||tong[2].getSize()<0){
        cout<<"재료 부족\n";
        break;}
    switch (a){
      case 1:
        selectEspresso();
        break;
      case 2:
        selectAmericano();
        break;
      case 3:
        sugerCoffee();
        break;
      case 4:
        show();
        break;
      case 5:
        fill();
        break;
      default:
        cout<<"다시입력하십시오!!!"<<endl;      
        break;
      }
}
}
};
int main(){
  CoffeeVending a;
  a.run();
}