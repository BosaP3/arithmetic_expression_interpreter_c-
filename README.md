# arithmetic_expression_interpreter_c++
-Pedro Antônio da Silva | 194828 

-----------------------------------------------

Abordagem Utilizada:
Criação das classes base, adaptação às questões solicitadas e correção da implementação.
O início da criação do projeto se deu por meio da criação da classe main.cpp, onde a expressão é recebida. Em seguida, foi implementada a classe expression_evaluation.cpp para gerenciamento das informações recebidas, onde ocorrem os tratamentos de erro e o armazenamento de variáveis, assim como a coordenação da interação com o usuário. A partir da validação da expressão na classe atual, ocorre a criação e resolução da árvore de expressão na classe expression_tree.cpp, que trabalha com uma expressão já validada.

Info:
1- Main.cpp:
    - Criação de uma classe Main que funciona como uma Interface REPL (Read-Eval-Print-Loop), recebendo as entradas de um usuário.
    - Cada entrada é encaminhada para a função evaluation() da biblioteca "expression_evaluation.cpp", onde será avaliada.
2- expression_evaluation.cpp: 
    - Void evaluation(): realiza a coordenação para cada caso de entrada.
    - Bool isNumber(): verifica se a entrada é composta inteiramente por digitos.
    - Bool idOperator(): verifica se a entrada é um operador válido.
    - Bool isVariable(): verifica se a entrada já foi mapeada.
    - Void evaluation_Variable(): recebe e guarda uma variável no unordered_map, levando em conta possíveis entradas de expressão como valor de variável e ignorando espaços no nome e valor da variável.  
    - std::string validExpression(): recebe e percorre uma String para analisar e/ou adaptar os parâmetros corretos de uma Expressão Aritmética, controle de exceções.
3- expression_tree.cpp:
    - int getPriority(): verifica se um operador tem uma prioridade maior que outro.
    - Node *buildExpression(): constrói a árvore de expressão a partir de uma expressão "inorder/infixa".
    - double calculateResult(): recebe um Node e calcula o resultado da expressão.
