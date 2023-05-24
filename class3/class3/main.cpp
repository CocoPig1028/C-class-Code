//
//  main.cpp
//  class3
//
//  Created by 박대영 on 2023/03/27.
//

#include <iostream>
using namespace std;

//int main() {
//    int total = 1;
//    int i, x;
//
//    cout << "값을 입력하시오.";
//    cin >> x;
//
//    for(i = 1; i <= x; i++) {
//        total *= i;
//    }
//
//    cout << x << " 팩토리얼 값은 " << total << "입니다.\n";
//
//    return 0;
//}

//int main() {
//    int i;
//    int money;
//    cout << "정상가격\t30% 세일 가격\n";
//
//    for(i = 10000; i <= 20000; i += 1000) {
//        money = i - (i * 0.3);
//        cout << i << "원" << "\t" << money << "원" << endl;
//    }
//
//    return 0;
//}

//int main() {
//    int i,j;
//
//    for(i = 0; i <= 6; i += 3) {
//        for(j = 1; j <= 9; j++) {
//            if(j % 9 == 1) {
//                cout << i + 1 << "단\t\t\t\t";
//                cout << i + 2 << "단\t\t\t\t";
//                cout << i + 3 << "단\t\t\t\t\n";
//
//            }
//            cout << i + 1 << " * " << j << " = " << (i + 1) * (j) << "\t\t";
//            cout << i + 2 << " * " << j << " = " << (i + 2) * (j) << "\t\t";
//            cout << i + 3 << " * " << j << " = " << (i + 3) * (j) << "\t\t\n";
//
//
//        }
//        cout << "\n";
//    }
//}

//int main() {
//    int i,j,k;
//    int sum;
//
//    cout << "조건을 만족하는 경우의 수는 다음과 같습니다.\n";
//
//    for(i = 0; i <= 5; i++) {
//        for(j = 0; j <= 5; j++) {
//            for(k = 0; k <= 5; k++) {
//                sum = (5 * i) + (3 * j) + (2 * k);
//
//                if(sum >= 23 && sum <= 25) {
//                    cout << "5g: " << i << "개\t" << "3g: " << j << "개\t" << "2g: " << k << "개 \t\t";
//                    cout << sum << "g \n";
//                }
//            }
//        }
//    }
//
//    return 0;
//}

//int main() {
//    int l, d;
//    float value;
//
//    cout << "연료의 양을 입력하시오. (0입력 시 종료) ";
//    cin >> l;
//
//    while(l != 0) {
//
//        cout << "주행거리를 입력하시오. ";
//        cin >> d;
//
//        if(l == 0) {
//            cout << "프로그램을 종료합니다.";
//        } else {
//            value = d / l;
//            cout << "연비는 " << value << " km/l 입니다.\n";
//        }
//
//        cout << "연료의 양을 입력하시오. (0입력 시 종료) ";
//        cin >> l;
//    }
//
//    return 0;
//}

//int main() {
//    int i;
//    int total = 0;
//
//    for(i = 1; i <= 10; i++) {
//        if(i % 2 == 0) {
//            continue;
//            total += i;
//        }
//
//        cout << "i가 " << i << "일 때 for문을 벗어남\n";
//        cout << "total: " << total << endl;
//    }
//
//    return 0;
//}

//int main() {
//    int l, d;
//    float value;
//
//    cout << "연료의 양을 입력하시오. (0입력 시 종료) ";
//    cin >> l;
//
//    while(0) {
//
//        cout << "주행거리를 입력하시오. ";
//        cin >> d;
//
//        if(l == 0) {
//            goto exit_while;
//        } else {
//            value = d / l;
//            cout << "연비는 " << value << " km/l 입니다.\n";
//        }
//
//        cout << "연료의 양을 입력하시오. (0입력 시 종료) ";
//        cin >> l;
//    }
//    exit_while:
//    cout << "프로그램을 종료합니다.";
//
//    return 0;
//}

