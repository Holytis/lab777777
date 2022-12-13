#include<iostream>
#include<cmath>

using namespace std;

int adiff(int a , int b )
{

    int x , y ;
    int c = abs(a-b);
    x = c%360 ;
    if (x <= 180)
    {
     y = x ;
    }
    else
    {
     y = 360 - x ;
    }
    
    return y ;

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
