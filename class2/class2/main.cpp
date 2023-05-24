//
//  main.cpp
//  class2
//
//  Created by 박대영 on 2023/03/20.
//

#include <iostream>
using namespace std;

//int main() {
//    int x;
//
//    cout << "정수 값을 입력하시오.: ";
//    cin >> x;
//
//    if(x < 0) {
//        cout << "음수를 입력하였습니다. 절댓값을 구하겠습니다.\n";
//
//        x = -x;
//
//        cout << "절댓값 => " << x <<endl;
//    } else {
//        cout << "절댓값 => " << x <<endl;
//    }
//    return 0;
//}

//int main() {
//    int x;
//
//    cout << "정수값을 입력하시오.: ";
//    cin >> x;
//
//    if(x % 2 == 1) {
//        cout << "이 정수는 홀수입니다.\n";
//    } else {
//        cout << "이 정수는 짝수입니다.\n";
//    }
//    return 0;
//}

//int main() {
//    int score;
//    char grade;
//
//    cout << "점수를 입력하시오.: ";
//    cin >> score;
//
//    if(score >= 90) {
//        grade = 'A';
//    } else if(score >= 80) {
//        grade = 'B';
//    } else if(score >= 70) {
//        grade = 'C';
//    } else if(score >= 60) {
//        grade = 'D';
//    } else {
//        grade = 'F';
//    }
//
//    cout << "입력한 점수 " << score << "은 " << grade << " 학점입니다.\n";
//}

//int main () {
//    int i = 200;
//
//    cout << "i가 300이냐? ";
//
//    if(i == 300) {
//        cout << "true\n";
//    } else {
//        cout << "false\n";
//    }
//
//    cout << "i가 300이냐? ";
//
//    if(i = 300) {
//        cout << "true\n";
//    } else {
//        cout << "false\n";
//    }
//
//    return 0;
//}

//int main() {
//    int score;
//    char grade;
//
//    cout << "점수를 입력하시오.: ";
//    cin >> score;
//
//    switch (score/10) {
//        case 10:
//            grade = 'A';
//            break;
//
//        case 9:
//            grade = 'A';
//            break;
//
//        case 8:
//            grade = 'B';
//            break;
//
//        case 7:
//            grade = 'C';
//            break;
//
//        case 6:
//            grade = 'D';
//            break;
//
//        default:
//            grade = 'F';
//            break;
//    }
//
//    cout << "입력한 점수 " << score << "은 " << grade << " 학점입니다.\n";
//
//    return 0;
//}

//int main() {
//    char alphabet;
//
//    cout << "알파벳을 입력하시오.: ";
//    cin >> alphabet;
//
//    switch (alphabet) {
//        case 'a':
//            cout << "모음입니다.\n";
//            break;
//
//        case 'e':
//            cout << "모음입니다.\n";
//            break;
//
//        case 'i':
//            cout << "모음입니다.\n";
//            break;
//
//        case 'o':
//            cout << "모음입니다.\n";
//            break;
//
//        case 'u':
//            cout << "모음입니다.\n";
//            break;
//
//        default:
//            cout << "자음입니다.\n";
//            break;
//    }
//
//    return 0;
//}

//int main() {
//    int select;
//    float result;
//
//    while(1) {
//        cout << "원하시는 메뉴를 입력하시오.\n";
//        cout << "1. 삼각형의 면적\n";
//        cout << "2. 원의 면적\n";
//        cout << "3. 사각형의 면적\n";
//        cout << "4. 종료\n";
//        cout << ">>";
//        cin >> select;
//
//        switch (select) {
//            case 1:
//                float x,y;
//                cout << "밑변의 길이를 입력하시오. ";
//                cin >> x;
//                cout << "높이를 입력하시오.: ";
//                cin >> y;
//
//                result = x * y / 2;
//
//                cout << "결과는 다음과 같습니다." << result << endl;
//
//                break;
//
//            case 2:
//                float r;
//                cout << "반지름의 길이를 입력하시오.";
//                cin >> r;
//
//                result = 3.14 * r * r;
//
//                cout << "결과는 다음과 같습니다." << result << endl;
//
//                break;
//
//            case 3:
//                float a,b;
//                cout << "밑변의 길이를 입력하시오.";
//                cin >> a;
//                cout << "높이를 입력하시오.";
//                cin >> b;
//
//                result = a * b;
//
//                cout << "결과는 다음과 같습니다." << result << endl;
//
//                break;
//
//            case 4:
//                cout << "종료합니다.\n";
//
//                break;
//
//            default:
//                cout << "잘못 선택하셨습니다.\n";
//                break;
//        }
//
//        if(select == 4) {
//            break;
//        }
//    }
//    return 0;
//}

