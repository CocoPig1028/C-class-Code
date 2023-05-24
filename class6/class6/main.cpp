//
//  main.cpp
//  class6
//
//  Created by 박대영 on 2023/04/17.
//

#include <iostream>
using namespace std;

//int main() {
//    int i, j;
//
//    int stuNum[5];
//    string stuName[5];
//    int score[5][4] = {0};
//    double aver[5];
//    char grade[5];
//    int rank[5] = {1};
//
//    for(i = 0; i < 5; i++) {
//        cout << "학번을 입력하시오:";
//        cin >> stuNum[i];
//        cout << "이름을 입력하시오:";
//        cin >> stuName[i];
//        cout << "국어 영어 수학 점수를 입력하시오:";
//        for(j = 0; j < 3; j++) {
//            cin >> score[i][j];
//            score[i][3] += score[i][j];
//        }
//        aver[i] = score[i][3] / 3;
//
//        if(aver[i] > 90) {
//            grade[i] = 'a';
//        } else if(aver[i] > 80) {
//            grade[i] = 'b';
//        } else if(aver[i] > 80) {
//            grade[i] = 'c';
//        } else if(aver[i] > 80) {
//            grade[i] = 'd';
//        } else {
//            grade[i] = 'f';
//        }
//    }
//
//    for(i = 0; i < 5; i++) {
//        for(j = 0; j < 5; j++) {
//            if(aver[i] < aver[j]) {
//                rank[i]++;
//            }
//        }
//    }
//
//    for(i = 0; i < 5; i++) {
//        cout << stuNum[i] << " " << stuName[i] << " " << score[i][0] << " " << score[i][1] << " " << score[i][2] << " " << score[i][3] << " " << aver[i] << " " << grade[i] << " " << rank[i] << "\n";
//    }
//
//    return 0;
//}

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;

    cout << "a: " << a << "\t&a[0]: " << &a[0] << "p: " << p << endl;
    cout << "a + 1: " << a + 1 << "\t&a[1]: " << &a[1] << " p + 1: " << p + 1<< endl;
    cout << "a + 2: " << a + 2 << "\t&a[2]: " << &a[2] << " p + 2: " << p + 2 << endl;
    cout << "a + 3: " << a + 3 << "\t&a[3]: " << &a[3] << " p + 3: " << p + 3<< endl;
    cout << "a + 4: " << a + 4 << "\t&a[4]: " << &a[4] << " p + 4: " << p + 4<< endl;
    cout << &a[3] + 1 << endl;

    return 0;
}

//int main() {
//    int a[5] = {10, 20, 30, 40, 50};
//    int i;
//    int *p = a;
//
//    for(i = 0; i < 4; i++) {
//        cout << "a+i: " << a + i << "\t &a[i]: " << &a[i] << "\t p + i: " << p + i << "\n";
//    }
//
//    cout << "--------------------------------------------\n";
//
//    for(i = 0; i < 5; i++) {
//        cout << "*(a + i): " << *(a + i) << "\t\t a[i]: " << a[i] << "\t\t *(p + i): " << *(p + i) << "\n";
//    }
//
//    return 0;
//
//}

//int main() {
//    int a = 5;
//    int *p;
//    int **pp;
//
//    p = &a;
//    pp = &p;
//
//    cout << "p: " << p << "\t\t &a: " << &a << endl;
//    cout << "*p: " << *p << "\t\t a: " << a << endl;
//    cout << "pp: " << pp << "\t\t &p: " << &p << endl;
//    cout << "*pp: " << *pp << "\t p: " << p << endl;
//    cout << "**pp: " << **pp << "\t\t *p: " << *p << endl;
//
//    return 0;
//}

//#define ROW 3
//#define COL 4
//
//int main() {
//    int a[ROW][COL] = {{90, 85, 95, 100}, {75, 95, 80, 90}, {90, 80, 70, 60}};
//
//    cout << "2차원 배열의 각 행의 첫번째 열의 주소\n";
//    cout << "=====================================\n";
//
//    for(int r = 0; r < ROW; r++) {
//        cout << "\n" << r << "행";
//        cout << "\t a[" << r << "] = " << a[r];
//        cout << "\t &a[" << r << "][0] = " << a[r][0];
//
//    }
//
//    cout << "\n\n각 행의 첫번째 열에 위치한 원소\n";
//    cout << "=====================================\n";
//
//    cout << "*a[0] = " << *a[0] << "\t*a[1] = " << *a[1] << "\t*a[2] = " << *a[2] << endl;
//
//    return 0;
//}

