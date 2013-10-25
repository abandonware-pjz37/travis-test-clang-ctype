#include <cctype> // std::isalnum
#include <iostream> // std::cout

int main() {
  if (std::isalnum('x') != 0) {
    std::cout << "OK" << std::endl;
    return EXIT_SUCCESS;
  }
  else {
    std::cout << "FAILED" << std::endl;
    return EXIT_FAILURE;
  }
}
