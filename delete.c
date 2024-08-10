#include <stdio.h>

int main() {
  // structure A
  typedef struct structa_tag {
    char c;
    short int s;
  } structa_t;

  // structure B
  typedef struct structb_tag {
    short int s;
    char c;
    int i;
  } structb_t;

  // structure C
  typedef struct structc_tag {
    char c;
    double d;
    int s;
  } structc_t;

  // structure D
  typedef struct structd_tag {
    double d;
    int s;
    char c;
  } structd_t;

  printf("%zu\n", sizeof(structa_t));
  printf("%zu\n", sizeof(structb_t));
  printf("%zu\n", sizeof(structc_t));
  printf("%zu\n", sizeof(structd_t));

  return 0;
}