# 0 "code1.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "code1.c"



int main() {
  char x[] = {'1', '2', '3', 'a', '\0', 0, 1, 2, 3};
  char y = 0;

  const float pi = 3.14;

  printf("size of pi = %zu \n", sizeof(pi));
  printf("size of character = %zu \n", sizeof('a'));

  return 0;
}
