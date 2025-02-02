#include <stdio.h>

signed int *sort(int array[], int size);

void show_array(int array[], int size);

int main(void) {
    signed int init_array[] = {3, 2, 1};
    printf("Original array: ");
    show_array(init_array, 3);
    signed int *sorted_array = sort(init_array, 3);
    printf("Sorted array: ");
    show_array(sorted_array, 3);
    signed int init_array_1[] = {1024, -192, 0, 576, 12, 12, -11};
    printf("Original array: ");
    show_array(init_array_1, 7);
    signed int *sorted_array_1 = sort(init_array_1, 7);
    printf("Sorted array: ");
    show_array(sorted_array_1, 7);
    return 0;
}

signed int *sort(int array[], int size) {
    printf("Start sorting... ");
    signed int array_changed = 1;
    signed int temp_int;
    int iterations = 0;
    while (array_changed) {
        iterations++;
        array_changed = 0;
        for (int i = 0; i < size - 1; i++) {
            signed int first_arg = array[i];
            signed int second_arg = array[i + 1];
            if (first_arg > second_arg) {
                array_changed = 1;
                temp_int = first_arg;
                array[i] = second_arg;
                array[i + 1] = temp_int;
            }
        }
    }
    printf("Sorting finished in %d iterations.\n", iterations);
    return array;
}

void show_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
