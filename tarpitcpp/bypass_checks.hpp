#ifndef BYPASS_CHECK_INCLUDED
#define BYPASS_CHECK_INCLUDED

#include <limits.h>

bool bypassedCheckUnsigned(unsigned int first, unsigned int second);

bool bypassedCheckSigned(int first, int second);

bool bypassedCheckTruncated(unsigned int first, unsigned int second);

#endif