//#define ROW 3
//#define COL 4
//
//int main() {
//    int a[ROW][COL] = {{90, 85, 95, 100}, {75, 95, 80, 90}, {90, 80, 70, 60}};
//
//    cout << "a: " << a << endl;
//    cout << "*a: " << *a << endl;
//    cout << "**a: " << **a << endl;
//    cout << "a[0]: " << a[0] << endl;
//
//    cout << "=================================\n";
//
//    cout << "a + 1: " << a + 1 << endl;
//    cout << "a + 2: " << a + 2 << endl;
//    cout << "*(a + 1): " << *(a + 1) << endl;
//    cout << "*(a + 2): " << *(a + 2) << endl;
//
//    return 0;
//}

//#define ROW 3
//#define COL 4
//
//int main() {
//    int a[ROW][COL] = {{90, 85, 95, 100}, {75, 95, 80, 90}, {90, 80, 70, 60}};
//
//    int r, c;
//
//    cout << "1. 값 출력" << endl;
//    for(r = 0; r < ROW; r++) {
//        for(c = 0; c < COL; c++) {
//            cout << "*(*(a + " << r << ") + " << c << "): " << *(*(a + r) + c) << "\t";
//        }
//        cout << endl;
//    }
//
//    cout << "2. 주소 출력" << endl;
//    for(r = 0; r < ROW; r++) {
//        for(c = 0; c < COL; c++) {
//            cout << "(*(a + " << r << ") + " << c << "): " << (*(a + r) + c) << "\t";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//#define ROW 3
//#define COL 4
//
//int main() {
//    int a[ROW][COL] = {{90, 85, 95, 100}, {75, 95, 80, 90}, {90, 80, 70, 60}};
//
//    int r,c;
//
//    int (*p)[4];
//    p = a;
//
//    for(r = 0; r < ROW; r++) {
//        for(c = 0; c < COL; c++) {
//            cout << "*(*(a + " << r << ") + " << c << "): " << *(*(p + r) + c) << "\t";
//        }
//        cout << endl;
//    }
//
//    for(r = 0; r < ROW; r++) {
//        for(c = 0; c < COL; c++) {
//            cout << "(*(a + " << r << ") + " << c << "): " << (*(p + r) + c) << "\t";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//#include <ctime>
//void insert(int *p);
//void prn(int *p);
//void maxCal(int *p);
//void minCal(int *p);
//void s_ort(int *p);
//
//int main() {
//    int a[5] = {};
//
//    insert(a);
//    prn(a);
//    maxCal(a);
//    minCal(a);
//    s_ort(a);
//    prn(a);
//}
//
//void insert(int *p) {
//    srand((unsigned int)time(NULL));
//
//    int i;
//
//    for(int i = 0; i < 5; i++) {
//        *(p + i) = rand() % 10 + 1;
//    }
//}
//
//void prn(int *p) {
//    int i;
//
//    for(i = 0; i < 5; i++) {
//        cout << *(p + i) << "\t";
//    }
//    cout << endl;
//}
//
//void maxCal(int *p) {
//    int i;
//    int maxNum = *p;
//    int *maxLoc;
//    int maxp = 0;
//    for(i = 0; i < 5; i++) {
//        if(maxNum < *(p + i)) {
//            maxNum = *(p + i);
//            maxLoc = &maxNum;
//            maxp = i;
//        }
//    }
//    cout << "maxNum: " << maxNum << "\t" << "maxLoc: " << maxLoc << "\t a[" << maxp << "]" << endl;
//}
//
//void minCal(int *p) {
//    int i;
//    int minNum = *p;
//    int *minLoc;
//    int minp = 0;
//    for(i = 0; i < 5; i++) {
//        if(minNum > *(p + i)) {
//            minNum = *(p + i);
//            minLoc = &minNum;
//            minp = i;
//        }
//    }
//    cout << "minNum: " << minNum << "\t" << "minLoc: " << minLoc << "\t a[" << minp << "]" << endl;
//}
//
//void s_ort(int *p) {
//    int i,j,temp;
//
//    for(i = 0; i < 4; i++) {
//        for(j = i + 1; j < 5; j++) {
//            if(*(p + i) < *(p + j)) {
//                temp = *(p + i);
//                *(p + i) = *(p + j);
//                *(p + j) = temp;
//            }
//        }
//    }
//}

