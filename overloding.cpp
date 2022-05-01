#include <iostream>
using namespace std;
class Date{
int year;
int month;
int day;

public:
void ShowDate(){
  cout<<"오늘은"<<year<<"년"<<month<<"월"<<day<<"일 입니다"<<endl;
}
Date(){
  cout<<"기본 생성자 호츨!"<<endl;
  year=1997;
  month=8;
  day=12;
}
Date(int year_,int month_,int day_){
  cout<<"인자 3개인 생성자 호출!"<<endl;
  year=year_;
  month=month_;
  day=day_;
}
};