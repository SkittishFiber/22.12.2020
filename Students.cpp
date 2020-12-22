#include <iostream>
#include <string>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    const int n = 3, m = 15;
    int a[n][m];
    double s1 = 0, s2 = 0, s3 = 0;
    string s1_name = "Философия", s2_name = "ЯВУ", s3_name = "Мат.Анализ";
    for (int i = 0; i < n; ++i) {
        if (i == 0) cout << s1_name << ":  ";
        else if (i == 1) cout << s2_name << ":        ";
        else cout << s3_name << ": ";
        for (int j = 0; j < m; ++j) {
            a[i][j] = rand() % 6;
            cout << a[i][j] << " ";
            if (i == 0) {
                s1 += a[i][j];
            }
            else if (i == 1) {
                s2 += a[i][j];
            }
            else if (i == 2) {
                s3 += a[i][j];
            }
        }
        cout << endl;
    }
    if (s1 > s2 && s1 > s3) {
        cout << "Наибольшее число баллов набрано по: " << s1_name;
    }
    else if (s2 > s1 && s2 > s3) {
        cout << "Наибольшее число баллов набрано по: " << s2_name;
    }
    else if (s3 > s1 && s3 > s2) {
        cout << "Наибольшее число баллов набрано по: " << s3_name;
    }
}

