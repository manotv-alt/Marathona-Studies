#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxWins(int n, int choose_cow, const vector<int>& ratings) {
    int max_wins = 0;

    // Para cada vaca na fila (exceto a vaca escolhida), calculamos o número de vitórias potenciais se a vaca escolhida fosse trocada com ela
    for (int i = 0; i < n; ++i) {
        if (i == choose_cow - 1) // Ignora a vaca escolhida
            continue;

        int current_wins = 0;
        for (int j = n - 1; j >= 0; --j) {
            if ((j == choose_cow - 1) ? ratings[j] < ratings[i] : ratings[j] > ratings[i]) {
                current_wins++;
            }
            else if (j < i) {
                break; // Não há necessidade de continuar se chegarmos à posição da vaca escolhida na fila original
            }
        }

        max_wins = max(max_wins, current_wins);
    }

    return max_wins;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases;

    while (cases--) {
        int num_cows, choose_cow;
        cin >> num_cows >> choose_cow;

        vector<int> ratings(num_cows);
        for (int i = 0; i < num_cows; ++i)
            cin >> ratings[i];

        int result = maxWins(num_cows, choose_cow, ratings);
        cout << result << endl;
    }

    return 0;
}
