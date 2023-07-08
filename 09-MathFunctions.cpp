#include <iostream>
#include <cmath>

int main()
{

  double a = 3;
  double b = 4;
  double c;
  double d= 3.99;
  double PI = 3.14159;

  c = std::max(a, b);
  std::cout << "max is " << c << '\n';

  c = std::min(a, b);
  std::cout << "min is" << c << '\n';

  c = pow(2, 4);
  std::cout << "pow is" << c << '\n';

  c = sqrt(16);
  std::cout << "Square is" << c << '\n';

  c= abs(-100);
  std::cout << "Absolute value is " << c << '\n';

  c = round(PI);
  std::cout << "Rounded value of PI is " << c << '\n';
  c = round(d);
  std::cout << "Rounded value of d is " << c << '\n';

  c = ceil(PI);
  std::cout << "Ceiling value of PI is " << c << '\n';
  c = ceil(d);
  std::cout << "Ceiling value of d is " << c << '\n';


  c= floor(PI);
  std::cout << "Floor value of PI is " << c << '\n';

  c= floor(d);
  std::cout << "Floor value of d is " << c << '\n';

  return 0;
}