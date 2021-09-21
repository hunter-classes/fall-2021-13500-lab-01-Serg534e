#include <iostream>
int main()
{
  int year;
  std::cout <<"Please enter a year \n";
  std::cin>> year;
  if(year%4!=0){
    std::cout<<"Common year";
  }
  else if(year%100!=0){
    std::cout<<"Leap year";
  }
  else if(year%400!=0){
    std::cout<<"Common year";
  }
  else{
    std::cout<<"Leap year";
  }

}
