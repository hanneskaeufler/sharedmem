#include "consumer.hpp"
#include "lib.hpp"
#include <iostream>

int main() {
  std::cout << "From main: " << std::endl;
  std::cout << incr() << std::endl << incr() << std::endl;
  doStuff();

  return 0;
}
