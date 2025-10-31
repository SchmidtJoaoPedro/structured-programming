#include <iostream>
#include <string>
using namespace std;

struct Reserva {
    int numAviao;
    string nomePassageiro;
};

int main() {
    const int MAX_AVIOES = 4;
    const int MAX_RESERVAS = 60;

    int avioes[MAX_AVIOES];
    int lugares[MAX_AVIOES];
    Reserva reservas[MAX_RESERVAS];
    int totalReservas = 0;

    int op;

    do {
        cout << "\nMenu de Opções:\n";
        cout << "1 - Cadastrar número dos aviões\n";
        cout << "2 - Cadastrar número de lugares disponíveis\n";
        cout << "3 - Reservar passagem\n";
        cout << "4 - Consultar por avião\n";
        cout << "5 - Consultar por passageiro\n";
        cout << "6 - Finalizar\n";
        cout << "Escolha a opção: ";
        cin >> op;

        switch(op) {
            case 1:
                for(int i = 0; i < MAX_AVIOES; i++) {
                    cout << "Digite o número do avião " << i + 1 << ": ";
                    cin >> avioes[i];
                }
                break;

            case 2:
                for(int i = 0; i < MAX_AVIOES; i++) {
                    cout << "Digite o número de lugares disponíveis no avião " << avioes[i] << ": ";
                    cin >> lugares[i];
                }
                break;

            case 3: {
                if (totalReservas >= MAX_RESERVAS) {
                    cout << "Número máximo de reservas atingido!\n";
                    break;
                }

                int numAviao;
                cout << "Digite o número do avião para reserva: ";
                cin >> numAviao;

                // Verifica se avião é válido
                int indiceAviao = -1;
                for(int i = 0; i < MAX_AVIOES; i++) {
                    if (avioes[i] == numAviao) {
                        indiceAviao = i;
                        break;
                    }
                }

                if (indiceAviao == -1) {
                    cout << "Avião inválido!\n";
                    break;
                }

                if (lugares[indiceAviao] <= 0) {
                    cout << "Voo lotado!\n";
                    break;
                }

                // Reserva válida
                cout << "Digite o nome do passageiro: ";
                cin.ignore();
                getline(cin, reservas[totalReservas].nomePassageiro);
                reservas[totalReservas].numAviao = numAviao;
                totalReservas++;
                lugares[indiceAviao]--;
                cout << "Reserva confirmada!\n";
                break;
            }

            case 4: {
                int numAviao;
                cout << "Digite o número do avião para consulta: ";
                cin >> numAviao;

                bool encontrou = false;
                cout << "Reservas no avião " << numAviao << ":\n";
                for(int i = 0; i < totalReservas; i++) {
                    if (reservas[i].numAviao == numAviao) {
                        cout << "- " << reservas[i].nomePassageiro << endl;
                        encontrou = true;
                    }
                }
                if (!encontrou) cout << "Nenhuma reserva para este avião.\n";
                break;
            }

            case 5: {
                string nome;
                cout << "Digite o nome do passageiro para consulta: ";
                cin.ignore();
                getline(cin, nome);

                bool encontrou = false;
                cout << "Reservas do passageiro " << nome << ":\n";
                for(int i = 0; i < totalReservas; i++) {
                    if (reservas[i].nomePassageiro == nome) {
                        cout << "- Avião: " << reservas[i].numAviao << endl;
                        encontrou = true;
                    }
                }
                if (!encontrou) cout << "Nenhuma reserva encontrada para este passageiro.\n";
                break;
            }

            case 6:
                cout << "Finalizando programa...\n";
                break;

            default:
                cout << "Opção inválida!\n";
        }

    } while(op != 6);

    return 0;
}