#include <cs50.h>
#include <stdio.h>
    int TOTALPOINTSEARNED;
    int TOTALPOINTSPOSSIBLE;
int main(void){
    int assignments = get_int("How many different assignments:\n"); // asks for the amount assignments in total
    int pointsEarned[assignments]; // makes an array for points earned
    int pointsPossible[assignments]; // makes an array for points possible
    for (int x = 0; x < assignments;x++){ //will loop as long as the integer that was entered is less than the total, and will increase each time by one
        pointsEarned[x] = get_int ("Points earned on assignment:\n"); // asks for the amount of points earned and puts it into an array
        pointsPossible[x] = get_int ("Points possible earned on assignment:\n"); // asks for the amount of points possible and puts it into an array
    TOTALPOINTSEARNED += pointsEarned[x];
    TOTALPOINTSPOSSIBLE += pointsPossible[x];}
    float divide= ((float)TOTALPOINTSEARNED)/(float)(TOTALPOINTSPOSSIBLE)*100; // divides the points earned from points possible
    printf ("Final grade: %f\n", divide); // prints the average grade or answer from division problem
    }
