#include <iostream>
using namespace std;

/*
 ????? for(), while()

"1-??????-?????.pdf"
5. ???????????? ? ?????????? ?????? ?????.
????????? ?? ????? ? ??????? ?? ?????, ??? ??????
???????????? ?????? ????.

6. ???????? ???? "?????? ?????".
????????? ?????????? ????? ? ????????? ?? 1 ?? 500.
???????????? ???????? ??? ???????.
????? ?????? ??????? ????????? ?????? ?????????,
?????? ??? ?????? ??? ????? ???????????.
? ????? ????????? ?????? ??????????:
?? ??????? ??????? ??????? ?????, ??????? ???????
??? ??????.
????????????? ????? ?? 0, ? ??????, ???? ????????????
??????? ????????? ?????.
*/
/* 8. ??????? ?? ????? ????????????? ? ?????????
????????? ???????? ????????.
Input: 3 8 @ <ENTER>

@@@@@@@@
@@@@@@@@
@@@@@@@@
*/
int main()
{
    setlocale(LC_ALL, "Rus");

    int var_a, var_c;
    char b;
    cout << "??????? ??????? ?????????????? ? ??????:";
    cin >> var_a >> var_c >> b;
    // var_a - ??????
    // var_c - ??????
    //int j = 1;
    // ????????? ???? ??? ?????? ??????????????
    for (int i = 0, j = 1; i < var_a * var_c; i++) {
        cout << b;
        if (j < var_c) { j++; }
        else { cout << endl; j = 1; }
    }
    cin.get(); cin.get();
}

#include <iostream>
using namespace std;

/*
 ????? for(), while()
"1-??????-?????.pdf"

5. ???????????? ? ?????????? ?????? ?????.
????????? ?? ????? ? ??????? ?? ?????, ??? ??????
???????????? ?????? ????.

6. ???????? ???? "?????? ?????".
????????? ?????????? ????? ? ????????? ?? 1 ?? 500.
???????????? ???????? ??? ???????.
????? ?????? ??????? ????????? ?????? ?????????,
?????? ??? ?????? ??? ????? ???????????.
? ????? ????????? ?????? ??????????:
?? ??????? ??????? ??????? ?????, ??????? ???????
??? ??????.
????????????? ????? ?? 0, ? ??????, ????
???????????? ??????? ????????? ?????.
*/
/*
5. ???????????? ? ?????????? ?????? ?????.
????????? ?? ????? ? ??????? ?? ?????, ??? ??????
???????????? ?????? ????.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int sum = 0; // ?????????? ??? ?????
    // 1 ???????
    while (true) { // ??????????? ???? while, while(1)
        int a;
        cout << "-> ";
        cin >> a;
        if (a == 0) { break; } // ??????????? ?????? ?????
        sum += a;
    }
    cout << "????? = " << sum << endl;
    // 2 ???????
    sum = 0; // ????? ?????????? sum ??? ????? ?????
    int a = 1;
    while (a != 0) {
        cout << "-> ";
        cin >> a;
        sum += a;
    }
    cout << "????? = " << sum << endl;
    // 3 ??????? ? ??????? ????? do{}while
    sum = 0; // ?????, ??????? ?????????? sum ??? ?????? ????????????
    do {
        cout << "-> ";
        cin >> a;
        sum += a;
    } while (a != 0);
    cout << "????? = " << sum << endl;

    cin.get(); cin.get();
}

#include <iostream>
#include <time.h> // ??? ?-??? time()
using namespace std;

/*
 ????? for(), while()
"1-??????-?????.pdf"

6. ???????? ???? "?????? ?????".
????????? ?????????? ????? ? ????????? ?? 1 ?? 500.
???????????? ???????? ??? ???????.
????? ?????? ??????? ????????? ?????? ?????????,
?????? ??? ?????? ??? ????? ???????????.
? ????? ????????? ?????? ??????????:
?? ??????? ??????? ??????? ?????, ??????? ???????
??? ??????.
????????????? ????? ?? 0, ? ??????, ????
???????????? ??????? ????????? ?????.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    // srand() - ????-??? ?????????? ??????????????? ????????
    // time(0) - ?????????? ??????? ????? ? ????????
    //           ????????? ? 01.01.1970
    srand(time(0)); //

    for (int i = 0; i < 10; i++) {
        // rand() - ?-??? ????????? ??????????????? ????? ?????
        //  ? ????????? ?? 0 ?? 32767
        // ???????? ????????? ????. ?????
        int a = rand() % 500 + 1; // 0-499 +1==> 1-500
        cout << a << endl;
    }
    cin.get(); cin.get();
}
    
#include <iostream>
#include <iomanip> // ????? ?????????????
#include <time.h> // ??? ?-??? time()

using namespace std;

/*
 ????? for(), while()
"1-??????-?????.pdf"

6. ???????? ???? "?????? ?????".
????????? ?????????? ????? ? ????????? ?? 1 ?? 500.
???????????? ???????? ??? ???????.
????? ?????? ??????? ????????? ?????? ?????????,
?????? ??? ?????? ??? ????? ???????????.
? ????? ????????? ?????? ??????????:
?? ??????? ??????? ??????? ?????, ??????? ???????
??? ??????.
????????????? ????? ?? 0, ? ??????, ????
???????????? ??????? ????????? ?????.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int a = rand() % 500 + 1;
    int Count = 0;
    clock_t TimeStart = clock(); // ?????????? ??? ??????? ? ????????????
    bool GameOver = false;
    // cout << a << endl; // ??? ???????????, ????????
    while (GameOver == false) {
        cout << "??????? ?????" << endl;
        int b;
        cin >> b;
        if (b == 0) {
            cout << "???? ????????! " << endl;
            GameOver = true;
            continue;
            // break;
        }
        Count++;
        if (b > a) {
            cout << "???? ????? ?????? ?????" << endl;
        }
        else if (b < a) {
            cout << "???? ????? ?????? ?????" << endl;
        }
        else {
            cout << "?? ???????! " << endl;
            GameOver = true;

        }

    } // while
    cout << "?????????? ???????: " << Count << endl;
    clock_t TimeEnd = clock();
    int Duration = TimeEnd - TimeStart; // ??????????? ????? ? ????????????
    int H = (Duration / 1000) / 3600;
    int M = (Duration / 1000) % 3600 / 60;
    int S = (Duration / 1000) % 60;
    int Ms = Duration % 1000;
    cout << setfill('0') << setw(2) << H << ":"
        << setw(2) << M << ":"
        << setw(2) << S << "."
        << setw(3) << Ms << endl;
    cin.get(); cin.get();
}
