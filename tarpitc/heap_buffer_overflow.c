/**
 * Heap-based Buffer Overflow:
 * https://cwe.mitre.org/data/definitions/122.html
 */

#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
  char* buf = (char*) malloc(sizeof(char)*10);

  strcpy(buf, argv[1]); // <- Write outside

  free(buf);
}