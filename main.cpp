// Example program
#include <iostream>
#include <string>
#include <vector>

struct Test {
    int x;
    int y;
};
struct Vector {
    int x;
};
int t(struct Test tes) {
    return tes.x + tes.y;
}
int t(struct Test tes);

int main()
{
    struct Test tt;
    tt.x = 5;
    tt.y = 10;
    std::cout << t(tt);
}
