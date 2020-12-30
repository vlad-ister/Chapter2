#include <iostream>
using namespace std;
  int main(void) {
  int Year, Month, Day;
  int day_of_week;
  cout<<"Enter a year: ";
  cin>>Year;
  cout<<"Enter a month: ";
  cin>>Month;
  cout<<"Enter a day: ";
  cin>>Day;
  if (Year>=1900 && Year <=2100 && Month <= 12 && Day>=1) {
    Month-=2;
    if (Month<=0){
      Month+=12;
      Year-=1;
    }
    Month = Month*83/32;
    Month += Day;
    Month += Year;
    Month += Year/4;
    Month -= Year/100;
    Month += Year/400;
    day_of_week = Month%7;
    cout<<day_of_week<<"\n";
  
  if (day_of_week==0)
  cout<<"Sunday";
  if (day_of_week==1)
  cout<<"Monday";
  if (day_of_week==2)
  cout<<"Tuesday";
  if (day_of_week==3)
  cout<<"Wednesday";
  if (day_of_week==4)
  cout<<"Thursday";
  if (day_of_week==5)
  cout<<"Friday";
  if (day_of_week==6)
  cout<<"Saturday";
  }
  else {
    cout<<" Ви ввели невірну дату!";
  }
  return 0;
  }