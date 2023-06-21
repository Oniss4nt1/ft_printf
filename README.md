<div align="center" >
  <img src="https://game.42sp.org.br/static/assets/achievements/ft_printfm.png" alt="Ft_printf" width="175" height="175">
  <h1><i>Fase 1</h1></i>

</div>

# :trophy: Score
> A pontuação máxima que um projeto pode atingir na 42sp, considerando apenas a parte mandatório, é de 100 pontos. Caso seja realizado o bônus do projeto, a pontuação pode ser de 101 até 125. O objetivo do mandatório é recriar a função printf da biblioteca padrão do C, e o objetivo do bônus é adicionar algumas funcionalidades extras a função printf, as famigeradas flags.


# :information_source: About
> O projeto do printf é um projeto que visa recriar a função printf da biblioteca padrão do C. A função printf é uma função que permite a impressão de dados na tela, como strings, números, caracteres, etc. Para isso, a função recebe como parâmetro uma string, que pode conter caracteres especiais (especificadores de formatos, para os mais íntimos), que são interpretados pela função, e substituídos pelos valores que são passados como argumentos. O mandatório é relativamente simples de ser feito, o bônus tem a fama de ser um dos bônus mais difíceis da grade de projetos da 42sp devido aos detalhes que devem ser levados em consideração para que a função funcione corretamente. Mas se conseguir ter tempo para fazer o bônus (ou parte dele), será um bom treino para melhorar sua lógica e habilidades de programação.

**Workflow do projeto:**
> Desta vez eu decidi criar o meu próprio workflow do projeto lá no Miro, ele é muito útil para fazer a gestão do projeto e para ter uma visão geral do que precisa ser feito, quem sabe ele pode ser útil para você também! Você pode conferir o meu fluxograma lá no Miro no link abaixo:
![Workflow do projeto](https://miro.com/app/board/uXjVMAtpUSo=/?moveToWidget=3458764557690236367&cot=14)


# :test_tube: How to use
> Este repósitorio conta com um Minunit para testar a função. O Minunit que criei compara o output com o do printf original, porém não engloba todas as possibilidades que um formato especificador pode ter, então, caso queira testar com mais formatos ou testes, basta criar novos arquivos ou adicionar MU_TEST nos arquivos já existentes (cheque a seção Minunit para mais informações). No mais, o repositório conta também com um Makefile. Este Makefile foi capado para evitar problemas com a Moulinette, então ele faz o simples: **compila mandtórios, compila o bônus, cria o arquivo .a e limpa os arquivos .o.** 

> Para usar o Makefile, basta executar o comando abaixo:


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
make <nome_do_arquivo_de_teste_sem.c >
```
> Este comando gera o arquivo executável com o nome do arquivo de teste.

```bash
make <./nome_do_arquivo_executável >
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
> Meu projeto foi desenvolvido do jeito oposto que o subject pede. Lá ele recomenda que comece pelo bônus (se for fazer) e daí cria o mandatório. Porém, seguindo conselhos de cadetes veteranos, fiz primeiro o mandatório, deixei ele separado e aí passei a ajustar a lógica do código para adaptar ao bônus. Outro ponto, o bônus é simples, mas tem muuuuuita verificação, principalmente para algumas flags. Então vai de você se tiver tempo e paciência em ter que verificar tudo, mas se quiser fazer o bônus, recomendo que faça o mandatório primeiro e depois adapte para o bônus.