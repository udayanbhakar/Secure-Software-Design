#include <stdio.h>
#include <string.h>

// So first I will begin with declaring the array that contains all the values
int main(void)
{
    int numbers[] = {110, 1, 105, 110, 1, 106, 2, 97, 123, 100, 3, 117, 53, 5, 116, 95, 48, 102, 8, 102, 95, 121, 48, 117, 114, 95, 67, 125};

    // Now I want to find out the length of this array
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // After this, I want to declare an empty array of the same size as the length of the above array of type char
    // as this array of chars will store the flag value converted from ASCII values to char

    char flag[length];

    // Now I want to store all the elements from numbers that are > 10 into arr.

    // I also want to create a variable that will keep track of the indexes of arr.
    //  I will set it to 0 so that it can start storing values in arr from the 0 index.
    int arrIndex = 0;

    // So, I use a loop and an if statement to loop through each index of numbers

    for (int i = 0; i < length; i++)
    {
        if (numbers[i] > 10)
        {
            flag[arrIndex] = (char)numbers[i];
            arrIndex++;
        }
    }

    flag[arrIndex] = '\0';

    printf("%s \n", flag);

    return 0;
}