//int main() {
//    int mid;
//    int final;
//    int report;
//    int s;
//    float score;
//    char grade;
//
//    cout << "Enter your middle score: ";
//    cin >> mid;
//    cout << "Enter your final score: ";
//    cin >> final;
//    cout << "Enter your Report score: ";
//    cin >> report;
//    cout << "Enter your attendace score: ";
//    cin >> s;
//
//    score = (mid + final + report + s) / 4.0;
//
//    switch (score / 10) {
//        case 10:
//            grade = 'A';
//            break;
//
//        case 9:
//            grade = 'A';
//            break;
//
//        case 8:
//            grade = 'B';
//            break;
//
//        case 7:
//            grade = 'C';
//            break;
//
//        case 6:
//            grade = 'D';
//            break;
//
//        default:
//            grade = 'E';
//            break;
//    }
//
//    cout << "score: " << score << endl;
//    cout << "grade: " << grade << endl;
//    return 0;
//}

//int main() {
//    int hour;
//    float money;
//
//    cout << "일주일동안 일한 시간을 입력하시오.: ";
//    cin >> hour;
//
//    if(hour > 30) {
//        money = (hour - 30) * (3100 * 1.2) + (30 * 3100);
//    } else {
//        money = hour * 3100;
//    }
//
//    cout << "임금은 " << money << "원 입니다.";
//
//    return 0;
//}

//int main() {
//    float kg;
//    float cm;
//    int age;
//    float per;
//
//    cout << "enter your age: ";
//    cin >> age;
//    cout << "enter your weight: ";
//    cin >> kg;
//    cout << "enter your stature: ";
//    cin >> cm;
//
//    cm = cm / 100;
//    per = kg / (cm * cm);
//
//    switch(age/10) {
//        case 2:
//            if(per > 30) {
//                cout << "비만입니다.\n";
//            } else if(per > 24) {
//                cout << "과체중입니다.\n";
//            } else if(per > 18) {
//                cout << "표준체중입니다.\n";
//            } else {
//                cout << "저체중입니다.\n";
//            }
//            break;
//
//        case 3:
//            if(per > 30) {
//                cout << "비만입니다.\n";
//            } else if(per > 25) {
//                cout << "과체중입니다.\n";
//            } else if(per > 18.5) {
//                cout << "표준체중입니다.\n";
//            } else {
//                cout << "저체중입니다.\n";
//            }
//            break;
//
//        default:
//            cout << "범위 외의 나이입니다.\n";
//            break;
//    }
//
//    cout << per;
//}

int main() {
    int money = 0;
    
    cout << "**********************************************\n";
    cout << "McDowell's Restaurant\n";
    cout << "**********************************************\n";
    cout << "Make your Selection from the menu below!\n";
    cout << "1. Regular Hamburger                     $0.89\n";
    cout << "2. Regular Cheeseburger                  $0.99\n";
    cout << "3. Fish Sandwich                         $1.29\n";
    cout << "4. Half - poundburger                    $2.49\n";
    cout << "5. French Fries                          $0.79\n";
    cout << "6. Large soft drink                      $0.99\n";
    cout << "**********************************************\n";
    
    while(1) {
        int select;
        char choice;
        
        cout << "select number >> ";
        cin >> select;
        
        switch (select) {
            case 1:
                money = money + 0.89;
                break;
                
            case 2:
                money = money + 0.99;
                break;
                
            case 3:
                money = money + 1.29;
                break;
                
            case 4:
                money = money + 2.49;
                break;
                
            case 5:
                money = money + 0.79;
                break;
                
            case 6:
                money = money + 0.89;
                break;
                
            default:
                break;
        }
        
        cout << "추가로 주문하시겠습니까 >> Y/N ";
        cin >> choice;
        
        if(choice == 'n') {
            break;
        } else if (choice == 'y') {
            cout << "continue\n";
        } else {
            cout << "Please Enter correct Choice\n";
            break;
        }
    }
    
    cout << "Please Pay >> " << money << " $";
    cout << "Thank you for eating at McDowell's.";
}
