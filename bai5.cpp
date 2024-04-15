#include<iostream>
#include<cstring>
using namespace std;

void tachPhanTen(const char *s) {
    const char *lastSpace = strrchr(s, ' ');
    if (lastSpace == nullptr) {
        cout << "Khong tim thay phan ten trong chuoi." << endl;
    } else {
        int tenLength = strlen(lastSpace + 1);
        char *ten = new char[tenLength + 1];
        strncpy(ten, lastSpace + 1, tenLength);
        ten[tenLength] = '\0';
        cout << "Phan ten cua nguoi do la: " << ten << endl;
        delete[] ten;
    }
}

int main() {
    char *hoTen = new char[100];
    cout << "Nhap ho va ten: ";
    cin.getline(hoTen, 100); 
    tachPhanTen(hoTen);
    delete[] hoTen;
    return 0;
}
