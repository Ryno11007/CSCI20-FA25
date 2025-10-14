#include <cstdio>

struct{
    int x;
    int y;
}typedef cart_point ;

void print_cart(cart_point p){
    printf("(%d, %d)", p.x, p.y);
    return;
}


int main() {

cart_point point_a = {5,2};
print_cart(point_a);
     return 0;
}