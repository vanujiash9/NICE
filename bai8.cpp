/*Bài 8. Cho con trỏ xâu ký tự S bất kỳ. 
Hãy định dạng S sao cho không dư thừa khoảng trống ở đầu, cuối và giữa các từ chỉ chứa duy nhất 1 khoảng trống. 
Mỗi từ sẽ bắt đầu bằng ký tự in hoa, các ký tự còn lại là chữ in thường.*/
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void formatString(char *str) {
    char *start = str;
    while (isspace(*start)) {
        ++start;
    }
    char *end = str + strlen(str) - 1;
    while (end > start && isspace(*end)) {
        *end-- = '\0';
    }

    char *current = start;
    while (*current) {
        *current = toupper(*current);
        ++current;
        while (*current && !isspace(*current)) {
            *current = tolower(*current);
            ++current;
        }
        while (isspace(*current)) {
            ++current;
        }
    }
}

int main() {
    char str[100];
    cout << "Nhap xau ki tu: ";
    cin.getline(str, sizeof(str)); 

    formatString(str); 

    cout << "Xuat ket qua: " << str << endl;

    return 0;
}
