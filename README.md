# O Plano Definitivo — Maratona SBC/ICPC

Este plano combina tudo que discutimos: os 16 tópicos, a rotina semanal (seg-sáb), os princípios de aprendizagem baseados em evidência, e o sistema de priorização por necessidade (em vez de calendário fixo) para resolver o problema de lacunas em tópicos antigos.

Importante: nenhum plano é "perfeito" de verdade — este é o melhor equilíbrio possível entre aprender coisa nova e não esquecer o que já foi aprendido, dado um tempo finito. A perfeição real está em ajustar semana a semana com base no que a Tabela de Prioridade (abaixo) mostrar.

---

## 1. Estrutura semanal (mantida, já validada)

| Dia | Atividade | Função no aprendizado |
|---|---|---|
| Segunda | Estudar tópico novo | Elaboração + dificuldade desejável |
| Terça | Praticar tópico novo (Core) | Prática deliberada |
| Quarta | Upsolving de terça | Testing effect + feedback |
| Quinta | Core do tópico + 1 item da Tabela de Prioridade | Interleaving + repetição espaçada adaptativa |
| Sexta | Upsolving + 15-20min de recall de fichas antigas | Feedback + recall ativo |
| Sábado | Simulado cego (contest escolhido na hora) + upsolving do simulado | Prática deliberada real + interleaving natural |

Depois do sábado: **parar de estudar maratona até segunda.** Sono consolida o que foi aprendido; estudar mais no mesmo dia compete pelo mesmo processo de consolidação.

---

## 2. A Tabela de Prioridade (substitui o calendário fixo)

Ao final de cada tópico estudado (a partir da semana 1), adicione uma linha nesta tabela. Toda quinta-feira, escolha para revisar o(s) tópico(s) com **nota mais baixa** — não o mais antigo por data.

| Nota | Significado | Ação |
|---|---|---|
| 0 | Não lembro nada | Reler ficha + resolver 1 questão Core de novo |
| 1 | Lembro o gatilho, travo na implementação | Resolver 1 questão de reserva com apoio do template |
| 2 | Resolvo com esforço | Resolver 1 questão de reserva sem apoio |
| 3 | Resolvo rápido e com confiança | Sai da fila urgente; revisar só ocasionalmente (ex: 1x a cada 2 meses) |

**Modelo de tabela (atualize a cada quinta):**

| Tópico | Semana estudada | Última nota | Data última revisão |
|---|---|---|---|
| Greedy & Invariantes | 01 | — | — |
| Two Pointers & Sliding Window | 02 | — | — |
| Strings (KMP/Z/Hashing) | 03 | — | — |
| ... | ... | ... | ... |

Regra de desempate: nota igual → prioriza o tópico estudado há mais tempo.

---

## 3. Core vs. Reserva (resolve o problema de volume)

Para cada tópico, separe a lista de exercícios em dois grupos:

- **Core (3-4 questões):** resolvidas na semana do próprio tópico (terça e quinta)
- **Reserva (todas as demais):** guardadas para alimentar a Tabela de Prioridade nas semanas seguintes — nunca todas de uma vez, 1 por sessão de revisão

Isso evita tentar "esgotar" um tópico antes de seguir em frente (o erro que você identificou no início) e cria automaticamente um banco de questões prontas para quando aquele tópico reaparecer na Tabela de Prioridade.

---

## 4. Regras de ouro (aplicação direta dos princípios de aprendizagem)

1. **Nunca reler antes de tentar lembrar.** Toda revisão começa tentando recordar de memória (gatilho, lógica, complexidade) antes de abrir a ficha.
2. **Nunca escolher o simulado com antecedência.** Preserva o teste cego real.
3. **Nunca estudar maratona depois do simulado de sábado.** Deixa o sono consolidar.
4. **Sempre escrever a hipótese de erro antes de ler o editorial.** Isso é auto-teste, não só correção.
5. **Sempre atualizar a Tabela de Prioridade após cada revisão.** Sem isso, o sistema volta a ser um calendário cego.
6. **Se a fila de prioridade nunca esvaziar, reduza questões novas, não aumente horas de estudo.** É sinal de volume desproporcional ao tempo disponível — não de falta de esforço.

---

## 5. O que este plano resolve, em relação às versões anteriores

- **Do plano de 8h no sábado →** distribuiu a carga ao longo da semana, evitando fadiga cognitiva de bloco único
- **Do problema de "esgotar 1 tópico antes de seguir" →** Core vs. Reserva quebra a tentação de resolver tudo de uma vez
- **Do problema "esqueço o tópico anterior" →** Tabela de Prioridade, adaptativa em vez de calendário fixo
- **Do risco de calendário fixo lotar →** prioriza por necessidade real (nota), não por data, então nunca "trava" mesmo com 16 tópicos acumulados

---

## 6. O que você precisa fazer, de fato, a partir de agora

1. Manter a rotina semanal como está (seg-sáb já validada)
2. Ao terminar cada tópico, dividir a lista de exercícios em Core (resolvidos na semana) e Reserva (guardados)
3. Criar a Tabela de Prioridade e adicionar 1 linha por tópico, começando pela Semana 01 (Greedy)
4. Toda quinta-feira, antes de praticar, checar a tabela e revisar o tópico com nota mais baixa
5. Atualizar a nota logo depois de cada revisão

Esse é o "plano perfeito" possível: não porque elimina o esquecimento (isso é impossível — o cérebro esquece por design), mas porque garante que você sempre saiba exatamente o que está mais frágil e ataca isso antes que vire uma lacuna real na hora da prova.
