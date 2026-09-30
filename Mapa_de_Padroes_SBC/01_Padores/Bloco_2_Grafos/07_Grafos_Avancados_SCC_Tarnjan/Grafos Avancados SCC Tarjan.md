# 🎯 Padrão: Grafos Avançados — Topological Sort, Pontes/Articulação & SCC (Tarjan/Kosaraju)

## 📌 Gatilhos no Enunciado
- Limites: $V \le 10^5$, $E \le 2 \times 10^5$.
- Palavras-chave: "Arestas críticas que desconectam o grafo", "Agrupar vértices mutuamente alcançáveis", "Ordem de dependência entre tarefas (DAG)", "Condição de 2-SAT".

## 💡 A "Sacada" Lógica
- **Ordenação Topológica:** Usar BFS (Algoritmo de Kahn com grau de entrada) ou DFS para ordenar vértices em um Grafo Acíclico Dirigido (DAG).
- **Componentes Fortemente Conexas (SCC - Tarjan/Kosaraju):** Reduzir um grafo direcionado complexo a um DAG simplificado de componentes conexas.
- **Pontes e Pontos de Articulação:** Manter os tempos de descoberta `tin[u]` e o menor tempo de retorno `low[u]` via DFS para encontrar arestas/vértices vitais.

## ⚠️ Armadilhas e Edge Cases
- Tentar rodar Ordenação Topológica em grafos com ciclos (deve-se checar a validade do grau de entrada ou contagem de visitados).
- Não considerar grafos desconexos com múltiplas componentes na busca por Pontes ou SCCs (é necessário rodar o loop principal para todos os vértices $1 \dots V$).

## 🔗 Questões Relacionadas
- [[CSES - Course Schedule]]
- [[CSES - Planets and Kingdoms]]
