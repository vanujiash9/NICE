//Bài 2. Hãy tìm những phần tử có giá trị trùng nhau trong dãy số nguyên n phần tử. Cho biết giá trị đó xuất hiện bao nhiêu lần.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap n phan tu: ";
    cin >> n;
    int *arr = new int [n];
    cout << "Nhap day so nguyen gom n phan tu: ";
    for( int i=0; i< n; i++){
        cout << "arr[ " << i << " ]=";
        cin >> arr[i];
    }
    bool *checked = new bool[n];
    for (int i = 0; i < n; ++i) {
        checked[i] = false;
    }

    for( int i=0; i< n; i++){
        if (checked[i]) {
            continue;
        }
        
        int count = 1;
        for(int j = i+1; j < n; j++){
            if( arr[i] == arr[j]){
                count++;
                checked[j] = true;
            }
        }
        cout << "Gia tri " << arr[i] << " xuat hien "<< count << " lan" << endl;
    }
    
    delete[] arr;
    delete[] checked;

    return 0;
}
