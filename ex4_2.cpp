#include<iostream>
using namespace std;
int main(){
  int a[5];
  int *p=a;
  double sum=0;
  p=new int [5];
  cout<<"정수 5개 입력:";
  for(int i=0;i<5;i++){
    cin>>p[i];
    sum+=p[i];
    }
  cout<<"평균은:"<<sum/5<<endl;
  delete [] p;
}