#include <iostream>
#include <string>
#include "expression_evaluation.cpp"

using namespace std;

int main()
{
    string user_input;

    // Interface REPL (Read-Eval-Print-Loop)
    cout << "OBS: Digite as expressoes usando espaços como delimitador. \n";
    while (1)
    {
        cout << ">>> ";
        getline(cin, user_input);

        if (user_input == "exit")
            break;

        evaluation(user_input); // avaliação de entrada
    }

    return 0;
}
