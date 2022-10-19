#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //  Definindo uma Variável
    string palavra;

    //  Imprimindo na tela
    cout << "Digite uma palavra: ";

    //  Lendo uma String
    cin >> palavra;

    //  Imprimindo uma variável
    cout << "A palavra é: \n" << palavra;

    return 0;
}