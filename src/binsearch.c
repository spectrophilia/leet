#include <stdio.h>
#include "common.h"

int binsearch(int *arr, int n, int target) {
  int l = 0, r = n - 1;
  
  while ( l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == target) {
      return mid;
    }

    if (arr[mid] < target) {
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  return -1;

}

int main() {
  int *arr = rand_ascending(100);
  int orig_index = rand_number(0, 99);
  printf("index to be searched %d, number to be searched %d\n\n", orig_index, arr[orig_index]);

  for (int i=0; i<10; i++) 
    printf("%d ", arr[i]);
  printf("\n");

  int index = binsearch(arr, 10, arr[orig_index]);
  if (index < 0)
    printf("search element not found in the array\n");
  else
    printf("search element found in index %d\n", index);
  
  free(arr);
  return 0;
}
