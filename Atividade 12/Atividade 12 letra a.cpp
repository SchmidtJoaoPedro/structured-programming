#include <iostream>
#include <string>
using namespace std;

struct Conta {
    int num;
    double saldo;
    string nome;
};

int main() {
    Conta conta[15];
    int i, op, posi = 1, achou;
    int num_conta;
    double menor_saldo;
    string nome_cliente;

    // Inicializa contas
    for (i = 0; i < 15; i++) {
        conta[i].num = 0;
        conta[i].saldo = 0;
        conta[i].nome = "";
    }

    do {
        cout << "\nMenu de Opções\n";
        cout << "1 – Cadastrar contas\n";
        cout << "2 – Visualizar todas as contas de determinado cliente\n";
        cout << "3 – Excluir conta de menor saldo\n";
        cout << "4 – Sair\n";
        cout << "Digite sua opção: ";
        cin >> op;

        if (op < 1 || op > 4) {
            cout << "Opção inválida!\n";
        }

        // Cadastrar contas
        if (op == 1) {
            if (posi > 15) {
                cout << "Todas as contas já foram cadastradas!\n";
            } else {
                achou = 0;
                cout << "Digite o número da conta a ser incluída: ";
                cin >> num_conta;

                // Verifica se a conta já existe
                for (i = 0; i < posi - 1; i++) {
                    if (conta[i].num == num_conta) {
                        achou = 1;
                        break;
                    }
                }

                if (achou) {
                    cout << "Já existe conta cadastrada com esse número!\n";
                } else {
                    conta[posi - 1].num = num_conta;
                    cout << "Digite o nome do cliente: ";
                    cin.ignore();
                    getline(cin, conta[posi - 1].nome);
                    cout << "Digite o saldo do cliente: ";
                    cin >> conta[posi - 1].saldo;
                    cout << "Conta cadastrada com sucesso!\n";
                    posi++;
                }
            }
        }

        // Visualizar contas de um cliente
        if (op == 2) {
            cout << "Digite o nome do cliente a ser consultado: ";
            cin.ignore();
            getline(cin, nome_cliente);
            achou = 0;
            for (i = 0; i < posi - 1; i++) {
                if (conta[i].nome == nome_cliente) {
                    cout << "Número: " << conta[i].num << ", Saldo: " << conta[i].saldo << endl;
                    achou = 1;
                }
            }
            if (!achou) {
                cout << "Não existe conta cadastrada para este cliente.\n";
            }
        }

        // Excluir conta de menor saldo
        if (op == 3) {
            if (posi == 1) {
                cout << "Nenhuma conta foi cadastrada.\n";
            } else {
                menor_saldo = conta[0].saldo;
                achou = 0;
                for (i = 1; i < posi - 1; i++) {
                    if (conta[i].saldo < menor_saldo) {
                        menor_saldo = conta[i].saldo;
                        achou = i;
                    }
                }

                // Desloca contas para excluir a de menor saldo
                for (i = achou; i < posi - 1; i++) {
                    conta[i] = conta[i + 1];
                }
                posi--;
                cout << "Conta excluída com sucesso!\n";
            }
        }

    } while (op != 4);

    return 0;
}