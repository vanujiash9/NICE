//Bài 6. Hãy trộn 2 mảng (giả sử đã sắp xếp) tăng dần thành 1 mảng sao cho mảng mới vẫn giữ nguyên tính chất sắp xếp.
#include <iostream>
using namespace std;

void nhapMang(int arr[], int n) {
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        result[k++] = arr1[i++];
    }

    while (j < n2) {
        result[k++] = arr2[j++];
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
    mergeArrays(arr1, n1, arr2, n2, result);

    cout << "Mang sau khi tron: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
