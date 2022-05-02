#include<iostream>
#include <string.h>
class Marine{
int hp;
int coord_x,coord_y;
int damage;
bool is_dead;
char *name;

public:
Marine(){
  hp=50;
  coord_x=coord_y=0;
  damage=5;
  is_dead=false;
}
Marine(int x,int y){
 coord_x=x;
  coord_y=y;
  hp=50;
  damage=5;
  is_dead=false;
}
Marine(int x,int y, const char* name_){
  name=new char[strlen(name_)];
  strcpy(name,name_);
  coord_x=x;
  coord_y=y;
  hp=50;
  damage=5;
  is_dead=false;
  
}
~Marine(){
    if(name!=NULL) 
  delete [] name;
}
int attack(){return damage;}
void be_attacked(int damage_earn){
  hp-=damage_earn;
  if(hp<=0){
    is_dead=true;
  }
}
void move(int x,int y){
  coord_x=x;
  coord_y=y;
}

void show_status(){
  std::cout<<"***Marine***"<<std::endl;
  std::cout<<"Location:("<<coord_x<<","<<coord_y<<")"<<std::endl;
  std::cout<<"hp:"<<hp<<std::endl;
}
};
int main(){
  Marine *marine[100];
  marine[0]=new Marine(2,3,"marine2");
  marine[1]=new Marine(3,5,"marine1");

  marine[0]->show_status();
  marine[1]->show_status();
  std::cout<<std::endl<<"마린 1이 마린 2를 공격!"<<std::endl;
  marine[0]->be_attacked(marine[1]->attack());
  marine[0]->show_status();
  marine[1]->show_status();
  }