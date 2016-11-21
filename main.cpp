#include <iostream>
#include <vector>
#include <climits>

//C++14
auto f() noexcept
{
  return "Hello world\n";
}

int main()
{
  std::cout << f();

  //runtime error: negation of -2147483648 cannot be represented in type 'int'; cast to an unsigned type to negate this value to itself
  int i = INT_MIN;
  int j = -i;
  std::cout << j;

  //runtime error: store to null pointer of type 'int'
  {
    int *ptr = nullptr;
    *ptr = 1;
  }

}
