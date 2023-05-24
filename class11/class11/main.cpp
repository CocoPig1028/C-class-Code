//
//  main.cpp
//  class11
//
//  Created by 박대영 on 2023/05/22.
//

#include <iostream>
using namespace std;

//class Circle {
//    int radius;
//public:
//    Circle() {
//        radius = 1;
//    }
//    Circle(int r) {
//        radius = r;
//    }
//    double getArea();
//};
//
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//int main() {
//    Circle donut;
//    Circle pizza(30);
//
//    cout << donut.getArea() << endl;
//
//    Circle *p;
//    p = &donut;
//
//    cout << p -> getArea() << endl;
//    cout << (*p).getArea() << endl;
//
//    p = &pizza;
//    cout << p -> getArea() << endl;
//    cout << (*p).getArea() << endl;
//
//    return 0;
//}


//class Circle {
//    int radius;
//public:
//    Circle() {
//        radius = 1;
//    }
//    Circle(int r) {
//        radius = r;
//    }
//    void setRadius(int r) {
//        radius = r;
//    }
//    double getArea();
//};
//
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//int main() {
//    Circle circleArray[3];
//
//    circleArray[0].setRadius(10);
//    circleArray[1].setRadius(20);
//    circleArray[2].setRadius(30);
//
//    for(int i = 0; i < 3; i++) {
//        cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
//    }
//
//    Circle *p;
//    p = circleArray;
//
//    for(int i = 0; i < 3; i++) {
//        cout << "Circle " << i << "의 면적은 " << (p + i) -> getArea() << endl;
//    }
//
//    return 0;
//}

//class Circle {
//    int radius;
//public:
//    Circle() {
//        radius = 1;
//    }
//    Circle(int r) {
//        radius = r;
//    }
//    double getArea();
//};
//
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//int main() {
//    Circle circleArray[3] = {Circle(10), Circle(20), Circle()};
//
//        for(int i = 0; i < 3; i++) {
//            cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
//        }
//
//        Circle *p;
//        p = circleArray;
//
//        for(int i = 0; i < 3; i++) {
//            cout << "Circle " << i << "의 면적은 " << (p + i) -> getArea() << endl;
//        }
//
//    return 0;
//}

