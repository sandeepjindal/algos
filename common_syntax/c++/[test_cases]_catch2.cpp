#include <iostream>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std;

// To execute C++, please define "int main()"

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? 1 : Factorial(number - 1) * number;
}

int solution() {
  auto words = { "Hello, ", "World!", "\n" };
  for (const string& word : words) {
    cout << word;
  }
  return 0;
}


TEST_CASE( "Factorials are computed", "[factorial]" ) {
      REQUIRE( Factorial(0) == 1 ); // this will fail
      REQUIRE( Factorial(1) == 1 );
      REQUIRE( Factorial(2) == 2 );
      REQUIRE( Factorial(3) == 6 );
      REQUIRE( Factorial(10) == 3628800 );
  }


  
