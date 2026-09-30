# 🎯 Padrão: Consultas em Intervalos (Segment Tree & Fenwick Tree)

## 📌 Gatilhos no Enunciado
- Limites: $N \le 2 \times 10^5$ com $Q \le 2 \times 10^5$ operações mistas.
- Palavras-chave: "Atualizar valor na posição $X$ e consultar a soma/mínimo no intervalo $[L, R]$ em $O(\log N)$".

## 💡 A "Sacada" Lógica
- **Fenwick Tree (BIT):** Excelente e rápida de codar para somas de prefixos e atualizações pontuais.
- **Segment Tree:** Estrutura em árvore binária universal capaz de responder qualquer operação associativa (soma, min, max, GCD) em intervalos.

## ⚠️ Armadilhas e Edge Cases
- Tamanho do array da Segment Tree: Deve ter tamanho $4 \times N$ para evitar *out of bounds*.
- Erros de limite nos nós: Esquecer que os índices de busca no vetor de consulta são baseados em $1$ ou $0$.

## 🔗 Questões Relacionadas
- [[CSES - Dynamic Range Sum Queries]]
- [[CSES - Dynamic Range Minimum Queries]]