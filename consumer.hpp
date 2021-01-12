#include "lib.hpp"
#include <iostream>

void doStuff() {
  std::cout << "from consumer: " << std::endl;
  incr();
}
