#include <cs50.h>
#include <stdio.h>

int main(void)
{  
   float grade1 = 0;
   float grade2 = 0;
   float grade3 = 0;
   float grade4 = 0;
   float grade5 = 0;
   float grade6 = 0;

   string subject = get_string("Which subject are you wanting to calculate?\n");
   int tests = get_int("How many %s tests have you done?\n", subject);
   if (tests == 1)
   {
        grade1 = get_float("Which was your grade in the first test?\n");
   }
   else if (tests == 2)
   {
        grade1 = get_float("Which was your grade in the first test?\n");
        grade2 = get_float("Which was your grade in the second test?\n");
   }
   else if (tests == 3)
   {
        grade1 = get_float("Which was your grade in the first test?\n");
        grade2 = get_float("Which was your grade in the second test?\n");
        grade3 = get_float("Which was your grade in the third test?\n");
   }
   else if (tests == 4)
   {
        grade1 = get_float("Which was your grade in the first test?\n");
        grade2 = get_float("Which was your grade in the second test?\n");
        grade3 = get_float("Which was your grade in the third test?\n");
        grade4 = get_float("Which was your grade in the forth test?\n");
   }
   else if (tests == 5)
   {
        grade1 = get_float("Which was your grade in the first test?\n");
        grade2 = get_float("Which was your grade in the second test?\n");
        grade3 = get_float("Which was your grade in the third test?\n");
        grade4 = get_float("Which was your grade in the forth test?\n");
        grade5 = get_float("Which was your grade in the fith test?\n");
   }
   else if (tests == 6)
   {
        grade1 = get_float("Which was your grade in the first test?\n");
        grade2 = get_float("Which was your grade in the second test?\n");
        grade3 = get_float("Which was your grade in the third test?\n");
        grade4 = get_float("Which was your grade in the forth test?\n");
        grade5 = get_float("Which was your grade in the fith test?\n");
        grade6 = get_float("Which was your grade in the sixth test?\n");
   }
   else
   {
        printf("I'm sorry about what happened, we cannot calculate the average or the GPA of %i tests.\n", tests);
   }
   
   float a = (grade1 + grade2 + grade3 + grade4 + grade5 + grade6)/tests;
   float g = 0;

   if (a >= 9){
        g = 4;
   }
   else if (a >= 7 && a < 9){
        g = 3;
   }
   else if (a >= 5 && a < 7){
        g = 2;
   }
   else if (a >= 3 && a < 5){
        g = 1;
   }
   else{
        g = 0;
   }
   
   printf("Your Average:%.2f;\n", a);
   printf("Your GPA:%.2f;\n",g);

}


