<div align="center" >
  <img src="https://game.42sp.org.br/static/assets/achievements/get_next_linem.png" alt="Ft_printf" width="175" height="175">
  <h1><i>Fase 1</h1></i>

</div>

# :trophy: Score
> A pontuação máxima que um projeto pode atingir na 42sp, considerando apenas a parte mandatório, é de 100 pontos. Caso seja realizado o bônus do projeto, a pontuação pode ser de 101 até 125. O objetivo do mandatório é recriar a função printf da biblioteca padrão do C, e o objetivo do bônus é adicionar algumas funcionalidades extras a função printf, as famigeradas flags.


# :information_source: About
> O projeto do printf é um projeto que visa recriar a função printf da biblioteca padrão do C. A função printf é uma função que permite a impressão de dados na tela, como strings, números, caracteres, etc. Para isso, a função recebe como parâmetro uma string, que pode conter caracteres especiais (especificadores de formatos, para os mais íntimos), que são interpretados pela função, e substituídos pelos valores que são passados como argumentos. O mandatório é relativamente simples de ser feito, o bônus tem a fama de ser um dos bônus mais difíceis da grade de projetos da 42sp devido aos detalhes que devem ser levados em consideração para que a função funcione corretamente. Mas se conseguir ter tempo para fazer o bônus (ou parte dele), será um bom treino para melhorar sua lógica e habilidades de programação.

**Workflow do projeto:**
> Desta vez eu decidi criar o meu próprio workflow do projeto lá no Miro, ele é muito útil para fazer a gestão do projeto e para ter uma visão geral do que precisa ser feito, quem sabe ele pode ser útil para você também! Abaixo a imagem desse querido:

![Workflow do projeto](https://imgur.com/gallery/LXvUSd2)

# :test_tube: How to use
> Este repósitorio conta com um Minunit para testar a função. O Minunit que criei compara o output com o do printf original, porém não engloba todas as possibilidades que um formato especificador pode ter, então, caso queira testar com mais formatos ou testes, basta criar novos arquivos ou adicionar MU_TEST nos arquivos já existentes (cheque a seção Minunit para mais informações). No mais, o repositório conta também com um Makefile. Este Makefile foi capado para evitar problemas com a Moulinette, então ele faz o simples: **compila mandtórios, compila o bônus, cria o arquivo .a e limpa os arquivos .o.** 

Para usar o Makefile, basta executar o comando abaixo:


```bash
make
```

> Você também pode utilizar o comando make para compilar apenas o mandatório ou o bonus, além de verificar os arquivos com a Norminette. 
Basta executar os comandos abaixo:

```bash
make mandatory
```

```bash
make bonus
```

```bash
make norm
```

# :gear: Minunit - TDD
> Esse Minunit segue um template que eu fiz anteriormente, o link dele está abaixo:

Ele é composto por arquivos de teste e um Makefile. Esse Makefile é diferente do que foi feito para o printf, para realizar o teste, ele precisa de três caminhos: o arquivo na pasta src, o diretório do arquivo de teste e o header do projeto em questão, o ft_printf. Ao dar o make, ele irá compilar o arquivo da pasta src e o arquivo do tests juntos, gerando um arquivo executável. Depois basta rodar esse arquivo executável para realizar o teste.

Os comandos para usar a Minunit são:

```bash
make <nome do arquivo de teste sem .c >
```
> Este comando gera o arquivo executável com o nome do arquivo de teste.

```bash
make <./nome do arquivo executável >
```
> Este comando executa o arquivo executável, realizando o teste.

```bash
make leak
```
> Make leak irá rodar o executável com o valgrind, para verificar se há vazamentos de memória.

```bash
make clean
```

> Futuramente pretendo aperfeiçoar meu Minunit e trazer novas funcionalidades para o Makefile usado, consultem o repositorio do Minunit para mais informações ou para usar novas versões.


# :building_construction: Development
> Meu projeto foi desenvolvido com cadeia de arrays, pois tive dificuldade em implementar com lista encadeada. Além de fazer com cadeia de arrays, quis fazer exclusivamente com ponteiros, para treinar a síntaxe e entender melhor como funciona a manipulação de ponteiros em C. Foi bem desafiador, principalmente para evitar que vazamentos ocorressem por perda de referência.