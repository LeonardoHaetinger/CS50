#include <cs50.h>
#include <stdio.h>

int main(void)
{  float grade1 = 0;
   float grade2 = 0;
   string subject = get_string("Which subject are you wanting to calculate?\n");
   int tests = get_int("How many %s tests have you done?\n", subject);
   if (tests == 1)
   {
        grade1 = get_float("Which was your grade in the first text?\n");
   }
   else if (tests == 2)
   {
        grade1 = get_float("Which was your grade in the first text?\n");
        grade2 = get_float("Which was your grade in the second text?\n");
   }
   else
   {
        printf("I'm sorry about what happened, we cannot calculate the average or the GPA of %i tests.\n", tests);
   }
   
   float a = (grade1 + grade2)/tests;
   float g = 0;

   printf("Your Average:%.2f;\n", a);
   printf("Your GPA:%f;\n",g);


}


