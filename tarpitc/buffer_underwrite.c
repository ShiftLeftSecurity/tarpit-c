/**
 * Buffer Underwrite ('Buffer Underflow')
 * https://cwe.mitre.org/data/definitions/124.html
 */

#include <string.h>

int buffer_underwrite() {
  char src[12];
  strncpy(src, "Buffer Underflow", sizeof(src));

  size_t length = strlen(src);

  int index = (length -1);
  while (src[index] != ':') {
    src[index] = '\0';
    index--;
  }
}