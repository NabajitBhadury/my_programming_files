#include <iostream>
using namespace std;

void set_array(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void swap(int &num1, int &num2) {
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
}

void sort_array(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int binary_search(int arr[], int n, int key) {
  int low_idx = 0;
  int high_idx = n;
  while (low_idx <= high_idx) {
    int mid_idx = (low_idx + high_idx) / 2;
    if (arr[mid_idx] == key) {
      return mid_idx;
    } else if (mid_idx > key) {
      high_idx = mid_idx - 1;
    } else {
      low_idx = mid_idx + 1;
    }
  }
  return -1;
}

int main() {
  int n;
  cout << "Enter the size of the array :: " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the array :: ";
  set_array(arr, n);
  sort_array(arr, n);
  int key;
  cout << "Enter the element you want to search :: " << endl;
  cin >> key;
  int search_result = binary_search(arr, n, key);
  if (search_result == -1) {
    cout << "The search element is not in the array" << endl;
  } else {
    cout << "The search element is in the " << search_result << "th position";
  }
  return 0;
}