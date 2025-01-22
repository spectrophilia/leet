#include <math.h>
#include <stdlib.h>
#include "common.h"

int* rand_int(int n) {
  int *a = (int *)malloc(n * sizeof(int));
  for (int i=0; i<n; i++) {
    a[i] = rand();
  }
  return a;
}

int* range(int start, int end, int step) {
  int size = (end - start) / step;
  int *a = (int *)malloc(size  * sizeof(int));
  for (int i=0; i < size; i++) {
    a[i] = start + i * step;
  }
  return a;
}

float *rand_float(int n) {
  float *a = (float*)malloc(n * sizeof(float));
  for(int i=0; i<n; i++) {
    a[i] = (float)rand() / RAND_MAX;
  }
  return a;
}

int compare(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

int *rand_ascending(int n) {
  int *arr = rand_int(n);
  qsort(arr, n, sizeof(int), compare);
  return arr;
}

int rand_number(int min, int max) {
  return min + rand() % (max - min + 1);
}
