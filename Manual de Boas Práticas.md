# Manual de Boas Práticas em Programação em C

A intenção deste conjunto de boas práticas é fornecer diretrizes para escrever código em C de forma clara e objetiva, facilitando a manutenção e extensão do programa.

1. Comentários iniciais:
    * Inclua um comentário no início do código com as seguintes informações: nome do programa, objetivo, nome do programador e data de criação.

2. Nomenclatura:
    * Use nomes simples e claros para rotinas e variáveis.
    * O tamanho do nome da variável não é importante, mas a clareza é.
    * Exemplo: `salario_liquido = salario_bruto - descontos;`

3. Indentação:
    * Indente seu código adequadamente sempre.

4. Comentários de função:
    * Antes do corpo do código de cada função, inclua sempre um comentário explicando o que ela faz.

5. Variáveis em rotinas extensas:
    * Se a rotina for muito grande, explique também qual é a finalidade de cada variável para facilitar o entendimento e a manutenção.

6. Declaração de variáveis:
    * Declare as variáveis logo após o título da rotina.
    * Não declare as variáveis “soltas” no meio do código da função.
    * Organize seu código, sempre declarando as variáveis logo após o título da rotina e em seguida inicialize-as.

7. Clareza e objetividade:
    * Seja sempre claro e objetivo.
    * Evite o uso de comandos muito rebuscados apenas porque você aprendeu uma forma interessante de fazer uma operação.
    * Pense que outra pessoa pode ter que dar manutenção no código e ficar confusa com um comando exótico.

8. Tamanho das rotinas:
    * Procure não fazer rotinas excessivamente extensas.
    * Quanto menor e mais objetiva for a rotina, melhor.

9. Repetição de código:
    * Evite repetições de código.
    * Construa uma rotina e chame-a quando for necessário.
    * Quanto menor for o tamanho da rotina, normalmente é mais fácil para depurar.

10. Planejamento:
    * Faça o planejamento.
    * Tenha sempre qual é seu objetivo em mente.
    * Não saia escrevendo código sem saber direito o que vai fazer.
    * Elabore um diagrama no mínimo. Acredite, isso ajuda muito.

11. Números Mágicos:
    * Evite a utilização de números mágicos.
    * Use constantes previamente declaradas com #define.

12. Espaçamento:
    * Utilize o espaçamento de forma a tornar o código mais legível.

13. Declaração de constantes:
    * Declare as constantes no início do código e nunca no meio do mesmo.

14. Nomenclatura de constantes:
    * Utilize sempre letras maiúsculas para nomear as constantes em linguagem C.

15. Uso de chaves:
    * Utilize sempre { } mesmo que seja para apenas um comando dentro do bloco.

16. Comentários desnecessários:
    * Não exagere nos comentários.
    * Comandos óbvios não precisam ser comentados.

17. Explique fórmulas complexas e passos complicados de um determinado algoritmo:
    * Nesses casos, um comentário explicativo torna-se obrigatório a fim de que a manutenção do código possa ser feita com menos esforço.
    * O comentário deve explicar a lógica por trás do cálculo e não apenas descrever o que o código faz.

18. Escreva os comentários necessários na medida que for escrevendo o código:
    * Não escreva o código e deixe para comentar depois.

19. Evite a utilização de macros:
    * As macros podem tornar o código difícil de ler e entender.
    * Além disso, as macros não são tipadas, o que pode levar a erros difíceis de detectar.

20. Faça testes unitários:
    * Os testes unitários são uma forma de verificar se cada parte do seu código está funcionando corretamente.
    * Ajudam a detectar problemas precocemente e facilitam a manutenção do código.
    * Sempre que possível, crie testes para cada função que você escrever.