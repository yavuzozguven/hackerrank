#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int marks_summation(int* marks, int number_of_students, char gender) {
  if(number_of_students == 1){
      if(gender == 'g')
      return 0;
      else
      return *marks;
  }
  else{
      int sum = 0;
      if(gender == 'g'){
          marks++;
            for (int i=1;i<number_of_students;i+=2) {
                sum += *marks;
                marks+=2;
          }
      }
      else{
          for (int i=0;i<number_of_students;i+=2) {
              sum+=*marks;
              marks+=2;
          }
      }
      return sum;
  }
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}