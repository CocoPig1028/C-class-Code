//
//  main.cpp
//  class8
//
//  Created by 박대영 on 2023/05/08.
//

#include <iostream>
using namespace std;

//struct namecard {
//    char name[20];
//    char job[30];
//    char tel[20];
//    char email[40];
//};

//void structPrn(namecard temp);
//namecard structInput();
//
//int main(int argc, const char * argv[]) {
//    int i;
//    namecard x[3];
//
//    for(i = 0; i < 3; i++) {
//        x[i] = structInput();
//    }
//
//    cout << "이름 \t\t 직업 \t 연락처 \t\t 이메일" << endl;
//    cout << "===========================================" << endl;
//
//    for(i = 0; i < 3; i++) {
//        structPrn(x[i]);
//    }
//
//    cout << endl;
//
//    cout << "===========================================" << endl;
//}
//
//void structPrn(namecard temp) {
//    cout << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
//}
//
//namecard structInput() {
//    namecard temp;
//
//    cout << "이름을 입력하시오: ";
//    cin >> temp.name;
//    cout << "직업을 입력하시오: ";
//    cin >> temp.job;
//    cout << "연락처을 입력하시오: ";
//    cin >> temp.tel;
//    cout << "이메일을 입력하시오: ";
//    cin >> temp.email;
//
//    return temp;
//}

//void structPrn(namecard temp);
//namecard structInput();
//
//int main(int argc, const char * argv[]) {
//    int i;
//    namecard x;
//
//    x = structInput();
//
//    namecard *p;
//    p = &x;
//
//    cout << "이름 \t\t 직업 \t 연락처 \t\t 이메일" << endl;
//    cout << "===========================================" << endl;
//
//    cout << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email << endl;
//    cout << (*p).name << "\t" << (*p).job << "\t" << (*p).tel << "\t" << (*p).email;
//
//    cout << endl;
//
//    cout << "===========================================" << endl;
//}
//
//namecard structInput() {
//    namecard temp;
//
//    cout << "이름을 입력하시오: ";
//    cin >> temp.name;
//    cout << "직업을 입력하시오: ";
//    cin >> temp.job;
//    cout << "연락처을 입력하시오: ";
//    cin >> temp.tel;
//    cout << "이메일을 입력하시오: ";
//    cin >> temp.email;
//
//    return temp;
//}

//void structPrn(namecard temp);
//void structInput(namecard *pTemp);
//
//int main(int argc, const char * argv[]) {
//    namecard x, y, z;
//
//    structInput(&x);
//    structInput(&y);
//    structInput(&z);
//
//    cout << "이름 \t\t 직업 \t 연락처 \t\t 이메일" << endl;
//    cout << "===========================================" << endl;
//
//    structPrn(x);
//    structPrn(y);
//    structPrn(z);
//
//    cout << endl;
//
//    cout << "===========================================" << endl;
//}
//
//void structPrn(namecard temp) {
//    cout << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email << endl;
//}
//
//void structInput(namecard *pTemp) {
////    namecard temp;
//
//    cout << "이름을 입력하시오: ";
//    cin >> *pTemp->name;
//    cout << "직업을 입력하시오: ";
//    cin >> *pTemp->job;
//    cout << "연락처을 입력하시오: ";
//    cin >> *pTemp->tel;
//    cout << "이메일을 입력하시오: ";
//    cin >> *pTemp->email;
//}

//void structPrn(namecard *pTemp);
//void structInput(namecard *pTemp);
//
//int main(int argc, const char * argv[]) {
//    namecard x[3];
//
//    structInput(x);
//    structPrn(x);
//
//    return 0;
//}
//
//void structPrn(namecard *pTemp) {
//    int i;
//
//    cout << "이름 \t\t 직업 \t 연락처 \t\t 이메일" << endl;
//    cout << "===========================================" << endl;
//
//    for(i = 0; i < 3; i++) {
//        cout << *(pTemp + i) -> name << "\t" << *(pTemp + i) -> job << "\t" << *(pTemp + i) -> tel << "\t" << *(pTemp + i) -> email << endl;
//    }
//
//    cout << "===========================================" << endl;
//}
//
//void structInput(namecard *pTemp) {
//    int i;
//
//    for(i = 0; i < 3; i++) {
//        cout << "이름을 입력하시오: ";
//        cin >> *(pTemp + i) -> name;
//        cout << "직업을 입력하시오: ";
//        cin >> *(pTemp + i) -> job;
//        cout << "연락처을 입력하시오: ";
//        cin >> *(pTemp + i) -> tel;
//        cout << "이메일을 입력하시오: ";
//        cin >> *(pTemp + i) -> email;
//    }
//}

