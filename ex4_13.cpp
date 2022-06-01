//isalpha.... 를 이용하면.. 훨씬 간단해진다..
#include <iostream>
#include<string>
using namespace std;
class Histogram{
int *p;
string s;
public:
Histogram(string s){
  s+="\n";
  this->s=s;
}
string put(string a){
  s+=a;
  return a;
}
char putc(char c){
  s+=c;
  return c;
}
void print(){
  cout<<s;
  p=new int [26]; 
  for(int i=0;i<s.size();i++){
    if(s[i]=='a'||s[i]=='A')
      p[0]+=1;
    else if(s[i]=='b'||s[i]=='B')
      p[1]+=1;
    else if(s[i]=='c'||s[i]=='C')
      p[2]+=1;
    else if(s[i]=='d'||s[i]=='D')
      p[3]+=1;
    else if(s[i]=='e'||s[i]=='E')
      p[4]+=1;
    else if(s[i]=='f'||s[i]=='F')
      p[5]+=1;
    else if(s[i]=='g'||s[i]=='G')
      p[6]+=1;
    else if(s[i]=='h'||s[i]=='H')
      p[7]+=1;
    else if(s[i]=='i'||s[i]=='I')
      p[8]+=1;
    else if(s[i]=='j'||s[i]=='J')
      p[9]+=1;
    else if(s[i]=='k'||s[i]=='K')
      p[10]+=1;
    else if(s[i]=='l'||s[i]=='L')
      p[11]+=1;
    else if(s[i]=='m'||s[i]=='M')
      p[12]+=1;
    else if(s[i]=='n'||s[i]=='N')
      p[13]+=1;
    else if(s[i]=='o'||s[i]=='O')
      p[14]+=1;
    else if(s[i]=='p'||s[i]=='P')
      p[15]+=1;
    else if(s[i]=='q'||s[i]=='Q')
      p[16]+=1;
    else if(s[i]=='r'||s[i]=='R')
      p[17]+=1;
    else if(s[i]=='s'||s[i]=='S')
      p[18]+=1;
    else if(s[i]=='t'||s[i]=='T')
      p[19]+=1;
    else if(s[i]=='u'||s[i]=='U')
      p[20]+=1;
    else if(s[i]=='v'||s[i]=='V')
      p[21]+=1;
    else if(s[i]=='w'||s[i]=='W')
      p[22]+=1;
    else if(s[i]=='x'||s[i]=='X')
      p[23]+=1;
    else if(s[i]=='y'||s[i]=='Y')
      p[24]+=1;
    else if(s[i]=='z'||s[i]=='Z')
      p[25]+=1;
  }
  int mount=0;
  for(int i=0;i<26;i++){
    mount+=p[i];
  }
  cout<<endl<<endl<<"총 알파벳 수"<<mount<<endl<<endl;
  for(int i=0;i<26;i++){
    cout<<'a'<<" ("<<p[i]<<")   :";
    for(int j=0;j<p[i];j++)
      cout<<"*";
    cout<<endl;
  }
  delete [] p;
}
};
int main(){
  Histogram elvisHisto("Wise men say, only fools rush in But I can't help,");
  elvisHisto.put("falling in love with you");
  elvisHisto.putc('-');
  elvisHisto.put("Elvis Presley");
  elvisHisto.print();
}