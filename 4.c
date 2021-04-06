#include <stdio.h>

    void incrementArray(int[]);

    void main()

    {

        int j;

        int array[4] = {10, 20, 30, 40};

        incrementArray(array);

        for (j = 0; j < 4; j++)

           printf("%d\t", array[j]);   // Prints 2, 3, 4, 5

    }

    void incrementArray(int arr[])

    {

        int j;

        for (j = 0; j < 4; j++)
         arr[j]++;     // this alters values in array in main()

    }
