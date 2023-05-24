//
//  sub1.cpp
//  class4
//
//  Created by 박대영 on 2023/04/03.
//

#include <stdio.h>
#include <iostream>
using namespace std;

extern int a;

void sub1() {
    a += 100;
    
    cout << "\n sub1의 a (file2.cpp) ==> " << a;
}
