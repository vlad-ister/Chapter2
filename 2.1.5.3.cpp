#include <iostream>
#include <math.h>
using namespace std;

  int main(void) {
  float m, ft, in;
  int sys;
  
  start:
  cout<<" Enter 0 or 1: ";
  cin >> sys;
  
  if (sys == 0)  {
    cout << " Enter meters : ";
    cin >> m;
    ft = m * 3.28084;
    in = (ft - floor(ft)) * 12;
    cout << floor(ft) << "'" << in << "''";
    goto start;
  }
  
  else {
    cout << " Enter feet : ";
    cin >> ft; 
    cout << "\n Enter inches : ";
    cin >> in;
    m = in / 39.370078 + ft / 3.28084;
    cout << m << "m";
    goto start;
  }
  
  return 0;
}