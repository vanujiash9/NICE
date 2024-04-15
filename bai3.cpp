#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
    int n, m;
    cout << "Nhap so phan tu cua day a: ";
    cin >> n;
    cout <<"Nhap so phan tu cua day x: ";
    cin >> m;

    int *arr_a = new int[n];
    int *arr_x = new int[m];

    cout << "Nhap day so nguyen a: ";
    for( int i = 0; i < n; i++){
        cout << "arr_a[" << i << "] = ";
        cin >> arr_a[i];
    }

    cout << "Nhap day so nguyen x: ";
    for( int j = 0; j < m; j++){
        cout << "arr_x[" << j << "] = ";
        cin >> arr_x[j];
    }

    sort(arr_a, arr_a + n);

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        sum += arr_a[i];
        if (sum > arr_x[0]) {
            break;
        }
        count++;
    }

    cout << "Cac phan tu trong a sao cho tong nho hon x la: ";
    for (int i = 0; i < count; ++i) {
        cout << arr_a[i] << " ";
    }
    cout << endl;

    delete[] arr_a;
    delete[] arr_x;

    return 0;
}
