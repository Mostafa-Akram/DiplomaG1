
#include "code2.h" //User-Defined header file

int main() {

  students_t mostafa;

  scanf("%s", mostafa.name);
  scanf("%d", &mostafa.id);

  for (int i = 0; i < limit; i++) {
    printf("%d\n", i);
  }

  printf("%d\n", limit);
  printf("%d\n", x);
  printf("%d\n", add(10 + 20, 2));
  printf("%d\n", mul(10 + 20, 2));
  printf("%s\n", mostafa.name);
  printf("%d\n", mostafa.id);
  printf("%d\n", mul(10 + 20, 2));

  return 0;
}
