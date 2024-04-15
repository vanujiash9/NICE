#include <iostream>
using namespace std;

void timDayConLienTiep(int arr[], int n) {
    if (n == 0) {
        cout << "Danh sach rong." << endl;
        return;
    }

    int start = 0; 
    int maxLength = 1;
    int currentLength = 1; 

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currentLength++;
            if (currentLength > maxLength) { 
                start = i - currentLength + 1; 
                maxLength = currentLength; 
            }
        } else { 
            currentLength = 1;
        }
    }

    cout << "Day con lien tiep co cung chieu dai la: ";
    for (int i = start; i < start + maxLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua day a: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Nhap day so nguyen a: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    timDayConLienTiep(arr, n);

    delete[] arr;

    return 0;
}