//#define MAX 2
//
//struct student {
//    int stuNum;
//    string name;
//    int kor;
//    int eng;
//    int math;
//    int total;
//    double avg;
//    char grade;
//    int rank;
//};
//
//void enterValue(student *pStu);
//void totalF(student *pStu);
//void avgF(student *pStu);
//void gradeF(student *pStu);
//void rankF(student *pStu);
//void printF(student *pStu);
//
//int main() {
//    struct student a[MAX];
//
//    enterValue(a);
//    totalF(a);
//    avgF(a);
//    gradeF(a);
//    rankF(a);
//    printF(a);
//}
//
//void enterValue(student *pStu) {
//    int i;
//
//    cout << "학생의 성적을 입력하시오." << endl;
//
//    for(i = 0; i < MAX; i++) {
//        cout << "학번을 입력하시오:";
//        cin >> (pStu + i) -> stuNum;
//        cout << "이름을 입력하시오:";
//        cin >> (pStu + i) -> name;
//        cout << "국어점수를 입력하시오:";
//        cin >> (pStu + i) -> kor;
//        cout << "영어점수를 입력하시오:";
//        cin >> (pStu + i) -> eng;
//        cout << "수학점수를 입력하시오:";
//        cin >> (pStu + i) -> math;
//    }
//}
//
//void totalF(student *pStu) {
//    int i;
//
//    for(i = 0; i < MAX; i++) {
//        (pStu + i) -> total = (pStu + i) -> kor + (pStu + i) -> eng + (pStu + i) -> math;
//    }
//}
//
//void avgF(student *pStu) {
//    int i;
//
//    for(i = 0; i < MAX; i++) {
//        (pStu + i) -> avg = (pStu + i) -> total / 3;
//    }
//}
//
//void gradeF(student *pStu) {
//    int i;
//
//    for(i = 0; i < MAX; i++) {
//        if((pStu + i) -> avg > 90) {
//            (pStu + i) -> grade = 'A';
//        } else if ((pStu + i) -> avg > 80) {
//            (pStu + i) -> grade = 'B';
//        } else if ((pStu + i) -> avg > 70) {
//            (pStu + i) -> grade = 'C';
//        } else if ((pStu + i) -> avg > 60) {
//            (pStu + i) -> grade = 'D';
//        } else {
//            (pStu + i) -> grade = 'F';
//        }
//    }
//}
//
//void rankF(student *pStu) {
//    int i, j;
//
//    for(i = 0; i < MAX; i++) {
//        (pStu + i) -> rank = 1;
//    }
//
//    for(i = 0; i < MAX; i++) {
//        for(j = 0; j < MAX; j++) {
//            if((pStu + i) -> total > (pStu + j) -> total) {
//                ((pStu + j) -> rank)++;
//            }
//        }
//    }
//}
//
//void printF(student *pStu) {
//    int i;
//
//    cout << "학번\t\t이름\t\t국어\t\t영어\t\t수학\t\t총점\t\t평균\t\t학점\t\t석차";
//    cout << "=====================================================" << endl;
//
//    for(i = 0; i < MAX; i++) {
//        cout << (pStu + i) -> stuNum << "\t\t" << (pStu + i) -> name << "\t\t" << (pStu + i) -> kor << "\t\t" << (pStu + i) -> eng << "\t\t" << (pStu + i) -> math << "\t\t" << (pStu + i) -> total << "\t\t" << (pStu + i) -> avg << "\t\t" << (pStu + i) -> grade << "\t\t" << (pStu + i) -> rank << endl;
//    }
//
//    cout << "=====================================================" << endl;
//}

//#define MAX 100
//
//struct person {
//    string name;
//    string gender;
//    int age;
//};
//
//void enterF(person *pPer);
//void printF(person *pPer);
//
//int main() {
//    struct person a[MAX];
//
//    enterF(a);
//    printF(a);
//
//    return 0;
//}
//
//void enterF(person *pPer) {
//    int select;
//    int count = 0;
//
//    while(1) {
//        cout << count + 1 << ". ";
//        cout << "\t이름은: ";
//        cin >> (pPer + count) -> name;
//        cout << "\t성별은 <남 또는 여>: ";
//        cin >> (pPer + count) -> gender;
//        cout << "\t나이는: ";
//        cin >> (pPer + count) -> age;
//        cout << "\t계속 입력하시려면 1, 그만하려면 0을 입력하시오.";
//        cin >> select;
//
//        count++;
//
//        if(select == 0) {
//            break;
//        }
//    }
//}
//
//void printF(person *pPer) {
//    int i;
//
//    int size = sizeof pPer/sizeof pPer[0];
//
//    cout << "이름\t성별\t나이\t" << endl;
//    cout << "================================" << endl;
//
//    for(i = 0; i < size; i++) {
//        cout << (pPer + i) -> name << (pPer + i) -> gender << (pPer + i) -> age << endl;
//    }
//}

