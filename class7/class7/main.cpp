//
//  main.cpp
//  class7
//
//  Created by 박대영 on 2023/04/24.
//

#include <iostream>
#include <ctime>
using namespace std;

//void plusF(int (*pA)[3], int (*pB)[3]);
//void minusF(int (*pA)[3], int (*pB)[3]);
//void square(int (*pA)[3], int (*pB)[3]);
//
//int main() {
//    int a[3][3];
//    int b[3][3];
//    int i, j;
//    
//    srand((unsigned int)time(NULL));
//    
//    for(int i = 0; i < 3; i++) {
//        for(int j = 0; j < 3; j++) {
//            a[i][j] = rand() % 10 + 1;
//            b[i][j] = rand() % 10 + 1;
//        }
//    }
//    
//    cout << "------------------\n";
//    
//    for(i = 0; i < 3; i++) {
//        for(j = 0; j < 3; j++) {
//            cout << a[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    
//    cout << "A-----------------\n";
//    
//    for(i = 0; i < 3; i++) {
//        for(j = 0; j < 3; j++) {
//            cout << b[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    
//    cout << "B-----------------\n";
//    
//    plusF(a, b);
//    minusF(a, b);
//    square(a, b);
//    
//    return 0;
//}
//
//void plusF(int (*pA)[3], int (*pB)[3]) {
//    int i, j, result[3][3];
//    
//    for(i = 0; i < 3; i++) {
//        for(j = 0; j < 3; j++) {
//            result[i][j] = (*(*(pA + i) + j)) + (*(*(pB + i) + j));
//        }
//    }
//    
//    for(i = 0; i < 3; i++) {
//        for(j = 0; j < 3; j++) {
//            cout << result[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    
//    cout << "SUM---------------\n";
//}
//
//void minusF(int (*pA)[3], int (*pB)[3]) {
//    int i, j, result[3][3];
//    
//    for(i = 0; i < 3; i++) {
//        for(j = 0; j < 3; j++) {
//            result[i][j] = (*(*(pA + i) + j)) - (*(*(pB + i) + j));
//        }
//    }
//    
//    for(i = 0; i < 3; i++) {
//        for(j = 0; j < 3; j++) {
//            cout << result[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    
//    cout << "MINUS-------------\n";
//}
//
//void square(int (*pA)[3], int (*pB)[3]) {
//    int i, j, result[3][3];
//    
//    for(i = 0; i < 3; i++) {
//        for(j = 0; j < 3; j++) {
//            result[i][j] = (*(*(pA + i) + j)) * (*(*(pB + i) + j));
//        }
//    }
//    
//    for(i = 0; i < 3; i++) {
//        for(j = 0; j < 3; j++) {
//            cout << result[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    
//    cout << "SQUARE------------\n";
//}

//int main() {
//    char str[256] = "Apple";
//    char *ptr = "Orange";
//
//    cout << "str = " << (uintptr_t)str<< "\t str = " << str << endl;
//    cout << "ptr = " << (uintptr_t)ptr<< "\t ptr = " << ptr << endl;
//
//    ptr = "Grape";
//
//    cout << "ptr = " << (uintptr_t)ptr<< "\t ptr = " << ptr << endl;
//
//    return 0;
//}

//void (*pf)();
//void ONE() {
//    cout << "one\n";
//}
//void TWO() {
//    cout << "two\n";
//}
//void THREE() {
//    cout << "three\n";
//}
//void ENTERFX(int num) {
//    switch(num) {
//        case 0: {
//            cout << "종료\n";
//            break;
//        }
//        case 1: {
//            pf = ONE;
//            break;
//        }
//        case 2: {
//            pf = TWO;
//            break;
//        }
//        case 3: {
//            pf = THREE;
//            break;
//        }
//    }
//}
//
//int main() {
//    int num;
//    while(1) {
//        cout << "0부터 3사이의 숫자를 입력하되 끝내려면 0을 입력: ";
//        cin >> num;
//
//        ENTERFX(num);
//
//        if(num == 0) {
//            return 0;
//        }
//        pf();
//    }
//
//    return 0;
//}

//int* func() {
//    static int n;
//    cin >> n;
//    return &n;
//}
//
//int main() {
//    int *ip;
//    ip = func();
//    printf("%d", *ip);
//
//    return 0;
//}

//char* func(char *s) {
//    cout << s << endl;
//    cout << &s << endl;
//    s = "CDE";
//    return s;
//}
//int main() {
//    char *str;
//
//    str = func("ABC");
//    cout << str << endl;
//    cout << &str << endl;
//
//    return 0;
//}

#define ROW 5
#define COL 5

void enterValue(int (*pX)[COL]);
void printBefore(int (*pX)[COL]);
void sumcolrow(int (*pX)[COL]);
void printF(int (*pX)[COL]);

int main() {
    int x[ROW][COL] = {0};

    enterValue(x);
    printBefore(x);
    sumcolrow(x);
    printF(x);

    return 0;
}

void enterValue(int (*pX)[COL]) {
    int i, j;

    srand((unsigned int)time(NULL));

    for(i = 0; i < (ROW - 1); i++) {
        for(j = 0; j < (COL - 1); j++) {
            *(*(pX + i) + j) = rand() % 10 + 1;
        }
    }
}

void printBefore(int (*pX)[COL]) {
    int i, j;

    for(i = 0; i < (ROW - 1); i++) {
        for(j = 0; j < (COL - 1); j++) {
            cout << *(*(pX + i) + j) << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void sumcolrow(int (*pX)[COL]) {
    int i, j;

    for(i = 0; i < (ROW - 1); i++) {
        for(j = 0; j < (COL - 1); j++) {
            *(*(pX + i) + (COL - 1)) += *(*(pX + i) + j);
            *(*(pX + (ROW - 1)) + i) += *(*(pX + j) + i);
            *(*(pX + (ROW - 1)) + (COL - 1)) += *(*(pX + i) + j);
        }
    }
}

void printF(int (*pX)[COL]) {
    int i, j;

    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
//            cout << pX[i][j] << "\t";
            cout << *(*(pX + i) + j) << "\t";
        }
        cout << endl;
    }
}

//struct namecard {
//    string name;
//    string job;
//    string tel;
//    string email;
//};
//
//int main() {
//    int num, i;
//    cout << "How many people do you enter this database: ";
//    cin >> num;
//
//    struct namecard man[num];
//
//    for(i = 0; i < num; i++) {
//        cout << "insert your name: ";
//        cin >> man[i].name;
//        cout << "insert your job: ";
//        cin >> man[i].job;
//        cout << "insert your tel: ";
//        cin >> man[i].tel;
//        cout << "insert your e-mail: ";
//        cin >> man[i].email;
//    }
//
//    cout << "Print the Data." << endl;
//    cout << "name\t job\t tel\t email" << endl;
//    for(i =0; i < num; i++) {
//        cout << man[i].name << "\t " << man[i].job << "\t " << man[i].tel << "\t " << man[i].email << endl;
//    }
//
//    cout << "=====================================================" << endl;
//
//    cout << "sizeof(namecard): " << sizeof(namecard) << endl;
//    cout << "size of struct memory: " << sizeof(namecard) << endl;
//
//    return 0;
//}


