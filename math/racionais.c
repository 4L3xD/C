# include <stdio.h>

void main(){
    printf("\nNúmeros Naturais (N)");
    printf("\nN = { ∃ a, b, c, ..., ∞.\n∀ a, b ^ c ∈ N a+1 = b, b+1 = c | 'b' é sucessor de 'a', 'c' é sucessor de b, ... }");
    printf("\nN = { 0, 1, 2, 3, ..., ∞ }");
    printf("\n'0' é o Elemento Neutro ⊂ N | ∀ n ∈ N, n+0 = n\n");

    printf("\nNúmeros Inteiros (Z)");
    printf("\nZ = { N ⊂ Z, ∃ a ^ b | a ∈ Z ^ b ∈ N, ou seja, a=-a ∨ a= +a ^ b= +b \n∀ a<0= -a | -a+(+b) = -a+b = -x \n∀ a>0= +a | +a+(+b) = a+b = x }");
    printf("\nZ = { ∞, ..., -3, -2, -1, 0, 1, 2, 3, ..., ∞ }");
    printf("\n'-a' é o Elemento Oposto de '+a' | ∀ -a+a= 0, ou seja, a soma de opostos resulta no Elemento Neutro.\n");

    printf("\nNúmeros Racionais (Q)");
    printf("\nQ = { a/b | a, b ∈ Z, b≠0 }");
    printf("\nN ⊂ Z ⊂ Q\n∃ a, b, c, d ∈ Q | a/b ^ c/d, \nsoma: a/b + c/d = ad + bc/bd, \nproduto: a/b * c/d = ac/bd");
    printf("\na/b > 0, ou positivo, se a*b ∈ N; se a*b ∈ N ^ a≠0, então a/b é estritamente positivo.\n");

}