//struct Axis {
//    int x;
//    int y;
//};
//
//void enterF(Axis *axis);
//void distanceCalc(Axis *axis);
//
//int main() {
//    struct Axis a[2];
//    enterF(a);
//    distanceCalc(a);
//
//    return 0;
//}
//
//void enterF(Axis *axis) {
//    int i;
//
//    for(i = 0; i < 2; i++) {
//        cout << "x값을 입력하시오: ";
//        cin >> (axis + i) -> x;
//        cout << "y값을 입력하시오: ";
//        cin >> (axis + i) -> y;
//    }
//}
//
//void distanceCalc(Axis *axis) {
//    double result;
//    double alpha;
//    double beta;
//
//    alpha = ((axis) -> x) - ((axis + 1) -> x);
//    beta = ((axis) -> y) - ((axis + 1) -> y);
//
//    result = sqrt((alpha * alpha) + (beta * beta));
//
//    cout << "두 점 사이의 거리는 " << result << "입니다.";
//
//}

//struct emp
//{
//    int num;
//    char name[20];
//    int gi;
//    int ja;
//    int pay;
//};

//void empinput(emp* temp);
//void empbest(emp* temp);
//
//int main()
//{
//    struct emp temp[3];
//    empinput(temp);
//    empbest(temp);
//}
//
//void empinput(emp* temp)
//{
//    int i;
//    int jasu = 0;
//    for (i = 0; i < 3; i++)
//    {
//        cout << ">>사원번호? ";
//        cin >> (temp + i)->num;
//        cout << ">>이름? ";
//        cin >> (temp + i)->name;
//        cout << ">>자녀수? ";
//        cin >> (temp + i)->ja;
//        cout << ">>기본급? ";
//        cin >> (temp + i)->gi;
//        if ((temp + i)->ja == 1)
//        {
//            jasu = 100000;
//            (temp + i)->pay = (temp + i)->gi + jasu;
//        }
//
//        else if ((temp + i)->ja == 2)
//        {
//            jasu = 200000;
//            (temp + i)->pay = (temp + i)->gi + jasu;
//        }
//        else if ((temp + i)->gi == 0)
//        {
//            jasu = 0;
//            (temp + i)->pay = (temp + i)->gi + jasu;
//        }
//    }
//}
//
//void empbest(emp* temp)
//{
//    int j, max = (temp + 0)->pay;
//    int maxt = 0;
//        for (j = 1; j < 3; j++)
//        {
//            if (max < (temp + j)->pay);
//            {
//                max = (temp + j)->pay;
//                maxt = j;
//            }
//        }
//    cout << "최고 급여자는 다음과 같습니다.\n";
//    cout << "이름\t최종급여\n";
//    cout << "=========================\n";
//    cout << (temp + maxt)->name << "\t" << (temp + maxt)->pay;
//}

//struct Vector {
//    float x;
//    float y;
//};
//
//void vectorCalc(Vector *pA, Vector *pB);
//void enterF(Vector *pA, Vector *pB);
//
//int main() {
//    struct Vector a;
//    struct Vector b;
//
//    enterF(&a, &b);
//    vectorCalc(&a, &b);
//
//    return 0;
//}
//
//void enterF(Vector *pA, Vector *pB) {
//    int i;
//
//    cout << "x값을 입력하시오: ";
//    cin >> pA -> x;
//    cout << "y값을 입력하시오: ";
//    cin >> pA -> y;
//
//    cout << "x값을 입력하시오: ";
//    cin >> pB -> x;
//    cout << "y값을 입력하시오: ";
//    cin >> pB -> y;
//}
//
//void vectorCalc(Vector *pA, Vector *pB) {
//    double resultX, resultY;
//
//    resultX = pA -> x + pB -> x;
//    resultY = pA -> y + pB -> y;
//
//    cout << "벡터의 합은 " << resultX << ", " << resultY << "입니다." << endl;
//}

