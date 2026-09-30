# 🎯 Padrão: Busca Binária na Resposta (Binary Search on Answer)

## 📌 Gatilhos no Enunciado
- Limites: $N \le 10^5$ com respostas na faixa de $1$ até $10^{18}$.
- Palavras-chave: "Maximize o mínimo", "Minimize o máximo", "Menor tempo necessário para produzir $K$ itens".
- Condição: A função de checagem $F(X)$ é monotônica (retorna `FFF...VVV` ou `VVV...FFF`).

## 💡 A "Sacada" Lógica
- Converter um problema de *otimização difícil* ("Qual o valor exato?") em um problema de *decisão simples* ("É possível atingir $X$?").

## ⚠️ Armadilhas e Edge Cases
- Overflow no cálculo do meio: Usar `low + (high - low) / 2` em vez de `(low + high) / 2`.
- Definir limites incorretos de `low` e `high` no início da busca (ex: `high` menor que a resposta máxima possível).
- Loop infinito por ajuste incorreto de ponteiros (`low = mid` vs `low = mid + 1`).

## 🔗 Questões Relacionadas
- [[CSES - Factory Machines]]
- [[CSES - Array Division]]