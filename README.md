#  Batalha Naval — Nível Aventureiro

Projeto em linguagem C que simula o posicionamento de navios em um tabuleiro 10x10. Esta versão é uma evolução do desafio do nível novato, agora com suporte a navios diagonais e múltiplas validações.

##  Objetivo

- Criar um tabuleiro 10x10 preenchido com água (`0`)
- Posicionar **quatro navios** de tamanho 3:
  - Dois navios horizontais ou verticais
  - Dois navios diagonais (↘ e ↙)
- Validar os limites do tabuleiro
- Evitar sobreposição entre navios
- Exibir o tabuleiro final no console com alinhamento claro

##  Como funciona

1. O tabuleiro é representado por uma matriz `int tabuleiro[10][10]`
2. Cada navio é composto por três partes com valor `3`, indicando ocupação
3. O código verifica:
   - Se os navios cabem no tabuleiro
   - Se não há sobreposição entre navios (inclusive diagonais)
4. O tabuleiro é exibido com `printf`, mostrando:
   - `0` para água
   - `3` para partes dos navios

##  Requisitos

- Compilador C (ex: GCC)
- Terminal ou console para execução

## ▶ Como executar

1. Clone o repositório:

git clone https://github.com/MarkCouttDev/batalha-naval-aventureiro.git


2. Compile o código:
gcc batalha_naval_aventureiro.c -o batalha_naval_aventureiro

3. 	Execute o programa:
./batalha_naval_aventureiro

# Exemplo de saída
Tabuleiro:
3 0 0 0 0 0 0 0 0 3
0 3 0 0 0 0 0 0 3 0
0 0 3 0 3 3 3 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 3 0 0 0 0 0 0 0 0
0 3 0 0 0 0 0 0 0 0
0 3 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0


# Tecnologias
- Linguagem C
- Vetores e Matrizes
- Estruturas de repetição (for)
- Condicionais (if, else)
# Aprendizado
Este projeto ajuda a entender:
- Manipulação de matrizes bidimensionais
- Validação de limites e sobreposição entre elementos
- Posicionamento diagonal em estruturas matriciais
- Impressão estruturada e legível no console
# Autor
Desenvolvido por Marcos Augusto do Couto
GitHub: MarkCouttDev