//struct Vector {
//    float x;
//    float y;
//};
//
//void vectorCalc(Vector *pA, Vector *pB, int *pX, int *pY);
//void enterF(Vector *pA, Vector *pB, int *pX, int *pY);
//
//int main() {
//    struct Vector a;
//    struct Vector b;
//
//    int x = 0;
//    int y = 0;
//
//    enterF(&a, &b, &x, &y);
//    vectorCalc(&a, &b, &x, &y);
//
//    return 0;
//}
//
//void enterF(Vector *pA, Vector *pB, int *pX, int *pY) {
//    int i;
//
//    cout << "x값을 입력하시오: ";
//    cin >> pA -> x;
//    cout << "y값을 입력하시오: ";
//    cin >> pA -> y;
//
//    cout << "x값의 변화량을 입력하시오: ";
//    cin >> pB -> x;
//    cout << "y값의 변화량을 입력하시오: ";
//    cin >> pB -> y;
//}
//
//void vectorCalc(Vector *pA, Vector *pB, int *pX, int *pY) {
//    double resultX, resultY;
//
//    resultX = pA -> x + *pX;
//    resultY = pA -> y + *pY;
//
//    cout << "평행이동한 점은 " << resultX << ", " << resultY << "입니다." << endl;
//}

//struct Axis {
//    int x;
//    int y;
//};
//
//void RectangleCalc(Axis *pA, Axis *pB);
//void enterF(Axis *pA, Axis *pB);
//
//int main() {
//    struct Axis a;
//    struct Axis b;
//
//    enterF(&a, &b);
//    RectangleCalc(&a, &b);
//
//    return 0;
//}
//
//void enterF(Axis *pA, Axis *pB) {
//    int i;
//
//    cout << "x값을 입력하시오: ";
//    cin >> pA -> x;
//    cout << "y값을 입력하시오: ";
//    cin >> pA -> y;
//
//    cout << "x값을 입력하시오: ";
//    cin >> pB -> x;
//    cout << "y값을 입력하시오: ";
//    cin >> pB -> y;
//}
//
//void RectangleCalc(Axis *pA, Axis *pB) {
//    double result;
//    int width;
//    int height;
//
//    width = pA -> x - pB -> x;
//    height = pA -> y - pB -> y;
//
//    result = abs(width * height);
//
//    cout << "넓이: " << result << endl;
//}

//struct score {
//    int kor[2];
//    int math[2];
//    int pe[2];
//    int speach[2];
//    int c[2];
//    double avg;
//    char grade[5];
//};
//
//void enterF(score *pS);
//void calculator(score *pS);
//
//int main() {
//    struct score a;
//
//    enterF(&a);
//    calculator(&a);
//
//    return 0;
//}
//
//void enterF(score *pS) {
//    cout << "글쓰기의 성적과 학점을 입력하시오: ";
//    cin >> pS -> kor[0] >> pS -> kor[1];
//    cout << "수학의 성적과 학점을 입력하시오: ";
//    cin >> pS -> math[0] >> pS -> math[1];
//    cout << "체육의 성적과 학점을 입력하시오: ";
//    cin >> pS -> pe[0] >> pS -> pe[1];
//    cout << "말하기의 성적과 학점을 입력하시오: ";
//    cin >> pS -> speach[0] >> pS -> speach[1];
//    cout << "C언어의 성적과 학점을 입력하시오: ";
//    cin >> pS -> c[0] >> pS -> c[1];
//}
//
//void calculator(score *pS) {
//    int x, i;
//    int korS, mathS, peS, speachS, cS;
//    double result;
//
//    x = pS -> kor[1] + pS -> math[1] + pS -> pe[1] + pS -> speach[1] + pS -> c[1];
//
//    korS = pS -> kor[0] * pS -> kor[1];
//    mathS = pS -> math[0] * pS -> math[1];
//    peS = pS -> pe[0] * pS -> pe[1];
//    speachS = pS -> speach[0] * pS -> speach[1];
//    cS = pS -> c[0] * pS -> c[1];
//
//    result = (korS + mathS + peS + speachS + cS) / x;
//
//    pS -> avg = result;
//}

