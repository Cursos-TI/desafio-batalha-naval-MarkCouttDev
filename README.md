# 🚢 Batalha Naval — Nível Novato

Simulação simples de posicionamento de navios em um tabuleiro 10x10 usando linguagem C. 

## 📌 Objetivo

- Criar um tabuleiro 10x10 preenchido com água (`0`)
- Posicionar dois navios de tamanho 3:
  - Um navio horizontal
  - Um navio vertical
- Evitar sobreposição entre navios
- Exibir o tabuleiro final no console

## 🧠 Como funciona

1. O tabuleiro é representado por uma matriz `int tabuleiro[10][10]`
2. Os navios são vetores de tamanho 3 com valor `3`, indicando partes do navio
3. O código verifica se os navios cabem no tabuleiro e se não há sobreposição
4. O tabuleiro é exibido com `printf`, mostrando:
   - `0` para água
   - `3` para partes dos navios

## 📥 Requisitos

- Compilador C (ex: GCC)
- Terminal ou console para execução

## ▶️ Como executar

1. Clone o repositório:

```bash
git clone https://github.com/MarkCouttDev/batalha-naval-novato.git

2. 	Compile o código:
gcc batalha_naval.c -o batalha_naval
3. 	Execute o programa:
./batalha_naval

💡 Exemplo de saída
Tabuleiro:
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 3 3 3 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 3 0 0 0 0 0 0 0 0
0 3 0 0 0 0 0 0 0 0
0 3 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0


🛠️ Tecnologias
• 	Linguagem C
• 	Vetores e Matrizes
• 	Estruturas de repetição ()
• 	Condicionais ()

📚 Aprendizado
Este projeto ajuda a entender:
• 	Como manipular matrizes bidimensionais
• 	Validação de limites e sobreposição
• 	Impressão estruturada de dados no console

🧑‍💻 Autor
Desenvolvido por Marcos Augusto do Couto
GitHub: MarkCouttDev
