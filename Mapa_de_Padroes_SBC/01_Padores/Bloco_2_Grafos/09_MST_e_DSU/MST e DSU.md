# 🎯 Padrão: Árvores Geradoras Mínimas (MST) & Disjoint Set Union (DSU)

## 📌 Gatilhos no Enunciado
- Limites: $V \le 10^5$, Consultas dinâmicas de conexão.
- Palavras-chave: "Conectar todas as cidades com custo mínimo", "Agrupar elementos em conjuntos", "Adicionar arestas e checar conectividade em tempo real".

## 💡 A "Sacada" Lógica
- **DSU (Union-Find):** Mantém conjuntos disjuntos com compressão de caminho (*Path Compression*) e união por rank em tempo quase constante $O(\alpha(N))$.
- **Kruskal (MST):** Ordena as arestas por peso e usa o DSU para unir componentes sem criar ciclos.

## ⚠️ Armadilhas e Edge Cases
- Esquecer de inicializar o pai de cada elemento como ele mesmo (`parent[i] = i`).
- Unir os nós diretamente no array de pais sem chamar a função `find()` primeiro.

## 🔗 Questões Relacionadas
- [[CSES - Road Reparation]]
- [[CSES - Road Construction]]