//int main() {
//    float money;
//    char yesNo;
//
//    while(1) {
//        cout << "**********************************************\n";
//        cout << "McDowell's Restaurant\n";
//        cout << "**********************************************\n";
//        cout << "Make your Selection from the menu below!\n";
//        cout << "1. Regular Hamburger                     $0.89\n";
//        cout << "2. Regular Cheeseburger                  $0.99\n";
//        cout << "3. Fish Sandwich                         $1.29\n";
//        cout << "4. Half - poundburger                    $2.49\n";
//        cout << "5. French Fries                          $0.79\n";
//        cout << "6. Large soft drink                      $0.99\n";
//        cout << "**********************************************\n";
//
//        while(1) {
//            int select;
//            char choice;
//
//            cout << "select number >> ";
//            cin >> select;
//
//            switch (select) {
//                case 1:
//                    money = money + 0.89;
//                    break;
//
//                case 2:
//                    money = money + 0.99;
//                    break;
//
//                case 3:
//                    money = money + 1.29;
//                    break;
//
//                case 4:
//                    money = money + 2.49;
//                    break;
//
//                case 5:
//                    money = money + 0.79;
//                    break;
//
//                case 6:
//                    money = money + 0.89;
//                    break;
//
//                default:
//                    break;
//            }
//
//            cout << "추가로 주문하시겠습니까 >> Y/N ";
//            cin >> choice;
//
//            if(choice == 'n') {
//                break;
//            } else if (choice == 'y') {
//                cout << "continue\n";
//            } else {
//                cout << "Please Enter correct Choice\n";
//                break;
//            }
//        }
//
//
//        cout << "Please Pay >> " << money << " $\n";
//        cout << "Thank you for eating at McDowell's.\n";
//
//        cout << "주문하시겠습니까(Y/N): ";
//        cin >> yesNo;
//
//        if(yesNo =='n') {
//            cout << "프로그램을 종료합니다.\n";
//            cout << "\n\n\n\n";
//            break;
//        }
//    }
//
//    return 0;
//}

//int main() {
//    int fruit, quantity;
//    char select;
//    int money = 0;
//
//    while(1) {
//        cout << "당신은 어떤 과일을 좋아하십니까?\n";
//        cout << "1. 사과\t2. 바나나\t3. 오렌지";
//        cout << "원하는 과일의 번호를 입력하시오. -> ";
//        cin >> fruit;
//
//        cout << "당신이 구입할 과일의 개수를 입력하시오. -> ";
//        cin >> quantity;
//
//        switch(fruit) {
//            case(1):
//                money = money + (500 * quantity);
//                break;
//
//            case(2):
//                money = money + (800 * quantity);
//                break;
//
//            case(3):
//                money = money + (1000 * quantity);
//                break;
//        }
//
//        cout << "다른 과일의 구입도 원하시면 'y'를 장보기를 마치시겠으면 'n'을 입력하시오.";
//        cin >> select;
//
//        if(select == 'n') {
//            cout << "장보기를 종료합니다.\n";
//            break;
//        }
//    }
//
//    cout << "당신이 지불할 가격은 " << money << "원 입니다.\n";
//}

//int main() {
//    int bus, quantity;
//    char select;
//    int money = 0;
//
//    while(1) {
//        cout << "가고자 하는 목적지를 선택하시오.\n";
//        cout << "1. 서울<25000원>\t2. 부산<18000원>\t3. 광주<12000원>\t4. 대구<20000원>\n";
//        cout << "목적지 번호를 입력하시오. -> ";
//        cin >> bus;
//
//        cout << "당신이 구입할 표의 개수를 입력하시오. -> ";
//        cin >> quantity;
//
//        switch(bus) {
//            case(1):
//                money = money + (25000 * quantity);
//                break;
//
//            case(2):
//                money = money + (18000 * quantity);
//                break;
//
//            case(3):
//                money = money + (12000 * quantity);
//                break;
//
//            case(4):
//                money = money + (20000 * quantity);
//                break;
//        }
//
//        cout << "더 구매하시겠습니까? -> ";
//        cin >> select;
//
//        if(select == 'n') {
//            cout << "";
//            break;
//        }
//    }
//
//    cout << "당신이 지불할 가격은 " << money << "원 입니다.\n";
//}

