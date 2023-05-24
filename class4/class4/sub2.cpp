//
//  sub2.cpp
//  class4
//
//  Created by 박대영 on 2023/04/03.
//

#include "sub2.hpp"
#include <iostream>
using namespace std;

static int b = 20;

void sub2() {
    b += 100;
    
    cout << "\n sub2의 b (file3.cpp) ==> " << b;
}
