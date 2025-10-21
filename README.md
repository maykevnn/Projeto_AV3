MAYKE VINICIUS, 1D, n28

Projetos:

_Cadastro_de_Alunos_

Este programa em C permite o cadastro de alunos, onde o usuário informa o nome e a idade de um aluno, e o sistema imprime a série correspondente com base na idade fornecida.

_Funcionalidade_
O programa solicita ao usuário o nome e a idade de um aluno.
Com base na idade fornecida, o sistema atribui uma série escolar correspondente e exibe essas informações.

As faixas de idade e suas respectivas séries são:

Idade 17: 3º Ano do Ensino Médio
Idade 16: 2º Ano do Ensino Médio
Idade 15: 1º Ano do Ensino Médio
Idade 14: 9º Ano do Ensino Fundamental
Idade 13: 8º Ano do Ensino Fundamental

_Como_usar_

1. Compile o código em um compilador C.
2. Execute o programa.
3. O programa pedirá para digitar o nome do aluno.
4. Em seguida, o programa pedirá para inserir a idade do aluno.
5. O sistema exibirá o nome, idade e a série correspondente ao aluno.

_Exemplo de execução_
Cadastro de Alunos
Digite o Nome do aluno: João
Digite a Idade do aluno: 15
Lista de Alunos Cadastrados

Aluno: João
Idade: 15
Serie: 1 ANO DO ENSINO MEDIO

_Como o código funciona_

1. O programa começa pedindo para o usuário digitar o nome e a idade do aluno.
2. Dependendo da idade inserida, o programa imprime a série correspondente (como descrito na tabela de faixas etárias).
3. Se a idade não se encaixar nas faixas previstas, o programa não fará nenhuma saída adicional.

_Prints_
<img width="471" height="314" alt="Captura de tela 2025-10-21 114246" src="https://github.com/user-attachments/assets/341b8399-e9b2-4d3c-9179-253871f43675" />



_Calculadora_basica_

Este programa em C permite realizar operações matemáticas básicas entre dois números, como adição, subtração, multiplicação e divisão.

_Funcionalidade_

O programa pede ao usuário para inserir dois números e um operador matemático (uma das operações: +, -, *, /). Dependendo do operador escolhido, o programa realizará a operação correspondente e exibirá o resultado.

Se o usuário tentar realizar uma divisão por zero, o programa mostrará uma mensagem de erro.

_Operações Suportadas_

+: Adição
-: Subtração
*: Multiplicação
/: Divisão (com verificação de divisão por zero)

_Como usar_

1. Compile o código em um compilador C.
2. Execute o programa.
3. O programa pedirá que você insira o primeiro número.
4. Em seguida, será solicitado que você insira o operador (+, -, *, /).
5. Por fim, o programa pedirá que você insira o segundo número.
6. O programa exibirá o resultado da operação, com duas casas decimais de precisão.

_Exemplo de execução_

Digite o primeiro número: 10
Digite o operador (+, -, *, /): +
Digite o segundo número: 5
O resultado é: 15.00

_Exemplo de divisão por zero_

Digite o primeiro número: 10
Digite o operador (+, -, *, /): /
Digite o segundo número: 0
Erro divisão por zero

_Como o código funciona_

1. O programa começa pedindo ao usuário o primeiro número.
2. Depois, solicita o operador matemático.
3. Em seguida, o programa pede o segundo número.
4. O `switch` é usado para determinar qual operação realizar com base no operador fornecido.
5. O resultado da operação é calculado e exibido com duas casas decimais.
6. O programa verifica se o usuário tentou dividir por zero, mostrando um erro caso isso aconteça.

_Prints_
<img width="410" height="223" alt="Captura de tela 2025-10-21 114340" src="https://github.com/user-attachments/assets/4107df23-44ab-41cf-a106-22576b7e512e" />



_Urna Online 2025_

Este programa em C simula um sistema de urna eletrônica, onde o usuário realiza seu cadastro e, em seguida, faz um voto.

_Funcionalidade_

O programa realiza o cadastro de um eleitor solicitando as seguintes informações:

Nome
CPF
RG

Após o cadastro, o eleitor é convidado a votar, informando o número do seu candidato. O sistema então registra o voto e exibe uma confirmação de voto.

_Como usar_

1. Compile o código em um compilador C de sua escolha.
2. Execute o programa.
3. O programa pedirá para digitar o seu nome, CPF e RG.
4. Após o cadastro, o programa solicitará o número do candidato em quem o eleitor deseja votar.
5. O programa exibirá uma mensagem de confirmação, mostrando o número do candidato escolhido.

_Exemplo de execução_

 Urna Online 2025📠

Digite seu Nome: João Silva
Digite seu CPF: 123456789
Digite seu RG: 987654321

 ✅  Cadastro Realizado ✅

 📟  Vote em seu Candidato 📟 
Digite o Numero de Eleitor: 555

  VOTO REALIZADO  

Voto feito no Numero de Eleitor 555

_Como o código funciona_

1. O programa começa pedindo ao usuário seu nome, CPF e RG.
2. Após o cadastro, o programa solicita o número do eleitor do candidato em quem o usuário deseja votar.
3. O voto é registrado e uma mensagem de confirmação é exibida com o número do eleitor em quem o voto foi depositado.

_Observações_

* O programa não verifica a validade dos dados (ex.: CPF e RG não são validados).
* Não há controle de votos múltiplos, ou seja, o sistema permite um único voto por execução do programa.

_Prints_
<img width="458" height="492" alt="Captura de tela 2025-10-21 114449" src="https://github.com/user-attachments/assets/191c5ae7-cf15-4f34-b276-b3863642aed1" />

