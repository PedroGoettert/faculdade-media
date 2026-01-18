#include <stdio.h>
#include <string.h>

int main()
{

  float note_one, note_two, note_three;
  float average;

  printf("Insira a nota 1: ");
  scanf("%f", &note_one);

  printf("Insira a nota 2: ");
  scanf("%f", &note_two);

  printf("Insira a nota 3: ");
  scanf("%f", &note_three);

  average = (note_one + note_two + note_three) / 3;

  printf("A média das notas é: %.2f\n", average);

  return 0;
}