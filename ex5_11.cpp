#include<iostream>
#include<cstring>
using namespace std;
class Book{
  char *title;
  int price;
public : 
  Book(Book& book){
    this->title=book.title;
    this->price=book.price;
  }
  Book(const char* title,int price){
    int l=strlen(title);
    this->title=new char[l];
    strcpy(this->title,title);
    this->price=price; 
  }
  ~Book(){if(title) delete [] title;}
void set(char* title,int price){
  if(this->title)delete [] title;
  int l=strlen(title);
  this->title=new char[l];
  strcpy(this->title,title);
  this->price=price; 
}
void show(){cout<<title<<' '<<price<<"원"<<endl;}
};
int main(){
  Book cpp("명품C++",10000);
  Book java=cpp;
  java.set("명품자바",12000);
  cpp.show();
  java.show();
}