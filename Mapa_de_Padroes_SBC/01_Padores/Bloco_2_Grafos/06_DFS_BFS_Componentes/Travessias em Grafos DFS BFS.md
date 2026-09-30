# 🎯 Padrão: Travessias em Grafos (DFS/BFS) & Componentes Conexas

## 📌 Gatilhos no Enunciado
- Limites: Vertíces $V \le 10^5$, Arestas $E \le 2 \times 10^5$ ou Matrizes $N \times M \le 10^6$.
- Palavras-chave: "Número de ilhas/regiões", "Menor número de passos em um labirinto não ponderado", "Existe caminho entre A e B?".

## 💡 A "Sacada" Lógica
- **BFS (Fila/Queue):** Garante a distância mínima (menor caminho) em grafos onde todas as arestas têm peso $1$.
- **DFS (Pilha/Recursão):** Ideal para explorar caminhos completos, detectar ciclos e fazer ordenação topológica.

## ⚠️ Armadilhas e Edge Cases
- Estouro de pilha de recursão (*Stack Overflow*) em DFS profunda (usar `sys.setrecursionlimit` ou converter para iterativo).
- Não marcar o vértice/célula como visitado *no momento da inserção na fila* da BFS (gera inserções duplicadas e TLE).

## 🔗 Questões Relacionadas
- [[CSES - Counting Rooms]]
- [[CSES - Labyrinth]]