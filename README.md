<div align="center" >
  <img src="https://game.42sp.org.br/static/assets/achievements/get_next_linem.png" alt="Ft_printf" width="175" height="175">
  <h1><i>Fase 1</h1></i>

</div>

# :trophy: Score
> A pontuação máxima que um projeto pode atingir na 42sp, considerando apenas a parte mandatório, é de 100 pontos. Caso seja realizado o bônus do projeto, a pontuação pode ser de 101 até 125. O objetivo do mandatório é recriar a função printf da biblioteca padrão do C, e o objetivo do bônus é adicionar algumas funcionalidades extras a função printf, as famigeradas flags.


# :information_source: About
> O projeto do printf é um projeto que visa recriar a função printf da biblioteca padrão do C. A função printf é uma função que permite a impressão de dados na tela, como strings, números, caracteres, etc. Para isso, a função recebe como parâmetro uma string, que pode conter caracteres especiais, que são interpretados pela função, e substituídos pelos valores que são passados como parâmetro. O mandatório é relativamente simples de ser feito, o bônus tem a fama de ser um dos bônus mais difíceis da grade de projetos da 42sp devido aos detalhes que devem ser levados em consideração para que a função funcione corretamente. Mas se conseguir ter tempo para fazer o bônus (ou parte dele), será um bom treino para melhorar sua lógica e habilidades de programação.


# :test_tube: How to use
> Este repósitorio conta com um Minunit para testar a função. O Minunit que criei compara o output com o do printf original, porém não engloba todas as possibilidades que um formato especificador pode ter, então, caso queira testar com mais formatos ou testes, basta criar novos arquivos ou adicionar MU_TEST nos arquivos já existentes (cheque a seção Minunit para mais informações). No mais, o repositório conta também com um Makefile. Este Makefile foi capado para evitar problemas com a Moulinette, então ele faz o simples: compila mandtórios, compila o bônus, cria o arquivo .a e limpa os arquivos .o. Para usar o Makefile, basta executar o comando abaixo:

```bash
make
```

> Onde <seu_valor> é o valor que você quer que o BUFFER_SIZE tenha. Caso não seja passado nenhum valor, o BUFFER_SIZE será 50.
Outro ponto, é que o main.c do bônus, irá receber como argumento os arquivos .txt que você quer testar, então, para usa-lo, execute o comando abaixo:

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=<seu_valor> get_next_line.c get_next_line_utils.c main_bonus.c && ./a.out <arquivo1.txt> <arquivo2.txt> <arquivo3.txt>
```


# :building_construction: Development
> Meu projeto foi desenvolvido com cadeia de arrays, pois tive dificuldade em implementar com lista encadeada. Além de fazer com cadeia de arrays, quis fazer exclusivamente com ponteiros, para treinar a síntaxe e entender melhor como funciona a manipulação de ponteiros em C. Foi bem desafiador, principalmente para evitar que vazamentos ocorressem por perda de referência.