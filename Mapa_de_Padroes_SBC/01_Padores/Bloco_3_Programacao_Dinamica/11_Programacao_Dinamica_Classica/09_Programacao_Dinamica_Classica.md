# 🎯 Padrão: Programação Dinâmica Clássica (DP - Mochila, LCS, LIS)

## 📌 Gatilhos no Enunciado
- Limites: $N \le 10^3$ a $10^4$ (tabelas $O(N^2)$) ou $N \le 10^5$ com DP $O(N)$.
- Palavras-chave: "Contar o número de formas de atingir soma $S$", "Maior subsequência comum/crescente", "Combinações com sobreposição de subproblemas".

## 💡 A "Sacada" Lógica
- Definir estritamente o significado do vetor `dp[i]`: *"O que exatamente este índice armazena?"*.
- Escrever a relação de recorrência (Transição de Estado) baseada em escolhas anteriores.

## ⚠️ Armadilhas e Edge Cases
- Ordem incorreta dos loops na DP de 1D (gerando uso indevido do mesmo item múltiplas vezes na Mochila 0/1).
- Esquecer de aplicar a operação de Módulo ($10^9 + 7$) em **cada** adição de transição para evitar overflow.
- Casos base da tabela não inicializados (ex: `dp[0] = 1`).

## 🔗 Questões Relacionadas
- [[CSES - Dice Combinations]]
- [[CSES - Coin Combinations I]]
- [[CSES - Minimizing Coins]]