# Batalha Naval — Nível Mestre

Projeto em linguagem C que simula o posicionamento de navios e habilidades especiais em um tabuleiro 10x10. Esta versão é a evolução final do desafio, incorporando lógica estratégica com áreas de efeito e visualização dinâmica.

## 🧭 Objetivo

- Criar um tabuleiro 10x10 preenchido com água (`0`)
- Posicionar **quatro navios** de tamanho 3:
  - Dois navios horizontais ou verticais
  - Dois navios diagonais (↘ e ↙)
- Validar os limites do tabuleiro
- Evitar sobreposição entre navios
- Exibir o tabuleiro final no console com alinhamento claro
- Implementar **três habilidades especiais** com áreas de efeito:
  - **Cone** (expande para baixo)
  - **Cruz** (horizontal e vertical cruzando o centro)
  - **Octaedro** (formato de losango)

## ⚙️ Como funciona

1. O tabuleiro é representado por uma matriz `int tabuleiro[10][10]`
2. Cada navio é composto por três partes com valor `3`, indicando ocupação
3. As habilidades são representadas por matrizes 5x5 com valores `1` (afetado) e `0` (não afetado)
4. O código verifica:
   - Se os navios cabem no tabuleiro
   - Se não há sobreposição entre navios
   - Se a área de efeito das habilidades está dentro dos limites
5. O tabuleiro é exibido com `printf`, mostrando:
   - `~` para água
   - `N` para partes dos navios
   - `*` para áreas afetadas pelas habilidades

## 🖥️ Requisitos

- Compilador C (ex: GCC)
- Terminal ou console para execução

## ▶ Como executar

1. Clone o repositório:

git clone https://github.com/MarkCouttDev/batalha-naval-aventureiro.git

2. Compile o código:

gcc batalha_naval_aventureiro.c -o batalha_naval_aventureiro

3. Execute o programa:

./batalha_naval_aventureiro

Exemplo de saída
N ~ ~ ~ ~ ~ ~ * * N  
~ N ~ * ~ ~ * * N *  
~ ~ N * N N N N * *  
~ * * * * * ~ ~ * ~  
~ * * * * * * ~ ~ ~  
~ N * * * * * ~ ~ ~  
~ N ~ ~ * * * * * ~  
~ N ~ ~ ~ ~ * ~ ~ ~  
~ ~ ~ ~ ~ ~ * ~ ~ ~  
~ ~ ~ ~ ~ ~ ~ ~ ~ ~  


🧪 Tecnologias
- Linguagem C
- Vetores e Matrizes
- Estruturas de repetição (for)
- Condicionais (if, else)
📚 Aprendizado
Este projeto ajuda a entender:
- Manipulação de matrizes bidimensionais
- Validação de limites e sobreposição entre elementos
- Posicionamento diagonal em estruturas matriciais
- Construção dinâmica de áreas de efeito com condicionais
- Impressão estruturada e legível no console
👨‍💻 Autor
Desenvolvido por Marcos Augusto do Couto
GitHub: MarkCouttDev