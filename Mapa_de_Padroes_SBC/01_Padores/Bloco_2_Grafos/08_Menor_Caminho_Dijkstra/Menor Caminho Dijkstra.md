# 🎯 Padrão: Menor Caminho com Estados Modificados (Dijkstra / 0-1 BFS)

## 📌 Gatilhos no Enunciado
- Limites: $V \le 10^5, E \le 2 \times 10^5$, pesos $W \ge 0$.
- Palavras-chave: "Menor custo com peso nas arestas", "Menor caminho podendo ignorar até $K$ arestas", "Grafo com pesos apenas $0$ e $1$".

## 💡 A "Sacada" Lógica
- Usar `std::priority_queue` (Fila de Prioridade) para sempre expandir o nó com menor distância acumulada em $O((V + E) \log V)$.
- **Dijkstra em Camadas (Grafo de Estados):** Se o problema permite descontos/ações, monte a distância como `dist[vertice][estado]`.

## ⚠️ Armadilhas e Edge Cases
- Arestas com pesos negativos (Dijkstra entra em loop infinito/falha; nesses casos exige-se Bellman-Ford ou SPFA).
- Não ignorar pares `(distancia, vertice)` obsoletos retirados da fila de prioridade (`if (d > dist[u]) continue;`).

## 🔗 Questões Relacionadas
- [[CSES - Shortest Routes I]]
- [[CSES - Flight Discount]]