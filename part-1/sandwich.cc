// Hannah Lu
// hannahlu@csu.fullerton.edu
// @hannahl150
// Partners: @danie107

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments ";
    return 1;
  }
  // Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];
  // Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::cout << "Your order: "
            << "\n"
            << "A " << protein << " sandwich on " << bread << " with "
            << condiment << ".";
  // Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.

  return 0;
}