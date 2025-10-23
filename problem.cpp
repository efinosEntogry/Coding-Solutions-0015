#include <iostream>

using namespace std;

int inverseOrder(int n) {
    if (n / 10 == 0) return n;
    cout << n % 10<< " ";
    return inverseOrder(n / 10);
}

int main() {

    cout << inverseOrder(987);

    return 0;
}
