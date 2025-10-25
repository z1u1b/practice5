#include <iostream>
bool isPyth(size_t a, size_t b, size_t c)
{
  bool con = (a * a + b * b == c * c);
  con = con || (a * a + c * c == b * b);
  con = con || (b * b + c * c == a * a);
  return con;
  
}
int main() 
{
//   using namespace std;
  using u_t=size_t;
  u_t a=0,b=0,c=0;
  std::cin>>c>>b;
  u_t count=0;

  while (std::cin>>a) {
    count+=isPyth(a,b,c) ? 1 : 0;
    c=b;
    b=a;
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
}