//class Circle {
//    int radius;
//public:
//    Circle() {
//        radius = 1;
//    }
//    Circle(int r) {
//        radius = r;
//    }
//    double getArea();
//};
//
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//int main() {
//    Circle circles[2][3] = {
//        {Circle(1), Circle(2), Circle(3)},
//        {Circle(4), Circle(5), Circle(6)}
//    };
//
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 3; j++) {
//            cout << "Circle [" << i << "," << j << "]의 면적은 ";
//            cout << circles[i][j].getArea() << endl;
//        }
//    }
//
//    return 0;
//}

//class Color {
//    int red, green, blue;
//public:
//    Color() {
//        red = green = blue = 0;
//    }
//    Color(int r, int g, int b) {
//        red = r;
//        green = g;
//        blue = b;
//    }
//
//    void setColor(int r, int g, int b) {
//        red = r;
//        green = g;
//        blue = b;
//    }
//    void show() {
//        cout << red << ' ' << green << ' ' << blue << ' ' << endl;
//    }
//};
//
//int main() {
//    Color screenColor(255, 0, 0);
//
//    Color *p;
//    p = &screenColor;
//
//    p -> show();
//    Color colors[3];
//
//    p = colors;
//
//    (p) -> setColor(255, 0, 0);
//    (p + 1) -> setColor(0, 255, 0);
//    (p + 2) -> setColor(0, 0, 255);
//
//    for(int i = 0; i < 3; i++) {
//        (p + i) -> show();
//    }
//}

//class Circle {
//    int radius;
//public:
//    void setRadius(int radius) {
//        this->radius = radius;
//    }
//    double getArea() {
//        return (3.14 * radius * radius);
//    }
//};
//
//int main() {
//    int count = 0;
//    int x = 0;
//    Circle circles[3];
//
//    Circle *p;
//    p = circles;
//
//    for(int i = 0; i < 3; i++) {
//        cout << "원 " << i + 1 << "의 반지름 >> ";
//        cin >> x;
//
//        (p + i) -> setRadius(x);
//
//        if(((p + i) -> getArea()) > 100) {
//            count++;
//        }
//    }
//
//    cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
//}

//int* arr = (int*)malloc(sizeof(int));

//int main() {
//    int n;
//    int sum = 0;
//
//    cout << "입력할 정수의 개수는?";
//    cin >> n;
//
//    int *p = new int[n];
//
//    for(int i = 0; i < n; i++) {
//        cout << i + 1 << "번째 정수: ";
//        cin >> *(p + i);
//    }
//
//    for(int i = 0; i < n; i++) {
//        sum += *(p + i);
//    }
//
//    cout << "평균: " << sum/n << endl;
//
//    delete  [] p;
//
//    return 0;
//}

//class Circle {
//    int radius;
//public:
//    Circle() {
//        radius = 1;
//        cout << "생성자 실행 radius = " << radius << endl;
//    }
//    Circle(int r) {
//        radius = r;
//        cout << "생성자 실행 radius = " << radius << endl;
//    }
//    ~Circle() {
//        cout << "소멸자 실행 radius = " << radius << endl;
//    }
//
//    void setRadius(int r) {
//        radius = r;
//    }
//    double getArea() {
//        return (3.14 * radius * radius);
//    }
//};
//
//int main() {
//    Circle *p, *q;
//    p = new Circle;
//    q = new Circle(30);
//
//    cout << p -> getArea() << endl << q -> getArea() << endl;
//
//    delete p;
//    delete q;
//}

//class Circle {
//    int radius;
//public:
//    Circle() {
//        radius = 1;
//    }
//    ~Circle();
//
//    void setRadius(int r) {
//        radius = r;
//    }
//    double getArea() {
//        return (3.14 * radius * radius);
//    }
//};
//
//int main() {
//    int n, radius;
//    int count = 0;
//
//    cout << "생성하고자 하는 원의 개수 >>";
//    cin >> n;
//
//    Circle *pArray = new Circle [n];
//    for(int i = 0; i < n; i++) {
//        cout << "원" << (i + 1) << ": ";
//        cin >> radius;
//
//        (pArray + i) -> setRadius(radius);
//    }
//
//    for(int i = 0; i < n; i++) {
//        cout << pArray -> getArea() << ' ';
//
//        if((pArray + i) -> getArea() >= 100 && (pArray + i) -> getArea() <= 200) {
//            count++;
//        }
//    }
//
//    cout << endl << "면적이 100에서 200 사이인 원의 개수는 >> " << count << endl;
//
//    delete [] pArray;
//
//}

//int main() {
//    int sum = 0;
//
//    int *p = new int[5];
//
//    for(int i = 0; i < 5; i++) {
//        cout << i + 1 << "번째 정수: ";
//        cin >> *(p + i);
//    }
//
//    for(int i = 0; i < 5; i++) {
//        sum += *(p + i);
//    }
//
//    cout << "평균: " << sum/5 << endl;
//
//    delete  [] p;
//
//    return 0;
//}

class Integer {
    int intNum;
public:
    void setSum(int num) {
        intNum = num;
    }
    int getNum() {
        return intNum;
    }
};

int main() {
    int num, sum;

    Integer *pAvg = new Integer[5];

    for(int i = 0; i < 5; i++) {
        cout << "정수" << (i + 1) << ">> ";
        cin >> num;

        (pAvg + i) -> setSum(num);
    }

    for(int i = 0; i < 5; i++) {
        sum += (pAvg + i) -> getNum();
    }

    cout << sum/5 << endl;
    delete [] pAvg;
}

//class Circle {
//    int radius;
//public:
//    Circle() {
//        radius = 1;
//    }
//    ~Circle();
//
//    void setRadius(int r) {
//        radius = r;
//    }
//    double getArea() {
//        return (3.14 * radius * radius);
//    }
//};
//
//int main() {
//    int n, radius;
//    int count = 0;
//
//    cout << "생성하고자 하는 원의 개수 >>";
//    cin >> n;
//
//    Circle *pArray = new Circle [n];
//    for(int i = 0; i < n; i++) {
//        cout << "원" << (i + 1) << ": ";
//        cin >> radius;
//
//        (pArray + i) -> setRadius(radius);
//    }
//
//    for(int i = 0; i < n; i++) {
//        cout << pArray -> getArea() << ' ';
//
//        if((pArray + i) -> getArea() >= 100) {
//            count++;
//        }
//    }
//
//    cout << endl << "면적이 100보다 큰 원의 개수는 >> " << count << endl;
//
//    delete [] pArray;
//
//}
