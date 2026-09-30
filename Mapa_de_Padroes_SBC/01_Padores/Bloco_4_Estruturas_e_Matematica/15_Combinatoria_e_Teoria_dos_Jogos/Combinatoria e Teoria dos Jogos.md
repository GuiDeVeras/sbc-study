# 🎯 Padrão: Combinatória Avançada & Teoria dos Jogos (Inclusão-Exclusão, Nim & Sprague-Grundy)

## 📌 Gatilhos no Enunciado
- Limites: $N$ até $10^6$ para combinações ou $N$ pilhas de elementos para jogos.
- Palavras-chave: "Contar o número de formas válidas ignorando sobreposições", "Dois jogadores jogam otimizadamente", "Quem vence o jogo?", "Jogo do Nim / pilhas de moedas".

## 💡 A "Sacada" Lógica
- **Princípio da Inclusão-Exclusão:** Calcular a união de conjuntos somando os tamanhos individuais, subtraindo intersecções pares e somando intersecções ímpares.
- **Teoria dos Jogos (Nim):** Se o operador XOR de todas as pilhas ($\bigoplus S_i$) for maior que zero ($\neq 0$), o Primeiro Jogador tem estratégia vitoriosa.
- **Teorema de Sprague-Grundy:** Qualquer jogo imparcial pode ser reduzido a um jogo de Nim equivalente calculando o valor MEX dos estados.

## ⚠️ Armadilhas e Edge Cases
- Tentar simular o jogo turno a turno via Força Bruta ou DP quando existe um padrão de Nim/XOR em $O(1)$.
- Esquecer de pré-computar fatoriais e inversos fatoriais com aritmética modular para calcular $\binom{N}{K}$ em $O(1)$.

## 🔗 Questões Relacionadas
- [[CSES - Nim Game I]]
- [[CSES - Creating Strings II]]
