# 🎯 Padrão: Algoritmos Gulosos (Greedy) & Invariantes

## 📌 Gatilhos no Enunciado
- Limites: $N \le 10^5$ ou $N \le 10^6$.
- Palavras-chave: "Número máximo de...", "Menor custo para...", "Escolha otimizada a cada passo".
- Condição: A escolha localmente ótima leva à solução globalmente ótima (Propriedade da Escolha Gulosa).

## 💡 A "Sacada" Lógica
- Identificar a **invariante do problema** (uma propriedade que permanece verdadeira após cada escolha).
- Ordenação prévia: Quase todo problema guloso exige ordenar a entrada antes por algum critério (início, fim, razão custo/benefício).

## ⚠️ Armadilhas e Edge Cases
- Aplicar estratégia gulosa em problemas que exigem Programação Dinâmica (troco de moedas com valores arbitrários).
- Não provar (mesmo que informalmente) que a escolha gulosa não "bloqueia" uma opção melhor no futuro.

## 🔗 Questões Relacionadas
- [[CSES - Movie Festival]]
- [[CSES - Tasks and Deadlines]]