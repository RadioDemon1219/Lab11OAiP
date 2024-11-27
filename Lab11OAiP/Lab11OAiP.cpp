#include <iostream>
#include <bitset>

int main() {
    using namespace std;
    unsigned int A = 0b1101010101,B = 0b0000000000,extractedBits; 
    
    extractedBits = (A >> 2) & 0b11111;
    B |= (extractedBits << 1); 

    cout << "Результат B: " << bitset<10>(B);

    
    
   /* int A = 0b1101010101, p = 4,n = 3, unsigned int mask ; 
    mask = ((1 << n) - 1) << p;
    A &= ~mask; 

    cout << "Результат A: " << bitset<10>(A); */
    
}
