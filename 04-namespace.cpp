#include <iostream>

namespace a{
    int x = 1;
}

namespace b {
    int x = 2;
}

int main(){
    int x = 0;

    std::cout << a::x << '\n';

    return 0;
}