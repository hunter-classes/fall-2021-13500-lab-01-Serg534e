#include <iostream>

int main()
{
  bool leap = false;
  int year;
  int month;
  std::cout << "Please enter a year \n";
  std:: cin>>year;
  std::cout << "Please enter a month \n";
  std:: cin>>month;

  if(year%4!=0){
    leap = false;
  }
  else if(year%100!=0){
    leap = true;
  }
  else if(year%400!=0){
    leap = false;
  }
  else{
    leap = true;
  }

  if(month<=7 && month%2==1){
    std::cout<< "31 days";
  }
  else if(month==2 && leap==true){
    std::cout<< "29 days";
  }
  else if(month ==2 && leap==false){
    std::cout<< "28 days";
  }
  else if(month<=7 && month%2==0){
    std::cout<< "30 days";
  }
  else if(month>7&& month%2==0){
    std::cout<< "31 days";
  }
  else{
    std::cout<<"30 days";
  }
}
