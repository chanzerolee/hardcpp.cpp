#include<iostream>
class Marine{
static int marine_num;//static 변수 역시 클래스 내부에서 위와 같이 초기화 하는 것은 불가능 합니다. 위와 같은 꼴이 되는유일한 경우는 const static 변수일 때만 가능
int hp;
int coord_x,coord_y;
const int damage;
bool is_dead;

public:
Marine():hp(50),coord_x(0),coord_y(0),damage(5),is_dead(false){marine_num++;}
Marine(int x,int y): hp(50),coord_x(x),coord_y(y),damage(5),is_dead(false){marine_num++;}
int attack(){return damage;}
Marine(int x,int y,int damage): hp(50),coord_x(x),coord_y(y),damage(damage),is_dead(false){marine_num++;}
void be_attacked(int damage_earn){
  hp-=damage_earn;
  if(hp<=0)
    is_dead=true;
}
void move(int x,int y){
  coord_x=x;
  coord_y=y;
}
~Marine(){marine_num--;}

void show_status(){
  std::cout<<"*** Marine ***"<<std::endl;
  std::cout<<" Location : ("<<coord_x<<","<<coord_y<<")"<<std::endl;
  std::cout<<"HP:"<<hp<<std::endl;
  std::cout<<"현재 총 마린 수:"<<marine_num<<std::endl;
}
};
int Marine::marine_num=0;
void create_marine(){
  Marine marine3(10,20,4);
  marine3.show_status();
}
int main(){
  Marine marine1(2,3,8);
  marine1.show_status();
  Marine marine2(3,5);
  marine2.show_status();
  create_marine();
  std::cout<<std::endl<<"마린 1이 마린 2를 공격!"<<std::endl;
  marine2.be_attacked(marine1.attack());

  marine1.show_status();
  marine2.show_status();
  }