#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define number_of_times 5000
#define result_size 13
int dice_eyes[] = {1, 2, 3, 4, 5, 6};
int result[result_size] = {0};

// Vælger et random tal mellem 1-6
int select_random_eyes(int possibilities[], int size) {
  return possibilities[rand() % size];
}

// Vælger 2 tal 5000 gange og plusser dem sammen, gemmes i result array
void throw_5000_times(int possibilities[], int result[], int size) {
  for (int i = 0; i < number_of_times; ++i) {
    int first_number = select_random_eyes(possibilities, size);
    int secound_number = select_random_eyes(possibilities, size);
    int totalNumber = first_number + secound_number;
    result[totalNumber]++;
  }
}

// Regner resultatet ud i procent
float resultat(float sum, int number) {
  float procent = (sum / number) * 100;
  return procent;
}

// printer antallet og procenten for hver result
int main() {
  srand(time(NULL));
  int size = _countof(dice_eyes);
  throw_5000_times(dice_eyes, result, size);
  for (int i = 2; i < result_size; ++i) {
    printf("Sum %2d: %d gange, ", i, result[i]);
    printf("Chancen: %.2f %%\n", resultat(result[i], number_of_times));
  }
}
