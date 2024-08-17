#include <iostream>

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    
    // Create a new array with an additional size
    const int NEW_SIZE = SIZE + 1;
    int newArr[NEW_SIZE];

    // Copy elements from old array to new array
    for (int i = 0; i < SIZE; i++) {
        newArr[i] = arr[i];
    }

    // Add new element
    newArr[SIZE] = 6; // Adding element 6 at the end

    // Output the new array
    for (int i = 0; i < NEW_SIZE; i++) {
        std::cout << newArr[i] << " ";
    }

    return 0;
}




// #include <iostream>

// int main() {
//     const int SIZE = 5;
//     int arr[SIZE] = {1, 2, 3, 4, 5};

//     // New size of the array
//     const int NEW_SIZE = SIZE + 3;
//     int newArr[NEW_SIZE];

//     // Add an element at the beginning
//     newArr[0] = 0; // Adding 0 at the beginning
//     for (int i = 0; i < SIZE; i++) {
//         newArr[i + 1] = arr[i];
//     }

//     // Add an element in the middle
//     int middleIndex = (NEW_SIZE - 2) / 2;
//     for (int i = NEW_SIZE - 1; i > middleIndex + 1; i--) {
//         newArr[i] = newArr[i - 1];
//     }
//     newArr[middleIndex + 1] = 10; // Adding 10 in the middle

//     // Add an element at the end
//     newArr[NEW_SIZE - 1] = 6; // Adding 6 at the end

//     // Output the new array
//     for (int i = 0; i < NEW_SIZE; i++) {
//         std::cout << newArr[i] << " ";
//     }

//     return 0;
// }
