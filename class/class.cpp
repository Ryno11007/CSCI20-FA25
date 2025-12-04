#include "class.hpp"

int main(){
    vector<char> v = {'h', 'e', 'l', 'p'};
    A obj;
    obj.load(v);
    obj.st_print();

    obj.vec_print(v);

    return 0;
}

void A::load(vector<char> input) {
    for(int i=0; i<input.size(); i=i+1) {
        st.push(input.at(i));
    }
    return;
}

void A::st_print() {
    stack<char> buffer;
   

    for(; !st.empty(); ) {
        buffer.push(st.top());
        st.pop();
    }
    st = buffer;

    st_print();

    printf("\n");
   
    return ;


}

void A::vec_print(vector<char> v) {
    stack<char> buffer;
    for(int i=0; i<v.size(); i=i+1) {
      if(i>=20) {
            break;
      }
        st.push(v.at(i));   
    
    }
    return;
}

A::A() {
    st = {};
}
