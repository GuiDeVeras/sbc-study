# 🎯 Padrão: Strings I — KMP, Z-Function & String Hashing

## 📌 Gatilhos no Enunciado
- Limites: Tamanho da string $N \le 10^6$ (onde algoritmos Ingênuos $O(N^2)$ ou $O(N \cdot M)$ dão TLE).
- Palavras-chave: "Ocorrências do padrão $P$ no texto $S$", "Maior prefixo que também é sufixo", "Comparação de substrings em $O(1)$", "Período da string".

## 💡 A "Sacada" Lógica
- **String Hashing:** Mapear substrings para inteiros usando Polinômio de Módulo e Exponenciação. Permite comparar duas substrings de tamanho $K$ em $O(1)$ após pré-processamento $O(N)$.
- **KMP / Z-Function:** Aproveitar informações de casamento de caracteres passados para reutilizar o trabalho e nunca "voltar" o ponteiro do texto $S$. Complexidade linear $O(N)$.

## ⚠️ Armadilhas e Edge Cases
- **Colisão de Hash:** Usar apenas um módulo simples pode gerar colisões controladas (hack de testes no Codeforces). Sempre use **Double Hashing** com dois módulos primos grandes (ex: $10^9+7$ e $10^9+9$).
- **Overflow de Módulo:** Lembrar de aplicar o módulo em cada etapa da soma/multiplicação da hash e tratar subtrações que geram valores negativos.

## 🔗 Questões Relacionadas
- [[CSES - String Matching]]
- [[CSES - Finding Borders]]
