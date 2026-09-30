# 🎯 Padrão: Fluxo em Redes — Fluxo Máximo (Dinic/Edmonds-Karp) & Emparelhamento Bipartido

## 📌 Gatilhos no Enunciado
- Limites: $V \le 500$, $E \le 5000$ (algoritmos de fluxo lidam com grafos menores).
- Palavras-chave: "Capacidade máxima de transporte entre fonte e dreno", "Corte Mínimo (Min-Cut)", "Atribuir elementos de dois grupos disjuntos (Emparelhamento Bipartido)".

## 💡 A "Sacada" Lógica
- **Teorema do Fluxo Máximo e Corte Mínimo:** O valor do fluxo máximo de $S$ até $T$ é exatamente igual à capacidade do menor corte de arestas que separa $S$ de $T$.
- **Emparelhamento Bipartido:** Criar uma Fonte ($S$) ligada ao Grupo A e o Grupo B ligado ao Dreno ($T$), todos com capacidade $1$. O fluxo máximo é o número máximo de pares.

## ⚠️ Armadilhas e Edge Cases
- Não adicionar as **arestas residuais de capacidade $0$** no grafo direcionado (necessárias para o fluxo poder "voltar" na rede).
- *Time Limit Exceeded:* Preferir o algoritmo de **Dinic** $O(V^2 E)$ em vez de Ford-Fulkerson puro $O(E \cdot \text{Fluxo})$, pois Dinic escala muito melhor em grafos genéricos.

## 🔗 Questões Relacionadas
- [[CSES - Download Speed]]
- [[CSES - Police Chase]]
