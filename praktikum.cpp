#include <iostream>
using namespace std;

class LayangLayang {
private:
    float d1, d2;
    float sisiA, sisiB;

public:
    void input() {
        cout << "Input diagonal 1 Layang-Layang : ";
        cin >> d1;
        cout << "Input diagonal 2 Layang-Layang : ";
        cin >> d2;
        cout << "Input sisi A : ";
        cin >> sisiA;
        cout << "Input sisi B : ";
        cin >> sisiB;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 2 * (sisiA + sisiB);
    }

    void output() {
        cout << "\n=== Layang-Layang ===" << endl;
        cout << "Luas      : " << luas() << endl;
        cout << "Keliling  : " << keliling() << endl;
    }
};

class BelahKetupat {
private:
    float d1, d2;
    float sisi;

public:
    void input() {
        cout << "\nInput diagonal 1 Belah Ketupat : ";
        cin >> d1;
        cout << "Input diagonal 2 Belah Ketupat : ";
        cin >> d2;
        cout << "Input sisi : ";
        cin >> sisi;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    void output() {
        cout << "\n=== Belah Ketupat ===" << endl;
        cout << "Luas      : " << luas() << endl;
        cout << "Keliling  : " << 4 * sisi << endl;
    }

    // friend method dari LayangLayang
    friend float LayangLayang::keliling();
};

int main() {
    LayangLayang ll;
    BelahKetupat bk;

    ll.input();
    ll.output();

    bk.input();
    bk.output();

    return 0;
}