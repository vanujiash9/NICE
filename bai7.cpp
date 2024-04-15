#include <iostream>
using namespace std;

void nhapMang(int arr[], int n) {
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

void tronMang(int arr1[], int n1, int arr2[], int n2, int result[], int &size) {
    size = 0;
    for (int i = 0; i < n1; ++i) {
        bool trungLap = false;
        for (int j = 0; j < n2; ++j) {
            if (arr1[i] == arr2[j]) {
                trungLap = true;
                break;
            }
        }
        if (!trungLap) {
            result[size++] = arr1[i];
        }
    }

    for (int i = 0; i < n2; ++i) {
        bool trungLap = false;
        for (int j = 0; j < n1; ++j) {
            if (arr2[i] == arr1[j]) {
                trungLap = true;
                break;
            }
        }
        if (!trungLap) {
            result[size++] = arr2[i];
        }
    }
}

int main() {
    int n1, n2;
    cout << "Nhap so luong phan tu cua mang 1: ";
    cin >> n1;
    int arr1[n1];
    nhapMang(arr1, n1);

    cout << "Nhap so luong phan tu cua mang 2: ";
    cin >> n2;
    int arr2[n2];
    nhapMang(arr2, n2);

    int result[n1 + n2];
    int size;
    tronMang(arr1, n1, arr2, n2, result, size);

    cout << "Mang sau khi tron khong chua phan tu chung: ";
    for (int i = 0; i < size; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
