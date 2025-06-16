# ♟️ Simulador de Movimentos de Peças de Xadrez em C

Este projeto simula os movimentos básicos das peças de xadrez **Torre**, **Bispo**, **Rainha** e **Cavalo** utilizando as principais estruturas de repetição da linguagem C, incluindo **recursividade** e **loops aninhados com controle de fluxo**.

## 🧠 Objetivo

Aplicar conceitos fundamentais de programação, como:
- Laços de repetição (`for`, `while`, `do-while`)
- Laços aninhados
- Recursividade
- Controle de fluxo (`break`, `continue`)
- Estrutura e organização de código

## 📌 Peças Simuladas

| Peça   | Movimento Simulado                         | Técnica Aplicada                         |
|--------|---------------------------------------------|------------------------------------------|
| Torre  | 5 casas para a direita                      | Recursividade                            |
| Bispo  | 5 casas na diagonal (cima + direita)        | Recursividade + Loops Aninhados          |
| Rainha | 8 casas para a esquerda                     | Recursividade                            |
| Cavalo | 2 casas para cima e 1 para direita ("L")    | Loops Aninhados com múltiplas condições  |

---

## ⚙️ Requisitos

- Compilador C (ex: `gcc`)
- Terminal ou IDE compatível com C

---

## ▶️ Como Compilar e Executar

1. Clone este repositório ou copie o arquivo `xadrez.c`.
2. Compile com `gcc`:

```bash
gcc xadrez.c -o xadrez
