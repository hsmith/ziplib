#pragma once
#include <iostream>
#include <vector>

namespace utils { namespace stream {

static void copy(std::istream& from, std::ostream& to, size_t bufferSize = 1024 * 1024)
{
  to << from.rdbuf();
}

} }
