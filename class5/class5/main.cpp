//
//  main.cpp
//  class5
//
//  Created by 박대영 on 2023/04/16.
//

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

/*float height(float len, float deg);
int main()
{
    float a, x, h;
    cout<<"밑변의 길이와 높이를 입력하시오 : ";
    cin>>a>>x;
    h = height(a, x);
    cout<<"삼각형의 높이는 "<<h<<"입니다.\n";
}
float height(float len, float deg)
{
    return len*tan(deg);
}*/

//2 p227
/*
int bs(int a, int b);
int main()
{
    int a, b, c;
    cout<<"배수를 판단할 두 정수를 입력해주세요.\n";
    cout<<"첫번째 정수 : ";
    cin>>a;
    cout<<"두번째 정수 : ";
    cin>>b;
    c = bs(a, b);
    if(c==0)
        cout<<a<<"는 "<<b<<"의 배수입니다.\n";
    else
        cout<<a<<"는 "<<b<<"의 배수가 아닙니다.\n";
}
int bs(int a, int b)
{
    return a%b;
}*/

//3 p228
/*
using namespace std;
float gs(float x1, float x2, float y1, float y2);
int main()
{
    float a, b, x, y, d;
    cout<<"첫번째 좌표값을 입력해주세요. : ";
    cin>>a>>b;
    cout<<"두번째 좌표값을 입력해주세요. : ";
    cin>>x>>y;
    d = gs(a, x, b, y);
    cout<<"두 점사이의 거리는 "<<d<<"입니다.\n";
}
float gs(float x1, float x2, float y1, float y2)
{
    float d;
    d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    return d;
}*/

//4 p228
/*
using namespace std;
float sa(int n, int m);
float gi(int n, int m);
float zo(int n, int m);
int main()
{
    int a, b;
    float s, g, z;
    cout<<"두 수를 입력하세요.--> ";
    cin>>a>>b;
    s = sa(a, b);
    g = gi(a, b);
    z = zo(a, b);
    cout<<"산술, 기하, 조하평균을 구한 값은 다음과 같습니다.\n";
    cout<<"산술평균 = "<<s<<" 기하평균 = "<<g<<" 조화평균 = "<<z<<"\n";
}
float sa(int n, int m)
{
    return (n+m)/2;
}
float gi(int n, int m)
{
    return sqrt(n*m);
}
float zo(int n, int m)
{
    return (float)2*n*m/(n+m);
}*/

//5 p228
/*
int sumofpower(int n, int k);
int power(int n, int k);
int main()
{
    int a, b, sum;
    cout<<"두 수를 입력하시오. : ";
    cin>>a>>b;
    sum = sumofpower(a, b);
    cout<<"1^"<<b<<" + -- + "<<a<<"^"<<b<<"까지의 수열의 합 = "<<sum<<"\n";
}
int sumofpower(int n, int k)
{
    int i, sum=0;
    for(i=1 ; i<=n ; i++)
        sum += power(i,k);
    return sum;
}
int power(int n, int k)
{
    int i, result=1;
    for(i=1 ; i<=k ; i++)
        result *= n;
    return result;
}*/

//6 p229
/*
using namespace std;
void ec(int a, int b, int c);
void ec1(int a, int b, int c);
int main()
{
    int a, b, c, d;
    cout<<"3가지 정수 입력 : ";
    cin>>a>>b>>c;
    d = b*b - 4*a*c;
    if(d>0)
        ec(a, b, c);
    else if(d==0)
        ec1(a, b, c);
    else
        cout<<"근이 없습니다.\n";
}
void ec(int a, int b, int c)
{
    float x1, x2;
    x1 = (float)(-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (float)(-b - sqrt(b*b - 4*a*c)) / (2*a);
    cout<<"이차방정식의 근은 "<<x1<<" "<<x2<<"입니다.\n";
}
void ec1(int a, int b, int c)
{
    float x;
    x = -b / 2*a;
    cout<<"이차방정식의 근은 중근인 "<<x<<"입니다.\n";
}*/

//7 p229
/*
int a(float n, int k);
int b(float n, int k);
int main()
{
    float n, result = 0.0;
    int k;
    char c;
    while(1)
    {
        cout<<"계산하실 실수값을 입력해주세요. : ";
        cin>>n;
        cout<<"정수값을 입력해주세요. : ";
        cin>>k;
        if(k>0)
            result = a(n, k);
        else if(k<0)
            result = b(n, k);
        cout<<result<<"\n";
        cout<<"다시 계산하시겠습니까? <Y/N> ";
        cin>>c;
        if(c=='n' || c=='N')
            break;
    }
}
int a(float n, int k)
{
    int i;
    float a=1.0;
    for(i=1 ; i<=k ; i++)
        a *= n;
    return a;
}
int b(float n, int k)
{
    int i;
    float a=1.0;
    for(i=1 ; i<=-k ; i++)
        a /= (float)n;
    return a;
}*/

