#include <iostream>
#include <iterator>
#include <sstream>

int wordCount(std::string str)
{
  std::stringstream stream(str);
  return std::distance(std::istream_iterator<std::string>(stream), std::istream_iterator<std::string>());
}
