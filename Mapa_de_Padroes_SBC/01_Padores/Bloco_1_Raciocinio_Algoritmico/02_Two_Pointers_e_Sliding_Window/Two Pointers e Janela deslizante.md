# 🎯 Padrão: Two Pointers & Janela Deslizante (Sliding Window)

## 📌 Gatilhos no Enunciado
- Limites: $N \le 10^5$ ou $N \le 10^6$ (onde $O(N^2)$ dá TLE).
- Estrutura: Arrays ou Strings encadeadas/ordenadas.
- Palavras-chave: "Subarray contínuo com soma $K$", "Menor subsegmento contendo todas as cores", "Pares $(i, j)$ tais que...".

## 💡 A "Sacada" Lógica
- Reduzir a complexidade de $O(N^2)$ para $O(N)$ mantendo dois ponteiros (`left` e `right`) que se movem apenas para frente (monotonia).
- A janela expande à direita para cobrir uma condição e encolhe à esquerda para manter a validade/otimização.

## ⚠️ Armadilhas e Edge Cases
- Subarrays vazios ou janelas de tamanho $1$.
- Avançar o ponteiro `left` além do `right` gerando índices inválidos.
- Esquecer de atualizar o estado da janela (frequências de elementos ou soma) ao avançar `left`.

## 🔗 Questões Relacionadas
- [[CSES - Sum of Two Values]]
- [[CSES - Subarray Sums I]]