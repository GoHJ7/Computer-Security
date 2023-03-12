#include <openssl/bn.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    BIGNUM* hex_p = BN_new();
    BIGNUM* hex_q = BN_new();
    BIGNUM* hex_e = BN_new();

    BN_dec2bn(&hex_p,"0xF7E75FDC469067FFDC4E847C51F452DF");
    BN_dec2bn(&hex_q,"0xE85CED54AF57E53E092113E62F436F4F");
    BN_dec2bn(&hex_e,"0x0D88C3");
    /*
    what i've learned
    You can decrypt the original message using public key or private key.
    This can be done by fermat's littel theorem

    let p and q be prime numbers.
    and let e be relatively prime number of Totient number of n (p*q)

    C = m^e mod n (m<n)
    M = C^d mod n

    m^de mod n is M 

    x^p mod p = x
    x^(p-1) mod p =1 where p is a prime number

    Since e is relatively prime to n so it can be rewritten as k(p-1)(q-1) +1
    by applying fermat's little theorem, 
    m^de mod n -> m^(p-1)(q-1) * m mod n
    therfore, 
    1 * m mod n = m 
    */

   /*
   task 1
   Find out d with known p,q,e
   */

  
}