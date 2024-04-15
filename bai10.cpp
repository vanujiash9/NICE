//Bài 10. Cho dãy số dương A bất kỳ. Hãy tìm 3 phần tử trong A sao cho tổng của chúng là lớn nhất mà không sắp xếp dãy A.
#include <iostream>

using namespace std;

int* findMaxSum(int* A, int size) {
    int* maxSum = new int[3];
    for (int i = 0; i < 3; ++i) {
        maxSum[i] = A[i];
    }

    for (int i = 3; i < size; ++i) {
        if (A[i] > maxSum[0]) {
            maxSum[2] = maxSum[1];
            maxSum[1] = maxSum[0];
            maxSum[0] = A[i];
        } else if (A[i] > maxSum[1]) {
            maxSum[2] = maxSum[1];
            maxSum[1] = A[i];
        } else if (A[i] > maxSum[2]) {
            maxSum[2] = A[i];
        }
    }

    return maxSum;
}

int main() {
    int size;
    cout << "Nhap so phan tu cua day so duong A: ";
    cin >> size;

    int* A = new int[size];
    cout << "Nhap day so duong A:\n";
    for (int i = 0; i < size; ++i) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    int* maxSum = findMaxSum(A, size);
    cout << "Ba phan tu co tong lon nhat trong day A la: " << maxSum[0] << ", " << maxSum[1] << ", " << maxSum[2] << endl;

    delete[] A;
    delete[] maxSum;

    return 0;
}
