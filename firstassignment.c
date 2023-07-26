#include <stdio.h>
#include<stdlib.h>
#include<time.h>
  // function for highest base
int HighestBase(int num) {
    int highestBase = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit > highestBase) {
            highestBase = digit;
        }
        num /= 10;
    }
    return highestBase + 1;
}

int main() {
    srand(time(0));

    //10digit random  integer with the last place digit at least 5
    int lowerlimit =(int) 5000000000;
    int upperlimit =(int) 9999999999;
    int randominteger = (rand() % (upperlimit - lowerlimit + 1)) + lowerlimit;

    // Calculation of highest base random integer
    int highestbase = HighestBase(randominteger);

    // Print random integer and also highest base
printf("The Highest Base of random integer %d is %d.\n", randominteger, highestbase);

    return 0;
}