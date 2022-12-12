#include <ctime>
#include <iostream>
using namespace std;

void randomPopulate(int x[], int y) {
  for (int i = 0; i < y; i++) {
    x[i] = rand() % 100 + 1;
  }
}

void display(int x[], int y) {
  for (int i = 0; i < y; i++) {
    cout << x[i] << ", ";
  }
}

void arraySort(int x[], int y) {
  // ToDo
  int temp;
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < y - i -1; j++){
    if (x[j] > x[j+1]){
        temp = x[j];
        x[j] = x[j+1];
        x[j+1] = temp;
        }
    }
  }
}

void arrayMerge(int x[], int y[], int z[], int n1, int n2, int n3) {
  // ToDo
  int a = 0, b = 0, c = 0;


  for (int i = 0; i < n3 ; i++){
        if (a < n1 && b < n2){
                if (y[b] < x[a]){
                z[c] = y[b];
                if (b < n2) b++;
            }
            else {
                z[c] = x[a];
                if (a < n1) a++;
            }
            }
            else {
                if (a < n1){
                   z[c] = x[a];
                   a++;
                }
                else if ( b < n2){
                    z[c] = y[b];
                    b++;
                }
            }
        c++;
  }
}

int main() {
  int num1, num2, num3;
  cout << "How many elements are there in the first Array?" << endl;
  cin >> num1;
  cout << "How many elements are there in the second Array?" << endl;
  cin >> num2;

  srand(7);

  int A[num1];
  randomPopulate(A, num1);
  cout << "Elements in 'A': ";
  display(A, num1);
  int B[num2];

  srand(8);
  randomPopulate(B, num2);
  cout << endl << "Elements in 'B': ";
  display(B, num2);

  cout << endl << "Sorted Elements in 'A': ";
  arraySort(A, num1);
  display(A, num1);

  cout << endl << "Sorted Elements in 'B': ";
  arraySort(B, num2);
  display(B, num2);

  num3 = num1 + num2;
  int C[num3];

  cout << endl << "Elements in 'C': ";
  arrayMerge(A, B, C, num1, num2, num3);
  display(C, num3);

  return 0;
}