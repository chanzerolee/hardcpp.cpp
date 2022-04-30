#include<iostream>
using namespace std;
class Date{
int year_;
int date_;
int month_;
public:
void SetDate(int year,int month,int date){
  year_=year;month_=month;date_=date;
}
void AddDay(int inc){
  if(month_==2){
    date_+=inc;
    if(year_%4==0&&year_!=100){
      if(date_>29){
        date_-=29;
         month_+=1;
        if(month_>12){
          month_-=12;
            year_+=1;
        }}
      else{
        date_+=inc;
      }
      }
    else{
      if(date_>28){
        date_-=28;
        month_+=1;
        if(month_>12){
          month_-=12;
            year_+=1;
        }
      }
      else{
        date_+=inc;
      }
    }
  }
else if(month_%2==0){
  if(date_>30){
        date_-=30;
         month_+=1;
        if(month_>12){
          month_-=12;
            year_+=1;
        }}
      else{
        date_+=inc;
      }
      }
else{
  if(date_>31){
        date_-=31;
         month_+=1;
        if(month_>12){
          month_-=12;
            year_+=1;
        }}
      else{
        date_+=inc;
      }
      }
}

void AddMonth(int inc){
 month_+=inc;
  if(month_>12){
    month_-=12;
    year_++;
  }
};
void AddYear(int inc){
  year_+=inc;
}
void showDate(){
  cout<<"Year:"<<year_<<"Month:"<<month_<<"day:"<<date_<<endl;
};
};
int main(){
  Date date;
  int a,b,c;
  cout<<"년 월 일 순으로 입력해 주세요";
  cin>>a>>b>>c;
  date.SetDate(a,b,c);
  date.AddDay(20);
  date.showDate();
}