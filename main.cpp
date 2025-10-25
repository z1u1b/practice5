#include <iostream>
int main() 
{
//   using namespace std;
  using u_t=size_t;
  u_t a=0;
  std::cin>>a;
  if (std::cin.eof()) {
      std::cout << 0;
      std::cout << "\n";
  }
  else if (std::cin.fail())
  {
      std::cerr<<"Error\n";
      return 1;
  }
//   size_t result = 0;
//   cout << result << endl;
//   return 0;
}