#include "signed_overflow.hpp"

bool additionWillOverflow(int first, int second) {
  return first + second < 0;
}

/*
"CWE-190: Signed Integer Addition Overflow"
{
    REQUIRE( additionWillOverflow(INT_MAX, 256) );

    REQUIRE( !additionWillOverflow(INT_MAX, 0) );

    REQUIRE( !additionWillOverflow(0, INT_MAX) );

    REQUIRE( !additionWillOverflow(256, 256) );

    REQUIRE( additionWillOverflow(INT_MAX-1, INT_MAX-1) );

    REQUIRE( additionWillOverflow(-42, INT_MIN) );

    REQUIRE( additionWillOverflow(INT_MIN, -42) );

    REQUIRE( !additionWillOverflow(INT_MAX-256, 256) );
}
*/