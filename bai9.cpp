// Bài 9. Hãy nối chuỗi S vào sau chuỗi T mà không sử dụng hàm có sẵn trong các thư viện của C/C++.
#include <iostream>
#include <cstring>

char *concatenateStrings(const char *s, const char *t)
{
    int lenS = strlen(s);
    int lenT = strlen(t);

    char *result = new char[lenS + lenT + 1];

    strcpy(result, t);

    strcpy(result + lenT, s);

    return result;
}

int main()
{
    char s[100];
    char t[100];

    std::cout << "Nhap chuoi S: ";
    std::cin.getline(s, sizeof(s));

    std::cout << "Nhap chuoi T: ";
    std::cin.getline(t, sizeof(t));

    char *concatenated = concatenateStrings(s, t);

    std::cout << "Chuoi sau khi noi: " << concatenated << std::endl;

    delete[] concatenated;

    return 0;
}
