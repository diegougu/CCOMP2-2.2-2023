#include <bitset>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

string convertirbinario(int num){
    string res;
    while(num > 0){
        int digit = num % 2;
        res = to_string(digit) + res;
        num/=2;
    }
    return res;
}

vector<bool> decimal(float numero){
    vector<bool> aux(32,0);
    vector<bool> significando(23,0);
    vector<bool> exponente(8,0);
    vector<bool> msb(1,0);


    int alam = int(numero);
    string conver = convertirbinario(alam);
    vector<bool> num(conver.size(),0);
    int tam = conver.size();
    float alam2 = numero - float(alam);
    

    if(numero < 0){
        aux[0] = 1;
    }

    for(int i = tam - 1; i < 23; ++i){
        alam2 = alam2 * 2;
        if(alam2 >= 1){
            significando[i] = 1;
            alam2 = alam2 - 1;
        }
    }
  
    

   for(int i = 0, j = 1; j < conver.size(); ++i, ++j){
        if(conver[j] == '1'){
            significando[i] = 1;
        }
    }

    string a = conver.substr(1,conver.size() - 1);
    

    int tamA = a.size();
    
    int exponente2 = tamA + 127;
    string valor =  convertirbinario(exponente2);

    for(int i = 1, j = 0 ; i < 9; ++i, ++j){
        
        if(valor[j] == '1'){
            aux[i] = 1;
        }
        
    }
    
    for(int i = 9; i < 32; ++i){
        aux[i] = significando[i-9];
    }

    return aux;

}

int binarioanumero(vector<bool> a){ 
    int res = 0;
    for(int i = 0, j = a.size() - 1; i < a.size(); ++i, --j){
        res += pow(2,j) * a[i];
    }
    return res;
}   

vector<bool> suma(vector<bool> a, vector<bool> b) {
    vector<bool> resultado(a.size(),0);
    bool C = 0;

    for (int i = a.size() - 1; i >= 0; --i) {  
        bool A = a[i];
        bool B = b[i];
        bool res = ~A & (~B & C | B & ~C) | A & (B & C | ~B & ~C);
        C = A & B | B & C | A & C;
        resultado[i] = res;
    }
    return resultado;
}

vector<bool> multiplicar(vector<bool> a, vector<bool> b){
    vector<bool> ceros(a.size(),0);
    vector<bool> ceros2(b.size(),0);

    int contador1 = 0;
    int contador2 = 0;

    for(int i = 0; i < a.size(); ++i){
        if(a[i] == ceros[i]){
            contador1 = contador1 + 1;
        }
        if(contador1 == a.size()){
            return ceros;
        }
    }

    for(int i = 0; i < b.size(); ++i){
        if(b[i] == ceros2[i]){
            contador2 = contador2 + 1;
        }
        if(contador2 == b.size()){
            return ceros2;
        }
    }


    vector<bool> exponente_a(8);
    for(int i = 0; i < 8; ++i){
        exponente_a[i] = a[i + 1];
    }
    vector<bool> exponente_b(8);
    for(int i = 0; i < 8; ++i){
        exponente_b[i] = b[i + 1];
    }

    int val_b = binarioanumero(exponente_b);

    val_b = val_b - 127;

    string val_b_binario = convertirbinario(val_b);
    exponente_b.assign(8,0);

    for(int i = 8-val_b_binario.size(), j = 0;  i < 8; ++i, ++j){
        if(val_b_binario[j] == '1'){
            exponente_b[i] = 1;
        } 
    }

    vector<bool> sumadeexponentes = suma(exponente_a, exponente_b);


    vector<bool> significandoa(23);
    vector<bool> significandob(23);
    for(int i = 8; i < 31; ++i){
        significandoa[i] = a[i + 1];
    }

    for(int i = 8; i < 31; ++i){
        significandob[i] = b[i + 1];
    }

    int val_a = binarioanumero(significandoa);
    
    int val_b_v2 = binarioanumero(significandob);

    int multiplicacion_de_vals = val_a * val_b;

    string vals_multiplicacion_binario = convertirbinario(multiplicacion_de_vals);

    vector<bool> mults(23,0);

    for(int i = 0; i < 23; ++i){
        if(vals_multiplicacion_binario[i] == '1'){
            mults[i] = 1;
        }
    }

    return sumadeexponentes, mults;

}

int main(){
    float a = 32.72;
    vector<bool> al = decimal(a);
    float b = 16.3;
    vector<bool> bl = decimal(b);

    vector<bool> res = multiplicar(al,bl);

    for(int i = 0; i < res.size(); ++i){
        cout << res[i];
    }
    

    
}