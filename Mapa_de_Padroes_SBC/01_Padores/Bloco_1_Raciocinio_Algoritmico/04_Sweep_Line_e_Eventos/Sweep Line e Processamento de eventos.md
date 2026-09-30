# 🎯 Padrão: Sweep Line (Linha de Varredura) & Processamento de Eventos

## 📌 Gatilhos no Enunciado
- Limites: $N \le 10^5$ intervalos ou geometrias.
- Palavras-chave: "Sobreposição de intervalos", "Ponto com maior número de intersecções", "Área total de retângulos".

## 💡 A "Sacada" Lógica
- Transformar entidades 2D/Intervalos em uma sequência temporal de **Eventos de Entrada (+1)** e **Eventos de Saída (-1)**.
- Ordenar os eventos no eixe $X$ e manter um estado ativo (geralmente usando `std::set` ou `std::map`) enquanto a "linha" varre o plano.

## ⚠️ Armadilhas e Edge Cases
- Empate nas coordenadas de evento: Definir estritamente se o evento de Entrada vem *antes* ou *depois* do evento de Saída na mesma posição.
- Overflow na ordenação de coordenadas grandes ($X \ge 10^9$).

## 🔗 Questões Relacionadas
- [[CSES - Restaurant Customers]]
- [[CSES - Intersection Points]]