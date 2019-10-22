#include "bypass_checks.hpp"

bool bypassedCheckUnsigned(unsigned int first, unsigned int second) {
  unsigned int max_sum = 256;

  if ((first + second) <= max_sum)
    return true;

  return false;
}

bool bypassedCheckSigned(int first, int second) {
  int max_sum = 256;

  if ((first + second) <= max_sum)
    return true;

  return false;
}

bool bypassedCheckTruncated(unsigned int first, unsigned int second) {
  int max_sum = 256;
  int sum = (first + second);

  if (sum <= max_sum)
    return true;

  return false;
}

/*
 "CWE-190: Integer Overflow or Wraparound"
{
    // Unsigned : Small enough
    REQUIRE( bypassedCheckUnsigned(42, 42) );
    // Unsigned : Too big
    REQUIRE( !bypassedCheckUnsigned(256, 256) );
    
    // --------------------------------------------
    // Unsigned : Bypass check
    //REQUIRE( bypassedCheckUnsigned(<FIRST>, <SECOND>) );
    // --------------------------------------------
    
    // Signed : Small enough
    REQUIRE( bypassedCheckSigned(42, 42) );
    // Signed : Too big
    REQUIRE( !bypassedCheckSigned(256, 256) );
    
    // --------------------------------------------
    // Signed : Bypass check
    //REQUIRE( bypassedCheckSigned(<FIRST>, <SECOND>) );
    // --------------------------------------------
}

CWE-197: Numeric Truncation Error"
{
    // Truncated : Small enough
    REQUIRE( bypassedCheckTruncated(42, 42) );
    // Truncated : Too big
    REQUIRE( !bypassedCheckTruncated(256, 256) );

    // --------------------------------------------
    // Truncated : Bypass check
    //REQUIRE( bypassedCheckTruncated(<FIRST>, <SECOND>) );
    // --------------------------------------------
}
*/