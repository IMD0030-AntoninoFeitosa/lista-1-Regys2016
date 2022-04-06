#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int num[SIZE], cont = 0, i = 0;
    
    for(i; i < SIZE; i++){
        cin >> num[i];
          if(num[i] < 0){
            cont++;
          }
      }
  cout << cont;
    
    return 0;
}
