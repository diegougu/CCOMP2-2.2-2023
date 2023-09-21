#include <bitset>
#include <iostream>
using namespace std;

const int n = 4;

bitset<n> suma(bitset<n> a, bitset<n> b) {
    bitset<n> resultado;
    bool C = 0;
    for (int i = 0; i < n; ++i) {  
        bool A = a[i];
        bool B = b[i];
        bool res = ~A & (~B & C | B & ~C) | A & (B & C | ~B & ~C);
        C = A & B | B & C | A & C;
        resultado[i] = res;
    }
    return resultado;
}

int main() {
    bitset<n> a(0);
    bitset<1> q1(0);

    int num1 = 3;
    int num2 = 3;
    bitset<n> q(num1);
    bitset<n> m(num2);
    bitset<n> uno(1);
    int contador = n;
    q1[0] = q[n-1];
    while (contador != 0) {
        bitset<2> aux;
        aux[1] = q[0];
        aux[0] = q1[0];
        if (aux == bitset<2>("10")) {
            bitset<n> m_negado = suma(~m, uno);
            a = suma(a, m_negado);
        } else if (aux == bitset<2>("01")) {
            a = suma(a, m);
        }
        cout << "R " << endl;
        cout << a << q << q1 << endl;
        bool msb = a[n - 1];
        bool aR = a[0];
        a >>= 1;
        a[n-1] = msb;
        q1[0] = q[0];
        q >>= 1;
        q[n-1] = aR;
        cout << a << q << q1 << endl;

        contador = contador - 1;
    }

    cout << "Multiplicando: " << num1 << " x " << num2 << " = " << endl;
    bitset<2*n> res;
    for(int i = 0; i < n; ++i) {
        res[i+n] = a[i];
        res[i] = q[i];
    }
    cout << "Binario: " << res << " - numero:" << res.to_ulong() << endl;

    return 0;
}