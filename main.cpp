#include <iostream>
#include <limits>
using u_t = short;
u_t max_u()
{
  using namespace std;
  using u_limit = numeric_limits<u_t>;
  return u_limit::max();
}
bool isPyth(u_t a, u_t b, u_t c)
{
  bool conForOverflowMult = (a > max_u() / a);
  conForOverflowMult = conForOverflowMult || (b > max_u() / b);
  conForOverflowMult = conForOverflowMult || (c > max_u() / c);
  if (conForOverflowMult)
  {
    throw std::range_error("Input value out of range");
  } else {
    bool conForOverflowPlus = (a * a > max_u() - b * b);
    conForOverflowPlus = conForOverflowPlus || (a * a > max_u() - c * c);
    conForOverflowPlus = conForOverflowPlus || (b * b > max_u() - c * c);
    if (conForOverflowPlus)
    {
      throw std::range_error("Input value out of range");
    }
  }

  bool con = (a * a + b * b == c * c);
  con = con || (a * a + c * c == b * b);
  con = con || (b * b + c * c == a * a);

  
  return con;
}

int main()
{
  u_t a = 0, b = 0, c = 0;
  try
  {
    std::cin >> c >> b;
    u_t count = 0;

    while (std::cin >> a)
    {
      count += isPyth(a, b, c) ? 1 : 0;
      c = b;
      b = a;
    }
    if (std::cin.eof())
    {
      std::cout << count;
      std::cout << "\n";
    }
    else if (std::cin.fail())
    {
      std::cerr << "Error\n";
      return 1;
    }
  }
  catch (const std::range_error &e)
  {
    std::cerr << "Exception: " << e.what() << "\n";
    return 2;
  }
}
