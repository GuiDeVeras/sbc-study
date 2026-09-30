# 🎯 Padrão: Programação Dinâmica de Estados Complexos (Bitmask & Tree DP)

## 📌 Gatilhos no Enunciado
- **Bitmask DP:** Limites muito pequenos $N \le 20$. Palavras-chave: "Visitar todas as cidades (PCV)", "Atribuir $N$ tarefas para $N$ pessoas".
- **Tree DP:** $N \le 10^5$ sobre uma estrutura de Árvore. Palavras-chave: "Selecione nós sem pegar vizinhos diretos", "Maior caminho independente na árvore".

## 💡 A "Sacada" Lógica
- **Bitmask DP:** Representar subconjuntos de elementos visitados usando bits de um inteiro `int mask` ($1$ se visitado, $0$ se não).
- **Tree DP:** A computação é feita nas folhas primeiro (pós-ordem em DFS) e acumulada para a raiz.

## ⚠️ Armadilhas e Edge Cases
- Precedência de operadores de bits em C++: Sempre usar parênteses extras (ex: `if ((mask & (1 << i)) != 0)`).
- Não alocar espaço suficiente na tabela de memoização ($2^N \times N$).

## 🔗 Questões Relacionadas
- [[CSES - Matching]]
- [[CSES - Tree Matching]]