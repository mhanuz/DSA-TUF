#include <iostream>
using namespace std;

int main()
{
  int number = 5;
  switch (number) {
    case 1:
    std::cout << "Good Morning" << '\n';
    break;

    case 2:
    std::cout << "Good Noon" << '\n';
    break;

    case 3:
    std::cout << "Good AfterNoon" << '\n';
    break;

    default:
    std::cout << "Good Night" << '\n';
  }
  return 0;
}
