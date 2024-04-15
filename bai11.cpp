//Bài 11. Kiểm tra xem 1 chuỗi S bất kỳ có chứa trong nó chuỗi “Lap Trinh” hay không?
#include <iostream>
#include <cstring>

using namespace std;

bool chuachuoi(const char* s) {
    return strstr(s, "Lap Trinh") != nullptr;
}

int main() {
    char s[100]; 
    cout << "Nhap chuoi S: ";
    cin.getline(s, sizeof(s)); 

    if (chuachuoi(s)) {
        cout << "Chuoi S chua chuoi 'Lap Trinh'." << endl;
    } else {
        cout << "Chuoi S khong chua chuoi 'Lap Trinh'." << endl;
    }

    return 0;
}
