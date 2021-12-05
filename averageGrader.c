#include <stdio.h>


int main() {
   int i;
   int j;
   double std_grades[3][4] = {{5.6, 'A', 'B', 7.8},
 			      {9.6, 8.7, 8.9, 7.8},
 			      {7.0, 9.0, 8.6, 8.1}}; 
   
   for(i=0; i < sizeof(std_grades)/sizeof(std_grades[0]); i++){
   	printf("Grades for student %d are: ", i);
	
      int average = 0;

		//loop through each mark, and calc average
		for(j = 0; j < 4; j++){
         printf("%f ", std_grades[i][j]);
         average += std_grades[i][j];
		}
		average = average/4;
		printf("%d\n",average);
   }
   return 0;
}