//8 p230
/*
int squareroot(float x1, float a);
int main()
{
    float a, x1, root;
    cout<<"제곱근을 구할 수를 입력하세요. : ";
    cin>>a;
    x1 = rand() % 100000;
    root = squareroot(x1, a);
    cout<<"함수에 의해 구한 "<<a<<"의 제곱근 = "<<root<<"\n";
    cout<<"라이브러리 함수 sqrt<"<<a<<"> = "<<sqrt(a)<<"\n";
}
int squareroot(float x1, float a)
{
    float x2;
    while(1)
    {
        x2 = (x1 + a / x1) / 2;
        if((x1 - x2) < (float)1/1000000)
            break;
        x1 = x2;
    }
    return x2;
}*/

//9 p230
/*
int event(int n);
int absolute(int n);
int sign(int n);
int main()
{
    int n, e, a, s;
    cout<<"정수를 입력해주세요. : ";
    cin>>n;
    e = event(n);
    a = absolute(n);
    s = sign(n);
    if(e==1)
        cout<<"주어진 정수는 짝수입니다.\n";
    else if(e==0)
        cout<<"주어진 정수는 홀수입니다.\n";
    cout<<"주어진 정수의 절대값은 "<<a<<"입니다.\n";
    if(s==-1)
        cout<<"주어진 정수는 음수입니다.\n";
    else if(s==0)
        cout<<"주어진 정수는 0입니다.\n";
    else if(s==1)
    cout<<"주어진 정수는 양수입니다.\n";
}
int event(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int absolute(int n)
{
    if(n>=0)
        return n;
    else
        return -n;
}
int sign(int n)
{
    if(n<0)
        return -1;
    else if(n==0)
        return 0;
    else
        return 1;
}*/

//10 p231
/*
float sp(int n);
float tr(int n, int m);
float qu(int n, int m);
int main()
{
    int n, a, b;
    float s;
    cout<<"1.원의 넓이  2.삼각형의 넓이  3.사각형의 넓이\n";
    cout<<"구하고자 하는 도형의 번호를 입력하시오. : ";
    cin>>n;
    switch(n)
    {
        case 1 :
        {
            cout<<"반지름을 입력하시오. : ";
            cin>>a;
            s = sp(a);
            cout<<"원의 넓이는 "<<s<<"입니다.\n";
            break;
        }
        case 2 :
        {
            cout<<"밑변의 길이와 높이를 입력하시오. : ";
            cin>>a>>b;
            s = tr(a, b);
            cout<<"삼각형의 넓이는 "<<s<<"입니다.\n";
            break;
        }
        case 3 :
        {
            cout<<"가로와 세로의 길이를 입력하시오. : ";
            cin>>a>>b;
            s = qu(a, b);
            cout<<"사각형의 넓이는 "<<s<<"입니다.\n";
            break;
        }
    }
}
float sp(int n)
{
    return n*n*3.14;
}
float tr(int n, int m)
{
    return n*m/2.0;
}
float qu(int n, int m)
{
    return n*m;
}*/

//11 p231
/*
int agecal(int y, int birth, char a);
int main()
{
    int year, birth, age;
    char a;
    cout<<"현재년도를 입력해주세요. : ";
    cin>>year;
    cout<<"태어난 년도를 입력해주세요. : ";
    cin>>birth;
    cout<<"생일이 지났나요? <y/n> ";
    cin>>a;
    age = agecal(year, birth, a);
    cout<<"만 나이는 "<<age<<"입니다.\n";
}
int agecal(int y, int birth, char a)
{
    if(a=='y')
        return (y-birth);
    else
        return (y-birth-1);
}*/

//12 p231
/*
int sum(int n);
int main()
{
    int n, a;
    cout<<"정수를 입력하시오. : ";
    cin>>n;
    a = sum(n);
    cout<<"결과값 = "<<a<<"\n";
}
int sum(int n)
{
    int i, j, result=0;
    for(i=1 ; i<=n ; i++)
        for(j=1 ; j<=i ; j++)
            result += j;
    return result;
}*/

//13 p232
/*
int sum(int n);
int main()
{
    int n, result;
    cout<<"정수를 입력하세요. : ";
    cin>>n;
    result = sum(n);
    cout<<n<<"항까지 점화식 수열의 합 = "<<result<<"\n";
}
int sum(int n)
{
    int a=3, i;
    for(i=2 ; i<=n ; i++)
        a = 2*a + 1;
    return a;
}*/

//14 p232
/*
int a(int b, int sum);
int main()
{
    int i, b=0, b1=1, c;
    cout<<0<<"까지 피보나치 수열의 결과 = "<<b<<"\n";
    cout<<1<<"까지 피보나치 수열의 결과 = "<<b1<<"\n";
    for(i=2 ; i<=10 ; i++)
    {
        c = a(b, b1);
        b = b1;
        b1 = c;
        cout<<i<<"까지 피보나치 수열의 결과 = "<<c<<"\n";
    }
}
int a(int b, int sum)
{
    return b+sum ;
}*/
