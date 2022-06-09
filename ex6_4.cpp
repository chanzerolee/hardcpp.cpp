#include<iostream>
using namespace std;
class MyVector{
  int *mem;
  int size;
  public :
  MyVector(int n=100,int val=0);
  ~MyVector(){delete [] mem;}
};
MyVector::MyVector(int n,int val){
  mem=new int [n];
  size=n;
  for(int i=0;i<size;i++)mem[i]=val;
  for(int i=0;i<size;i++)
    cout<<mem[i]<<" ";
    cout<<endl;
}
int main(){
  MyVector();
  MyVector(5,10);
}