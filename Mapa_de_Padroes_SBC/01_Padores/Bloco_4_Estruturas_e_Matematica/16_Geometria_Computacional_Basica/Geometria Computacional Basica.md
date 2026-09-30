# 🎯 Padrão: Geometria Computacional Básica — Produto Vetorial, Convex Hull & Polígonos

## 📌 Gatilhos no Enunciado
- Limites: $N \le 10^5$ pontos no plano cartesiano $2\text{D}$.
- Palavras-chave: "Orientação de três pontos (CW/CCW)", "Menor fecho convexo que envolve todos os pontos", "Ponto dentro ou fora do polígono", "Área de polígono".

## 💡 A "Sacada" Lógica
- **Produto Vetorial (Cross Product):** Evita o uso de números de ponto flutuante (`double`/trigonometria). Determina se a virada do ponto $A \rightarrow B \rightarrow C$ é para a esquerda ($>0$), direita ($<0$) ou colinear ($=0$).
- **Convex Hull (Graham Scan / Monotone Chain):** Ordenar pontos por coordenadas e construir as cascas inferior e superior em $O(N \log N)$.
- **Fórmula do Cadarço (Shoelace Formula):** Calcular a área exata de qualquer polígono simples usando produtos cruzados de vértices consecutivos.

## ⚠️ Armadilhas e Edge Cases
- **Precisão de Ponto Flutuante:** NUNCA use `double` ou comparações de igualdade `==` com coordenadas flutuantes. Trabalhe com inteiros de 64 bits (`long long`) usando o Produto Vetorial.
- **Pontos Colineares:** Tratar se os pontos colineares na borda do Fecho Convexo devem ser incluídos ou descartados (depende do enunciado).

## 🔗 Questões Relacionadas
- [[CSES - Point Location Test]]
- [[CSES - Convex Hull]]