//int main() {
//    int i = 1;
//    float n = 1;
//    float value = 0;
//
//    while(1) {
//        if(i % 2 == 1) {
//            value = value + (4/n);
//        } else {
//            value = value - (4/n);
//        }
//
//        if(n >= 100000) {
//            break;
//        } else {
//            n += 2;
//            i++;
//        }
//
//    }
//
////    cout << "pi = " << value;
//    printf("%.8f\n", value);
//}

//int printLen(int quantity) {
//    //가인수
//    int j;
//
//    for(j = 0; j < quantity; j++) {
//        cout << "*";
//    }
//
//    cout << endl;
//
//    return 0;
//}
//
//int main() {
//    //실인수
//    int i = 1;
//    int quantity;
//
//    while(1) {
//        cout << "막대 #" << i << "의 높이: ";
//        cin >> quantity;
//
//        if(quantity > 50) {
//            cout << "범위 이상의 길이입니다.\n";
//            break;
//        }
//
//        printLen(quantity);
//
//        i++;
//    }
//
//    return 0;
//}

//int printLen(int quantity, int i) {
//    //가인수
//    int j;
//
////        printLen(quantity);
//    for(j = 0; j < quantity; j++) {
//        cout << "*";
//    }
//
//    cout << endl;
//
//    i++;
//
//    return i;
//}
//
//int main() {
//    //실인수
//    int i = 1;
//    int quantity;
//
//    while(1) {
//        cout << "막대 #" << i << "의 높이: ";
//        cin >> quantity;
//
//        if(quantity > 50) {
//            cout << "범위 이상의 길이입니다.\n";
//            break;
//        }
//
//        printLen(quantity, i);
//
//
//    }
//
//    return 0;
//}

//int main() {
//    int kor, eng, math;
//    float avg;
//    string check;
//
//    cout << "국어 영어 수학 점수는?";
//    cin >> kor >> eng >> math;
//
//    avg = (kor + eng + math)/3;
//
//    if(avg < 60) {
//        check = "불합격";
//    } else {
//        check = "합격";
//    }
//
//    cout << "==============================\n";
//    cout << "국어\t영어\t수학\t평균\t결과\n";
//    cout << kor << "\t" << eng << "\t" << math << "\t" << avg << "\t" << check << endl;
//    cout << "==============================\n";
//}

//int main() {
//    int x, y;
//    float value;
//
//    cout << "두 수를 입력하시오.";
//    cin >> x >> y;
//
//    value = x / y;
//
//    cout << x << " / " << y << "의 몫은 " << value << "입니다.\n";
//}

//int main() {
//    int i;
//    int value = 0;
//
//    cout << "1부터 100까지의 홀수의 합을 구하는 프로그램입니다."
//
//    for(i = 1; i < 100; i = i + 2) {
//        value = value + i;
//    }
//
//    cout << value << endl;
//}

//int main() {
//    int score = 0;
//    int male, mil, marry, kid;
//
//    cout << "성별 <남:1, 여:2> ";
//    cin >> male;
//
//    if(male == 1) {
//        cout << "군 제대 <예:1, 아니오:2> ";
//        cin >> mil;
//
//        if(mil == 1) {
//            score++;
//        }
//
//        cout << "기혼자 <예:1, 아니오:2> ";
//        cin >> marry;
//
//        if(marry == 1) {
//            score++;
//        }
//
//
//    } else if(male == 2) {
//        cout << "기혼자 <예:1, 아니오:2> ";
//        cin >> marry;
//
//        if(marry == 1) {
//            score++;
//        }
//
//        cout << "자녀 수: ";
//        cin >> kid;
//
//        if(kid == 1) {
//            score++;
//        } else if(kid >= 2) {
//            score += 2;
//        }
//    } else {
//        cout << "error\n";
//    }
//
//    cout << score << endl;
//}

