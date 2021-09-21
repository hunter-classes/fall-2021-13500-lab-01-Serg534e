#include <iostream>

int main()
{
  int a;
  int b;
  std::cout << "Enter the first number: \n";
  std::cin >> a;
  std::cout << "Enter the second number: \n";
  std::cin >> b;
  if(a<b){
    std::cout <<"The smaller of the two is " << a;
  }
  else{
    std::cout <<"The smaller of the two is " << b;
  }
  return 0;
}
