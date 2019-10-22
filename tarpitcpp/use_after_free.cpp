#include "use_after_free.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *make_buffer(int number) {
  char *buffer = (char *) malloc(256);
  memset(buffer, 0, 256);

  switch (number) {
    case 5:
      free(buffer);
    case 4:
      printf("Pointer to buffer %p num chars %zu\n", buffer, strlen(buffer));
      break;
    default:
      break;
  }

  return buffer;
}

/*  TESTS 
{
    {
        char * buffer = make_buffer(4);
        REQUIRE( buffer != nullptr );
        free(buffer);
    }
    {
        char * buffer = make_buffer(5);
        REQUIRE( buffer != nullptr );
        free(buffer);
    }
}
*/