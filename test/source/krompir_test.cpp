#include <catch2/catch_test_macros.hpp>

#include "lib.hpp"

TEST_CASE("Name is krompir", "[library]")
{
  auto const lib = library {};
  REQUIRE(lib.name == "krompir");
}
