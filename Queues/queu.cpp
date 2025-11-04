#include <cstdio>
#include <vector>


using std::printf;
using std::vector;

void print_queue(const vector<int>& q) {
    for (size_t i = 0; i < q.size(); i++) {
        printf("%d\n", q[i]);
    }
    return;
}

vector<int> push_q(vector<int> q, int e) {
    q.push_back(e);
    return q;
}

int main() {
    vector<int> q = {};

    q = push_q(q, 10);
    q = push_q(q, 20);
    q = push_q(q, 30);  

    print_queue(q);





    return 0;
}