//성적 산출 프로그램 과제

//void insert(int *pNum, string *pName, int (*pScore)[4]);
//void sum(int (*pScore)[4]);
//void avg(int (*pScore)[4], double *pAver);
//void gradeF(double *pAver, char *pGrade);
//void rankF(double *pAver, int *pRank);
//void print(int *pNum, string *pName, int (*pScore)[4], double *pAver, char *pGrade, int *pRank);

//메인함수
//int main() {
//
//    int stuNum[5];
//    string stuName[5];
//    int score[5][4] = {0};
//    double aver[5];
//    char grade[5];
//    int rank[5] = {1,1,1,1,1};
//
//    insert(stuNum, stuName, score);
//    sum(score);
//    avg(score, aver);
//    gradeF(aver, grade);
//    rankF(aver, rank);
//    print(stuNum, stuName, score, aver, grade, rank);
//
//    return 0;
//}

//입력받는 함수
//void insert(int *pNum, string *pName, int (*pScore)[4]) {
//    int i, j, w;
//
//    for(i = 0; i < 5; i++) {
//        cout << "insert your student number: ";
//        cin >> *(pNum + i);
//        cout << "insert your name: ";
//        cin >> *(pName + i);
//        for(j = 0; j < 3; j++) {
//            if(j == 0) {
//                cout << "insert your kor score: ";
//            } else if(j == 1) {
//                cout << "insert your eng score: ";
//            } else if(j == 2) {
//                cout << "insert your math score: ";
//            }
//            cin >> *(*(pScore + i) + j);
//        }
//    }
//}

//합계구하는 함수 2차원배열
//void sum(int (*pScore)[4]) {
//    int i, j;
//
//    for(i = 0; i < 5; i++) {
//        for(j = 0; j < 3; j++) {
//            *(*(pScore + i) + 3) += *(*(pScore + i) + j);
//        }
//    }
//}

//평균구하는 함수
//void avg(int (*pScore)[4], double *pAver) {
//    int i;
//
//    for(i = 0; i < 5; i++) {
//        *(pAver + i) = *(*(pScore + i) + 3) / 3;
//    }
//}

//학점구하는 함수
//void gradeF(double *pAver, char *pGrade) {
//    int i;
//
//    for(i = 0; i < 5; i++) {
//        if(*(pAver + i) > 90) {
//            *(pGrade + i) = 'A';
//        } else if(*(pAver + i) > 80) {
//            *(pGrade + i) = 'B';
//        } else if(*(pAver + i) > 70) {
//            *(pGrade + i) = 'C';
//        } else if(*(pAver + i) > 60) {
//            *(pGrade + i) = 'D';
//        } else {
//            *(pGrade + i) = 'F';
//        }
//    }
//}

//석차구하는 함수
//void rankF(double *pAver, int *pRank) {
//    int i,j;
//
//    for(i = 0; i < 5; i++) {
//        for(j = 0; j < 5; j++) {
//            if(*(pAver + i) < *(pAver + j)) {
//                (*(pRank + i))++;
//            }
//        }
//    }
//}

//출력하는 함수
//void print(int *pNum, string *pName, int (*pScore)[4], double *pAver, char *pGrade, int *pRank) {
//    int i, j;
//
//    cout << "학번\t\t이름\t\t국어\t\t영어\t\t수학\t\t총점\t\t평균\t\t등급\t\t석차\t\t\n";
//    cout << "-----------------------------------------------------------------------------------\n";
//
//    for(i = 0; i < 5; i++) {
//        cout << *(pNum + i) << "\t\t" << *(pName + i) << "\t\t";
//
//        for(j = 0; j < 4; j++) {
//            cout << *(*(pScore + i) + j) << "\t\t";
//        }
//
//        cout << *(pAver + i) << "\t\t" << *(pGrade + i) << "\t\t" << *(pRank + i) << endl;
//    }
//}

//#include <ctime>
//
//void plusF(int (*pA)[3], int (*pB)[3]);
//void minusF(int (*pA)[3], int (*pB)[3]);
//void square(int (*pA)[3], int (*pB)[3]);
////a행렬 b행렬은 3행 3열로 구하기
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
