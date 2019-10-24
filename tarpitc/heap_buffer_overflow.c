/**
 * Heap-based Buffer Overflow:
 * https://cwe.mitre.org/data/definitions/122.html
 */

#include <stdlib.h>
#include <string.h>

int heap_buffer_overflow(char *str) {
  char* buf = (char*) malloc(sizeof(char)*10);

  strcpy(buf, str); // <- Write outside

  free(buf);
}