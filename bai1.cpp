//Bài 1. Tính tổng các phần tử là số chia hết cho 3 trong dãy số nguyên gồm n phần tử.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so phan tu cua day so: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Nhap day so nguyen n phan tu: ";
    for( int i=0; i<= n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i]; 
    }
    int sum = 0;
    for(int i=0; i< n;i++){
        if( arr[i] % 3 == 0){
            sum += arr[i];
        }
    }
    cout << "Tong cac phan tu chia het cho 3 la " << sum << endl;
    delete[] arr;
    return 0;
}
