
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int numStudents = 9; /*declaring constant of number of students in class*/

int Student_one_seat = 1;  /*declaring variable Student_one_seat to be integer with value 1*/
char Student_one_name = 'B'; /*declaring variable Student_one_name to be character with value B*/
float Student_one_grade = 79.5; /*declaring variable Student_one_grade to be decimal with value 79.5*/

/*the rest is the same as the last three lines where I declare variables for seat, name and grade of each student*/
int Student_two_seat = 2;
char Student_two_name = 'M';
float Student_two_grade = 82.1;

int Student_three_seat = 3;
char Student_three_name = 'T';
float Student_three_grade = 74.6;

int Student_four_seat = 4;
char Student_four_name = 'J';
float Student_four_grade = 91.1;

int Student_five_seat = 5;
char Student_five_name ='P';
float Student_five_grade = 78.8;

int Student_six_seat = 6;
char Student_six_name ='E';
float Student_six_grade = 97.2;

int Student_seven_seat = 7;
char Student_seven_name ='H';
float Student_seven_grade = 85.7;

int Student_eight_seat = 8;
char Student_eight_name ='R';
float Student_eight_grade = 65.4;

int Student_nine_seat = 9;
char Student_nine_name ='X';
float Student_nine_grade = 70.3;

int main()
{
printf("Number of students in the class: %d\n\n",numStudents); /*function prints the following...Number of students in the class: and inserts value of constant numStudents which is 9*/

printf("%d",Student_one_seat); /*function prints value of variable Student_one_seat */
printf("%2c",Student_one_name);/*function prints value of variable Student_one_name with a double space before the value */
printf("%5.1f",Student_one_grade);/*function prints value of variable Student_one_grade to one decimal place with 5 space value before the value of the variable */

/*the rest of the print functions do the same job as the first 3 printfs printing values of students seats, names and grades according to their variables
except for line 61 and 74 where \n is used to start a new line in order to print out 3 students per line as in given sample output in assignment */
printf("%5d",Student_two_seat);
printf("%2c",Student_two_name);
printf("%5.1f",Student_two_grade);

printf("%5d",Student_three_seat);
printf("%2c",Student_three_name);
printf("%5.1f\n",Student_three_grade);


printf("%d",Student_four_seat);
printf("%2c",Student_four_name);
printf("%5.1f",Student_four_grade);

printf("%5d",Student_five_seat);
printf("%2c",Student_five_name);
printf("%5.1f",Student_five_grade);

printf("%5d",Student_six_seat);
printf("%2c",Student_six_name);
printf("%5.1f\n",Student_six_grade);


printf("%d",Student_seven_seat);
printf("%2c",Student_seven_name);
printf("%5.1f",Student_seven_grade);

printf("%5d",Student_eight_seat);
printf("%2c",Student_eight_name);
printf("%5.1f",Student_eight_grade);

printf("%5d",Student_nine_seat);
printf("%2c",Student_nine_name);
printf("%5.1f",Student_nine_grade);

}