//struct sub {
//    int hak;
//    string name, grade;
//};
//sub inser_t() {
//    sub a;
//    cin >> a.name >> a.hak >> a.grade;
//    return a;
//}
//double avg(sub a[]) {
//    double avg = 0;
//    int count = 0;
//    for (int i = 0;i < 5;i++) {
//        count += (a + i)->hak;
//        if ((a + i)->grade == "A+") avg += 4.5 * (a + i)->hak;
//        else if ((a + i)->grade == "A0") avg += 4.0 * (a + i)->hak;
//        else if ((a + i)->grade == "B+") avg += 3.5 * (a + i)->hak;
//        else if ((a + i)->grade == "B0") avg += 3.0 * (a + i)->hak;
//        else if ((a + i)->grade == "C+")avg += 2.5 * (a + i)->hak;
//        else if ((a + i)->grade == "C0") avg += 2.0 * (a + i)->hak;
//        else if ((a + i)->grade == "D+")avg += 1.5 * (a + i)->hak;
//        else if ((a + i)->grade == "D0")avg += 1.0 * (a + i)->hak;
//        else if ((a + i)->grade == "F") avg += 0;
//    }
//    return avg/count;
//}
//void prin_t(sub a[]) {
//    cout << "-------------------------------\n";
//    cout << "강좌명\t학점\t등급\n";
//    cout << "-------------------------------\n";
//    for (int i = 0;i < 5;i++) {
//        cout << (a + i)->name << "\t" << (a + i)->hak << "\t" << (a + i)->grade << "\n";
//    }
//    cout << "-------------------------------\n";
//    cout << "\t\t평점 : " << avg(a);
//}
//void main() {
//    sub a[5];
//    for (int i = 0;i < 5;i++) {
//        a[i] = inser_t();
//    }
//    prin_t(a);
//}

//struct num {
//    string name, home, phone;
//};
//void search(string name, num a[]) {
//    for (int i = 0;i < 3;i++) {
//        if (name == (a + i)->name) {
//            cout << "집전화번호: " << (a + i)->home << "\n";
//            cout << "휴대폰번호: " << (a + i)->phone << "\n";
//
//        }
//    }
//}
//void main() {
//    num a[3];
//    string name;
//    for (int i = 0;i < 3;i++) {
//        cout << "이름을 입력하시오.: ";
//        cin >> a[i].name;
//        cout << "집전화번호를 입력하시오.: ";
//        cin >> a[i].home;
//        cout << "휴대폰번호를 입력하시오.: ";
//        cin >> a[i].phone;
//    }
//    cout << "검색할 이름을 입력하시오.: ";
//    cin >> name;
//    search(name, a);
//}

//struct priv {
//    string name, num;
//    int mon;
//};
//priv make() {
//    priv a;
//    cout << "이름 : ";
//    cin >> a.name;
//    cout << "전화번호: ";
//    cin >> a.num;
//    cout << "금액: ";
//    cin >> a.mon;
//    return a;
//}
//void inser_t(priv a[], int n) {
//    string name;
//    int mon;
//    cout << "등록된 계좌의 이름을 입력하세요.: ";
//    cin >> name;
//    cout << "입금할 금액을 입력하세요.: ";
//    cin >> mon;
//    for (int i = 0;i < n;i++) {
//        if (name == (a + i)->name) {
//            (a + i)->mon += mon;
//            cout << "잔액 : " << (a + i)->mon << "\n";
//        }
//    }
//}
//void outpu_t(priv a[], int n) {
//    string name;
//    int mon;
//    cout << "등록된 계좌의 이름을 입력하세요.: ";
//    cin >> name;
//    cout << "출금할 금액을 입력하세요.: ";
//    cin >> mon;
//    for (int i = 0;i < n;i++) {
//        if (name == (a + i)->name) {
//            (a + i)->mon -= mon;
//            cout << "잔액 : " << (a + i)->mon << "\n";
//        }
//    }
//}
//void show(priv a[], int n) {
//    string name;
//    cout << "조회할 계좌의 이름을 입력하세요.: ";
//    cin >> name;
//    cout << "--------------\n";
//    for (int i = 0;i < n;i++) {
//        if (name == (a + i)->name) {
//            cout << "이름: " << (a + i)->name << "\n";
//            cout << "번호: " << (a + i)->num << "\n";
//            cout << "잔액: " << (a + i)->mon << "\n";
//        }
//    }
//    cout << "---------------\n\n";
//}
//void main() {
//    priv a[5];
//    int n = 0, sel;
//    cout << "1.계좌생성\t2.입금\t3.출금\t4.잔액조회\t5.종료\n";
//    while (true) {
//        cout << "기능을 선택하시오: ";
//        cin >> sel;
//        switch (sel)
//        {
//            case 1:
//                if (n > 4) {
//                    cout << "공간 부족" << "\n";
//                    break;
//                }
//                a[n]=make();
//                n++;
//                break;
//            case 2:
//                inser_t(a, n);
//                break;
//            case 3:
//                outpu_t(a, n);
//                break;
//            case 4:
//                show(a, n);
//                break;
//            case 5:
//                return;
//        default:
//            break;
//        }
//    }
//}
