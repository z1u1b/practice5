#include <iostream>
int main() 
{
//   using namespace std;
  using u_t=size_t;
  u_t a=0;
  u_t count=0;

  while (std::cin>>a) {
    count++;
  }
  if (std::cin.eof()) {
      std::cout << count;
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