//int main() {
//    int a, b;
//    float result1, result2;
//
//    cout << "a의 값을 입력하시오.";
//    cin >> a;
//    cout << "b의 값을 입력하시오.";
//    cin >> b;
//
//    if(a >= b) {
//        result1 = a / b;
//        result2 = a % b;
//    } else {
//        result1 = b / a;
//        result2 = b % a;
//    }
//
//    cout << "몫은 " << result1 << "나머지는 " << result2 << endl;
//
//    return 0;
//}

//int main() {
//    int fee;
//    float value;
//
//    cout << "월급을 입력하시오(단위: 만원): ";
//    cin >> fee;
//
//    if(fee < 1000) {
//        value = fee / 100 * 92;
//    } else if(fee >= 1000 && fee < 4000) {
//        value = fee / 100 * 83;
//    } else if(fee >= 4000 && fee < 8000) {
//        value = fee / 100 * 74;
//    } else if(fee >= 8000) {
//        value = fee / 100 * 65;
//    }
//
//    cout << "세금은 " << value << "만원입니다.\n";
//
//    return 0;
//}

//int main() {
//    int x, y;
//
//        cout << "x값을 입력하시오.:";
//        cin >> x;
//
//        if (x <= 0)
//            y = (x*x*x) - (9 * x) + 2;
//        else
//            y = (7 * x) + 2;
//
//        cout << "함수를 계산한 값은 " << y << " 입니다.\n";
//}

//int main() {
//    float a, b, x;
//
//    cout << "a값과 b값을 입력하시오: ";
//    cin >> a >> b;
//
//        if (a != 0)
//        {
//            x = (-b) / a;
//            cout << "근은 "<< x << "입니다.\n";
//        }
//        else if (a = 0 && b != 0)
//            cout << "해가 없음\n";
//        else
//            cout << "해가 무수히 많음\n";
//
//    return 0;;
//}

//int main() {
//    float a;
//
//    cout << "수소이온의 농도를 입력하시오.:";
//    cin >> a;
//
//    if (a<3.0)
//        cout << "강산성입니다\n";
//    else if (a<7.0)
//        cout << "산성입니다\n";
//    else if (a = 7.0)
//        cout << "중성입니다\n";
//    else if (a>7.0)
//        cout << "알칼리성입니다\n";
//    else
//        cout << "강알칼리성입니다\n";
//
//    return 0;
//}

//int main() {
//    char x;
//    cout << "한개의 문자를 입력하시오.:\n";
//    cin >> x;
//
//    switch (x)
//    {
//        case 'a':
//            cout << "a\n";
//            break;
//        case 'b':
//            printf("b\ta\n");
//            break;
//        case 'c':
//            printf("c\tb\tc\n");
//            break;
//        case 'd':
//            printf("d\tc\tb\ta\n");
//            break;
//    }
//}

