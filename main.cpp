#include<iostream>
#include<cstdio>
using namespace std;
void day(int y);
int main(){
 int x=4;
 day(x);
 return 0;
}
void day(int day){
  switch (day) {
     case 1:cout<<"sunday"<<endl;
     case 2:cout<<"monday"<<endl;
     case 3:cout<<"tuesday"<<endl;
     case 4:cout<<"wednessday"<<endl;
     case 5:cout<<"thursday"<<endl;
     case 6:cout<<"friday"<<endl;
     default:cout<<"wrong input"<<endl;

}
}
