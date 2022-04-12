#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int soma(int x, int y){
    int soma = 0;
    if(x == 0)return y;
    else{
       for(int i = x; i <= y; i++){
        soma = soma + i;
        }
    }
    return soma;
}

int main()
{
    int m, n, resultado;

    cin >> m;
    cin >> n;

    resultado = soma(m, n);
    cout << resultado;
    return 0;
}
