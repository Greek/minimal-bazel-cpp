#include <iostream>
#include <string>
#include <vector>

#include "absl/strings/str_join.h"

int main() {
  std::vector<std::string> stringVector = {"foo", "bar", "baz"};
  std::string givenString = absl::StrJoin(stringVector, "-");

  std::cout << "Joined string: " << givenString << "\n";

  return 0;
}