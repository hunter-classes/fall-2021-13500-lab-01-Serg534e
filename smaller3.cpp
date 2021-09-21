#include <iostream>

int main()
{
  int x;
  int y;
  int z;
  std::cout <<"Enter the first number: \n";
  std:: cin>> x;
  std::cout <<"Enter the second number: \n";
  std::cin>>y;
  std::cout<<"Enter the third number: \n";
  std::cin>>z;

  if(x<y&&x<z){
    std::cout<<"The smaller of the three is " << x;
  }
  else if(y<x&&y<z){
    std::cout<<"The smaller of the three is " << y;
  }
  else{
    std::cout<<"The smaller of the three is " << z;
  }
}
