#include "calcp2.hpp"

int main() {
  
   
    calcp2 calc;
    vector<calcp2::ice_cream> load_eq = {};
   
     calcp2::ice_cream x(0, '+');
     calcp2::ice_cream y(1, 'e');
     calcp2::ice_cream z(1, 'e');

  
    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);
   
   calc.village(load_eq);

    return 0;
}

void calcp2::village(vector<ice_cream> x) {
    map_ice_clown(x);

return ;
}

vector<calcp2::clowns> calcp2::map_ice_clown(vector<ice_cream> x) {
    vector<calcp2::clowns> r = {};
    for (int i=0; i<x.size(); i=i+1) {

 // the set in the case of the x.size = 3 is {i=0, i=1, i=2}
clowns c(x.at(i).flavor, x.at(i).cone);
r.push_back(c);
printf("%d, %c/n", c.num, c.op);
}
    return r; 

}