//int main() {
//    char a;
//    int b, c;
//    int fee = 0;
//
//    cout << "구매하고자 하는 표가 자유이용권이면 y를, 아니면 n을 눌러주세요. -->\n";
//    cin >> a;
//
//        switch (a)
//        {
//            case 'y':
//                cout << "현재 시간이 주간이면 1을, 야간<5시 이후>면 2를 입력하세요. -->\n";
//                cin >> b;
//
//                switch (b)
//                {
//                    case 1:
//                        cout << "사용자의 나이를 입력하시오. -->\n";
//                        cin >> c;
//
//                        if (c >= 13 && c <= 64)
//                            fee = 34000;
//                        else
//                            fee = 25000;
//                        break;
//
//                    case 2:
//                        cout << "사용자의 나이를 입력하시오. -->\n";
//                        cin >> c;
//
//                        if (a >= 13 && a <= 64)
//                            fee = 27000;
//                        else
//                            fee = 21000;
//                        break;
//                }
//                break;
//            case 'n':
//                cout << "현재 시간이 주간이면 1을, 야간<5시 이후>면 2를 입력하세요. -->\n";
//                cin >> b;
//
//                {
//                case 1:
//                    cout << "사용자의 나이를 입력하시오. -->\n";
//                    cin >> c;
//
//                        if (c >= 13 && c <= 64)
//                            fee = 27000;
//                        else
//                            fee = 20000;
//                        break;
//                case 2:
//                    cout << "사용자의 나이를 입력하시오. -->\n";
//                    cin >> c;
//
//                        if (a >= 13 && a <= 64)
//                            fee = 23000;
//                        else
//                            fee = 17000;
//                break;
//            }
//            break;
//        }
//    cout << "요금은 " << fee << "원 입니다.\n";
//
//    return 0;
//}

//int main() {
//    int a;
//    cout << "가격\t30%%\t50%%\t70%%\n";
//    for (a = 10000; a <= 50000; a = a + 5000)
//        cout << (a * 70 / 100) << "\t" << (a * 50 / 100) << "\t" << (a * 30 / 100) << endl;
//}

//int main() {
//    int a,  b = 0, i;
//
//    cout << "정수를 입력하세요.:";
//    cin >> a;
//
//    cout << "--\t-----------------\n";
//    cout << a << "\t1부터" << a << "까지의 합\n";
//    cout << "--\t-----------------\n";
//
//    for (i = 1; i <= a; i++)
//    {
//        b += i;
//        cout << i << "\t\t" << b <<"\n";
//    }
//
//    return 0;
//}

//int main() {
//    int n, i;
//    float  a, result;
//
//    cout << "원금을 입력하세요.:";
//    cin >> a;
//    cout << "==================\n";
//    cout << "연도\t\t원리금\n";
//    cout << "==================\n";
//
//    for (n = 1; n <= 10; n++)
//    {
//        result = a;
//        for (i = 1; i <= n; i++)
//        {
//            result *= 1.07;
//        }
//        cout << n << "\t\t" << result << endl;
//    }
//}

//int main() {
//    int START_DAY, day, date;
//    cout << "START_DAY를 입력하세요\n";
//    cout << "0:일요일,1:월요일,2:화요일,3:수요일,4:목요일,5:금요일,6:토요일->입력:";
//    cin >> START_DAY;
//    cout << "==================================================\n";
//    cout << "일\t월\t화\t수\t목\t금\t토\n";
//    cout << "==================================================\n";
//    switch (START_DAY)
//    {
//    case 0:
//        break;
//    case 1:
//            cout << "\t";
//        break;
//    case 2:
//            cout << "\t\t";
//        break;
//    case 3:
//            cout << "\t\t\t";
//        break;
//    case 4:
//            cout << "\t\t\t\t";
//        break;
//    case 5:
//            cout << "\t\t\t\t\t";
//        break;
//    case 6:
//            cout << "\t\t\t\t\t\t";
//    }
//    day = START_DAY;
//    for (date = 1; date <= 31; date++)
//    {
//        cout << date << "\t";
//        day++;
//        if (day % 7 == 0)
//        {
//            cout << "\n";
//            day = 0;
//        }
//    }
//}

//int main() {
//    int i, j, k;
//
//    for (i = 1; i <= 26; i++)
//    {
//        for (j = 25; j >= i; j--)
//            cout << " ";
//        for (k = 90 - j; k <= 90; k++)
//        {
//            cout << (char)k;
//
//
//        }
//        cout << "\n";
//    }
//}

//int main() {
//    int a = 0, c = 0;
//
//       while (1)
//       {
//          a++;
//          c += (a * 3);
//
//          if (c +3*(a)> 9999)
//             break;
//       }
//       cout << "결과: " << a << "sum = " << c << endl;
//}
