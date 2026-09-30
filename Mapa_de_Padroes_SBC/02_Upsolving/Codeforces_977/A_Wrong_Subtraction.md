---
data: 2026-08-15
plataforma: Codeforces
dificuldade: 800 (Facil / Div. 3 A)
topicos: [implementacao, simulacao, math-basica]
status: upsolved
---

# Codeforces 977A - Wrong Subtraction

> [!abstract] Key Insight (A Sacada)
> O problema e uma simulacao direta de um algoritmo passo a passo com k repeticoes:
> 1. Se o ultimo digito for 0 (isto e, n % 10 == 0), dividimos n por 10.
> 2. Se o ultimo digito for diferente de 0, subtraimos 1 de n.

---

## Analise de Limites e Complexidade

* **Limites:** n entre 2 e 10^9, e k entre 1 e 50.
* **Complexidade de Tempo:** O(k) - Executa exatamente k operacoes. Como k <= 50, o tempo de execucao e instantaneo (menos de 1 ms).
* **Complexidade de Espaco:** O(1) - Utiliza apenas espaco de memoria constante.

> [!tip] Dica de Implementacao
> Como k <= 50 e n <= 10^9, os tipos primitivos padroes de 32 bits (int em C++) suportam perfeitamente os valores sem risco de overflow.

---

## 🛠️ Implementação Limpa (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	
	for (int i = 0; i < k; i++) {
		if (!(n % 10)) n /= 10;
		else n--;
	}
	
	cout << n << "\n";

}
