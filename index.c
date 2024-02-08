#include <stdio.h>
//-------Q5--------
int main() {

    int arr[100], size;
    int *ptr, sum = 0;
 
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    ptr = arr;

    for (int i = 0; i < size; i++) {
        sum = sum + *ptr;
        ptr++;
    }
 int arr2[100], size2;
    int *ptr2, sum2 = 0;
printf("Enter the size of the array: ");
    scanf("%d", &size2);

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

   
    ptr2 = arr2;

    for (int i = 0; i < size; i++) {
        sum2 = sum2 + *ptr2;
        ptr++;
    }

int x=sum+sum2;
    printf("The sum of array elements is: %d\n",x);
      

    return 0;

}