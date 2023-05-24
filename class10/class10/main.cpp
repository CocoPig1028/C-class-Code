//
//  main.cpp
//  class10
//
//  Created by 박대영 on 2023/05/15.
//

#include <iostream>
#include <string.h>
using namespace std;

//class Circle {
//public:
//    int radius;
//    double getArea();
//};
//
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//int main() {
//    Circle donut;
//    donut.radius = 1;
//    double area = donut.getArea();
//
//    cout << "도넛의 면적은: " << area << endl;
//
//    Circle pizza;
//    pizza.radius = 30;
//    area = pizza.getArea();
//
//    cout << "피자의 면적은: " << area << endl;
//
//    return 0;
//}

//class Rectangle {
//public:
//    int width;
//    int height;
//    double getArea();
//};
//
//double Rectangle::getArea() {
//    return(width * height / 2);
//}
//
//struct RectangleS {
//    int width;
//    int height;
//    double area;
//};
//
//int main() {
//    Rectangle rect;
//    rect.width = 3;
//    rect.height = 5;
//    cout << "사각형의 면적: " << rect.getArea() << endl;
//
//    struct RectangleS r;
//    r.width = 3;
//    r.height = 5;
//    r.area = r.width * r.height / 2;
//    cout << "사각형의 면적: " << r.area << endl;
//}

//class Rectangle {
//    int width;
//    int height;
//public:
//    Rectangle();
//    Rectangle(int w, int h);
//
//    double getArea();
//};
//
//Rectangle::Rectangle() {
//    width = 3;
//    height = 5;
//}
//
//Rectangle::Rectangle(int w, int h) {
//    width = w;
//    height = h;
//}
//
//double Rectangle::getArea() {
//    return(width * height);
//}
//
//int main() {
//    int w, h;
//
//    cout << "밑변과 높이를 입력하시오: ";
//    cin >> w >> h;
//
//    Rectangle rect(w, h);
//    double area = rect.getArea();
//    cout << "사각형의 면적: " << area << endl;
//
//    Rectangle rectN;
//    area = rectN.getArea();
//    cout << "사각형의 면적: " << area << endl;
//
//}

//class Circle {
//private:
//    int radius;
//public:
//    Circle();
//    Circle(int r);
//    double getArea();
//};
//
//Circle::Circle() {
//    radius = 1;
//    cout << "반지름: " << radius << endl;
//}
//
//Circle::Circle(int r) {
//    radius = r;
//    cout << "반지름: " << radius << endl;
//}
//
//double Circle::getArea() {
//    return(3.14 * radius * radius);
//}
//
//int main() {
//    Circle donut;
//    double area = donut.getArea();
//    cout << "원넓이: " << area << endl;
//
//    Circle pizza(30);
//    area = pizza.getArea();
//    cout << "원넓이: " << area << endl;
//}

//class Rectangle {
//private:
//    int width1;
//    int width2;
//public:
//    Rectangle();
//    Rectangle(int w1);
//    Rectangle(int w1, int w2);
//
//    bool isSquare();
//};
//
//Rectangle::Rectangle() {
//    int width1 = 5;
//    int width2 = 5;
//
//    cout << "넓이1: " << width1 << "넓이2: " << width2 << endl;
//}
//
//Rectangle::Rectangle(int w1) {
//    int width1 = width2 = w1;
//
//    cout << "넓이1: " << width1 << "넓이2: " << width2 << endl;
//}
//
//Rectangle::Rectangle(int w1, int w2) {
//    int width1 = w1;
//    int width2 = w2;
//
//    cout << "넓이1: " << width1 << "넓이2: " << width2 << endl;
//}
//
//bool Rectangle::isSquare() {
//    if(width1 == width2) {
//        return true;
//    } else {
//        return false;
//    }
//}
//
//int main() {
//    Rectangle rect1;
//    Rectangle rect2(4);
//    Rectangle rect3(3, 5);
//
//    if(rect1.isSquare()) {
//        cout << "rect1은 정사각형입니다." << endl;
//    } else {
//        cout << "rect1는 정사각형이 아닙니다." << endl;
//    }
//    if(rect2.isSquare()) {
//        cout << "rect2은 정사각형입니다." << endl;
//    } else {
//        cout << "rect2는 정사각형이 아닙니다." << endl;
//    }
//    if(rect3.isSquare()) {
//        cout << "rect3은 정사각형입니다." << endl;
//    } else {
//        cout << "rect3는 정사각형이 아닙니다." << endl;
//    }
//
//    return 0;
//}

//class Circle {
//public:
//    int radius;
//
//    Circle();
//    Circle(int r);
//    ~Circle();
//    double getArea();
//};
//
//Circle::Circle() {
//    radius = 1;
//}
//
//Circle::Circle(int r) {
//    radius = r;
//}
//
//Circle::~Circle() {
//    cout << "반지름: " << radius << " 원 소멸" << endl;
//}
//
//double Circle::getArea() {
//    return (3.14 * radius * radius);
//}
//
//int main() {
//    Circle donut;
//    Circle pizza(30);
//
//    return 0;
//}

//class Tower {
//    int height;
//
//public:
//    Tower();
//    Tower(int h);
//
//    int getHeight();
//};
//
//Tower::Tower() {
//    height = 1;
//}
//
//Tower::Tower(int h) {
//    height = h;
//}
//
//int Tower::getHeight() {
//    return height;
//}
//
//int main() {
//    Tower myTower;
//    Tower seoulTower(30);
//
//    cout << "myTower의 높이는 " << myTower.getHeight() << "입니다." << endl;
//    cout << "seoulTower의 높이는 " << seoulTower.getHeight() << "입니다." << endl;
//}

//class Date {
//private:
//    int year;
//    int month;
//    int day;
//public:
//    Date(int y, int m, int d);
//    int getYear();
//    int getMonth();
//    int getDay();
//};
//
//Date::Date(int y, int m, int d) {
//    year = y;
//    month = m;
//    day = d;
//}
//
//int Date::getYear() {
//    return year;
//}
//
//int Date::getMonth() {
//    return month;
//}
//
//int Date::getDay() {
//    return day;
//}
//
//int main() {
//    Date birth(2014, 3, 20);
//    cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
//}

//class Account {
//private:
//    string cName;
//    int cNum;
//    int cCharge;
//
//public:
//    Account(string name, int num, int charge);
//
//    string getOwner();
//    int inquiry();
//    int withdraw(int moneyW);
//    int deposit(int moneyD);
//};
//
//Account::Account(string name, int num, int charge) {
//    cName = name;
//    cNum = num;
//    cCharge = charge;
//}
//
//string Account::getOwner() {
//    return cName;
//}
//
//int Account::inquiry() {
//    return cCharge;
//}
//
//int Account::deposit(int moneyD) {
//    cCharge = cCharge + moneyD;
//    return cNum;
//}
//
//int Account::withdraw(int moneyW) {
//    cCharge = cCharge - moneyW;
//    return cNum;
//}
//
//int main() {
//    Account a("kitae", 1, 5000);
//    a.deposit(50000);
//    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//    int money = a.withdraw(20000);
//    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//}
