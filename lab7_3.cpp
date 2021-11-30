#include<iostream>

using namespace std;

int adiff(int a, int b){
  int result;
  a %= 360;
  b %= 360;

  if(a < 0){
    a = 360 + a;
  }
  if(b < 0){
    b = 360 + b;
  }

  result = a-b;
  if(result < 0){
    result = -result;
  }
  
  if(result > 180){
    result = 360 - result;
  }

  return result;
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
