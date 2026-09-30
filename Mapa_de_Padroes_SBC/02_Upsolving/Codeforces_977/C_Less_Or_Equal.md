---
data: 2026-08-15
plataforma: Codeforces
dificuldade: 1000 (Div. 3 C)
topicos: [ordenacao, casos-de-borda]
status: upsolved
---

# Codeforces 977C - Less or Equal

> [!abstract] Key Insight (A Sacada)
> Apos ordenar o array, o candidato natural a x e a[k-1]. A unica condicao para validar essa escolha e que o proximo elemento (a[k]) nao seja igual a a[k-1].

---

## Analise de Limites e Complexidade

* **Limites:** n ate 2 * 10^5, k entre 0 e n, e elementos ate 10^9.
* **Complexidade de Tempo:** O(n log n) devido a ordenacao.
* **Complexidade de Espaco:** O(n) para o vetor.

> [!warning] Armadilhas e Casos de Borda
> - **k = 0:** Exige checar se o menor elemento e maior que 1. Se for 1, e impossivel escolher x >= 1 sem incluir esse elemento.
> - **k = n:** Nao exige checagem de a[k] pois todos os elementos devem ser incluidos.

---

## Conexoes no Mapa de Padroes
- **Padrao Relacionado:** [[01_Gulosos_e_Invariantes]]
- **Aplicacoes Semelhantes:** Problemas de contagem e ordenacao de intervalos.

---

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    if (!(cin >> n >> k)) return 0;
    
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    sort(num.begin(), num.end());
    
    if (k == 0) {
        // Para k = 0, se o menor elemento for > 1, podemos escolher x = 1
        if (num[0] > 1) cout << "1\n";
        else cout << "-1\n";
    }
    else if (k == n) {
        // Se k = n, basta escolher o maior elemento do vetor
        cout << num[n - 1] << "\n";
    }
    else if (num[k - 1] != num[k]) {
        // Se o elemento em k-1 nao for igual ao proximo (em k)
        cout << num[k - 1] << "\n";
    }
    else {
        cout << "-1\n";
    }

    return 0;
}
