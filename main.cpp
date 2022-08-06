#include<iostream>
#include<cstdio>
using namespace std;
void day();
int main(){
 day(1);
 return 0;
}
void day(int day){
  switch (day) {
     case 1:cout<<"sunday";
     case 2:cout<<"monday";
     case 3:cout<<"tuesday";
     case 4:cout<<"wednessday";
     case 5:cout<<"thursday";
     case 6:cout<<"friday";
     default:cout<<"wrong input";

  }
}
