//
//  main.cpp
//  class4
//
//  Created by 박대영 on 2023/04/03.
//

#include <iostream>
#include <math.h>

using namespace std;

//void sum(int a, int b) {
//    cout << "a + b = " << a + b << endl;
//    a = a + 10;
//    cout << "a + b = " << a + b << endl;
//}
//
//int main() {
//    int a = 10, b = 20;
//    sum(a, b);
//    sum(4, 5);
//    cout << a + b;
//
//    return 0;
//}
//double CALC(int x, int y){
//    double value;
//    double z = tan(y);
////    value = x * 3.14 / 180 * y;
//
//
//    return value;
//}
//
//int main() {
//    int x, y;
//    double value;
//    cout << "밑변의 길이와 높이를 입력하시오: ";
//    cin >> x >> y;
//
//    value = CALC(x, y);
//
//    cout << value;
//}
//void PRINTVALUE(int a, int b) {
//    if(a % b == 0) {
//        cout << a << "는 " << b << "의 배수입니다.\n";
//    } else {
//        cout << a << "는 " << b << "의 배수가 아닙니다.\n";
//    }
//}
//
//void DOUBLE(int x, int y) {
//    if(x > y) {
//        PRINTVALUE(x, y);
//    } else if(x < y) {
//        PRINTVALUE(y, x);
//    } else {
//        cout << "두 수는 같은 수입니다.\n";
//    }
//}
//
//int main() {
//    int x, y;
//    cout << "배수를 판단할 두 정수를 입력하시오.\n";
//    cout << "첫번째 정수: ";
//    cin >> x;
//    cout << "두번째 정수: ";
//    cin >> y;
//
//    DOUBLE(x, y);
//}
//void EC(int a, int b, int c, double d) {
//    double x1, x2;
//
//    x1 = ( -b + sqrt(d) ) / ( 2.0 * a );
//    x2 = ( -b - sqrt(d) ) / ( 2.0 * a );
//
//    cout << "주어진 이차방정식은 두개의실근 " << x1 << ", " << x2 << "를 가집니다.\n";
//}
//
//void ECM(int a, int b, int c, int d) {
//    double x1, x2;
//
//    x1 = ( -b / (2.0 * a) );
//    x2 = sqrt(abs(d)) / ( 2.0 * a );
//    if ( x1 == 0 )
//        cout << "주어진 이차방정식은 두개의실근 " << x2 << ", " << -x2 << "를 가집니다.\n";
//        else
//        cout << "주어진 이차방정식은 두개의실근 " << x1 << ", " << x2 << ", " << x1 << ", " << -x2 << "를 가집니다.\n";
//}
//
//void ECL(int a, int b, int c, double d) {
//    double x1;
//
//    x1 = -b / ( 2.0 * a );
//    cout << "주어진 이차방정식은 중근 " << x1 << "을 가집니다.\n";
//}
//
//void FUNCD(int a, int b, int c) {
//    double d;
//    d = b * b - 4.0 * a * c;
//
//    if(d < 0) {
//        EC(a, b, c, d);
//    } else if(d == 0) {
//        ECL(a, b, c, d);
//    } else {
////        ECM(a, b, c, d);
//        cout << "값이 없습니다.";
//    }
//}
//
//int main()
//{
//    double a, b, c;
//
//    cout << "세수를입력하세요(a b c) : ";
//    scanf("%lf %lf %lf", &a, &b, &c);
//
//    FUNCD(a, b, c);
//
//    return 0;
//}

//void sub();
//
//int main() {
//    for(int i = 1; i <= 5; i++) {
//        cout << i << "\t================\n";
//        sub();
//    }
//}
//
//void sub() {
//    auto int a = 0;
//    static int b = 0;
//    int c = 0;
//
//    a += 100;
//    b += 100;
//    c += 100;
//
//    cout << "auto a = " << a << endl;
//    cout << "static b = " << b << endl;
//    cout << "int c = " << c << endl;
//}

//int a=20;
//int b=30;
//
//void sub1( );
//void sub2( );
//
//int main( )
//{
//    cout<<"\n main의 a (file1.cpp) ==> " << a;
//
//    sub1();
//    sub2();
//    sub2();
//
//    cout<<"\n main의 a (file1.cpp) ==> " << a;
//    cout<<"\n main의 b (file1.cpp) ==> " << b <<"\n";
//
//    return 0;
//}

