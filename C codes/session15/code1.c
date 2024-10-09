

#define limit 10
#undef limit
#define limit 20

#define print_students                                                         \
  printf("mostafa\n");                                                         \
  printf("mohanad\n");                                                         \
  printf("mohanad\n");                                                         \
  printf("mohanad\n");                                                         \
  printf("mohanad\n");                                                         \
  printf("mohanad\n");                                                         \
  printf("mohanad\n");                                                         \
  printf("mohanad\n");

#define add(a, b) a + b
#define mul(a, b) a *b

int main() {
  for (int i = 0; i < limit; i++) {
    printf("%d\n", i);
  }

  printf("%d\n", limit);
  printf("%d\n", add(10 + 20, 2));
  printf("%d\n", mul(10 + 20, 2));

  print_students;
  ;
  ;
  ;
  ;
  ;
  ;

  return 0;
}