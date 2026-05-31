// //Write a program to arrange an array having 10 integers numbers in ascending order using function.
// #include<stdio.h>
// void sortArray(int arr[], int size) // function to sort the array in ascending order
// {
//     int temp; // temporary variable to store the value during swapping
//     for(int i = 0; i < size - 1; i++) // loop through the array
//     {
//         for(int j = 0; j < size - i - 1; j++) // loop through the array until the last unsorted element
//         {
//             if(arr[j] > arr[j + 1]) // compare adjacent elements and swap if they are in the wrong order
//             {
//                 temp = arr[j]; // store the current element in temp
//                 arr[j] = arr[j + 1]; // move the next element to the current position
//                 arr[j + 1] = temp; // move the temp value to the next position
//             }
//         }
//     }
// }
// #include<stdio.h>

// void sortArray(int arr[], int size)
// {
//     int temp;
//     for(int i = 0; i < size - 1; i++)
//     {
//         for(int j = 0; j < size - i - 1; j++)
//         {
//             if(arr[j] > arr[j + 1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[10];

//     printf("Enter 10 integers:\n");
//     for(int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     sortArray(arr, 10); // function call

//     printf("Sorted array in ascending order:\n");
//     for(int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
#include<stdio.h>

// Function to sort array in ascending order
void sortArray(int arr[], int size)
{
    int temp;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                // Swapping
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10];

    // Input
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call
    sortArray(arr, 10);

    // Output
    printf("Array in ascending order:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}