# 🎯 Padrão: Matemática para Maratona & Teoria dos Números

## 📌 Gatilhos no Enunciado
- Limites: Consultas sobre números até $10^6$ ou expoentes até $10^{18}$.
- Palavras-chave: "Encontrar divisores", "Verificar se é primo", "Resultado módulo $10^9 + 7$", "Calcular $A^B \pmod M$".

## 💡 A "Sacada" Lógica
- **Crivo de Eratóstenes:** Pré-computar primos e fatores primos até $10^7$ em $O(N \log \log N)$.
- **Exponenciação Rápida:** Calcular $A^B \pmod M$ em $O(\log B)$.
- **Inverso Modular:** Usar o Teorema de Fermat ($A^{M-2} \pmod M$) para realizar divisões sob aritmética modular.

## ⚠️ Armadilhas e Edge Cases
- Subtrações sob módulo gerando números negativos em C++: Usar `(a - b % MOD + MOD) % MOD`.
- Fazer a multiplicação $A \times B$ sem dar *cast* para `long long` antes de aplicar o módulo (gera overflow em $32$ bits).

## 🔗 Questões Relacionadas
- [[CSES - Exponentiation]]
- [[CSES - Counting Divisors]]