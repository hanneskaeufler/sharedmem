#include <iostream>

__attribute__((visibility("default"))) int incr() {
  static int id = 0;
  std::cout << "id: " << id << std::endl;
  return id++;
}
