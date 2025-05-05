#include <iostream>
using namespace std;

int main() {
    string vetNome[5];
    float mat_total_vendas[5][6];
    string maiorVendedor = "";
    float mat_total_anual[5] = {0}; // Armazena o total de vendas anuais para cada vendedor
    float maiorVenda = 0; 
    int i, j;


    for (i = 0; i <= 4; i++) {
        cout << "Digite o nome do " << i + 1 << " vendedor: ";
        cin >> vetNome[i];
        cout << "------------------------------------------------------------------------------------------------" << endl;
    }

    //vendas mensais de cada vendedor
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 5; j++) {
            cout << "Digite o total de vendas mensal do mes da linha " << i  << " e da coluna " << j  << " do funcionario " << vetNome[i] << ": ";
            cin >> mat_total_vendas[i][j];
            cout << "----------------------------------------------------------------------------------" << endl;
        }
    }

    //soma das vendas 
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 5; j++) {
            mat_total_anual[i] += mat_total_vendas[i][j];
        }
        
        if (mat_total_anual[i] >= maiorVenda) {
            maiorVenda = mat_total_anual[i];
            maiorVendedor = vetNome[i];
        }
    }

    //vendedor que mais vendeu
    cout << "O vendedor que mais vendeu foi o: " << maiorVendedor << " com um total de vendas de: " << maiorVenda << endl;

    return 0;
}