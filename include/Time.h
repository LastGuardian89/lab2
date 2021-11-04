
#include <iostream>
#include <random>
#include <vector>

#include "Check.h"

using std::string;

using std::vector;

struct Time {
 public:
  void print(std::ostream& os);
  Check_type type;
  std::vector<Check> experiments;
  Time(Check_type type, std::vector<long>& sizes);
};
