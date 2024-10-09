#include <stdio.h>

//#pragma pack(1) // packing using #pragma

// structure A
typedef struct structa_tag {
  long double x;
  

} tructa_t; // packing for struct a using attribute

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

int main() {
  struct structa_tag structa_t;

  printf(" structa_t = %zu \n", sizeof(structa_t));
  printf(" structb_t = %zu \n", sizeof(structb_t));
  printf(" structc_t = %zu \n", sizeof(structc_t));
  printf(" structd_t = %zu \n", sizeof(structd_t));

  return 0;
}
