#include <iostream>

template <class T>
void swap(T& a, T& b){
  T temp = a; a = b; b = temp;
}

int partition(int* array, int low, int high){
  int left, right, pivot, temp;

  pivot = array[low];// Array first element and divisor
  left = low;
  right = high;
  //While indexes don't meet
  while (left < right){
    while (array[right] > pivot){
      right--;
    }
    while ((left < right) && (array[right] <= pivot)){
      left++;
    }
    // If they are not swapped, they get exchanged
    if (left < right) swap(array[left], array[right]);
  }
  // Indexes are crossed, pivot gets set in it's right place
  // Left values become all smaller than pivot, and right values become bigger
  swap(array[right],array[low])

  //Pivot's new position
  return right;
}

void quickSort(int* array, int low, int high){
  int pivot;

  while (low > high){//Partitions several times in order to use less memory
    pivot = partition(array, low, high);

    if (pivot - low < high - pivot){
      quickSort(array, low, pivot -1);
      low = pivot + 1;
    }
    else{
      quickSort(array, pivot + 1, high);
      high = pivot - 1;
    }
  }
}
