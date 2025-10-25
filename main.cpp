#include <iostream>
int main() 
{
//   using namespace std;
  using u_t=size_t;
  u_t a=0;
  u_t sum=0;

  while (std::cin>>a) {
    sum+=a*a;
  }
  if (std::cin.eof()) {
      std::cout << sum;
      std::cout << "\n";
  }
  else if (std::cin.fail())
  {
      std::cerr<<"Error\n";
      return 1;
  }
}