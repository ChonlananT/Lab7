#include<iostream>

using namespace std;

int adiff(int s1,int s2)
{
  int r = (s2 - s1)%360;
  if(r < -180){
    r = r+360;
  }
  if(r > 180){
    r = r-360;
  }
  if(r<0){
    r = -r;
  }
  return r;
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
