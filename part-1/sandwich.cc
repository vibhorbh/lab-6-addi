// David Diaz
// ddiazjr929@csu.fullerton.edu
// @Dav-929
// Partners: @vibhorbh

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments"
              << "\n";
    return 1;
  }
  std::string protein{arguments[1]};
  std::string bread{arguments[2]};
  std::string condiment{arguments[3]};

  std::cout << "your order: A " << protein << " sandwich on " << bread
            << " with " << condiment;

  return 0;
}
