cat << 'EOF' > docs/specifiche_tecniche.md
# Specifiche Tecniche – BankManager

## Classi principali

### Classe `Casse`
**Responsabilità:** gestisce la banca (capitale, prestiti, incassi).

**Attributi:**
- \`float capitale\`
- \`float prestiti\`
- \`float incassi\`

**Metodi principali:**
- \`setPrestiti(float n)\` → riduce il capitale e registra un prestito.
- \`setCapitale(float n)\` → aumenta il capitale e registra un incasso (+22%).
- \`mostraInfo()\` → mostra stato della banca.

---

### Classe `Utenti`
**Responsabilità:** gestisce i clienti della banca.

**Attributi:**
- \`std::string nome\`
- \`float patrimonio\`
- \`float debito\`

**Metodi principali:**
- \`richiediPrestito(Casse&, float)\` → aumenta patrimonio e debito, riduce capitale banca.
- \`ricopriPrestito(Casse&, float)\` → riduce debito e patrimonio, aumenta capitale banca.
- \`mostraInfo()\` → stampa i dati del cliente.

---

### Classe `main`
**Responsabilità:** gestisce il flusso logico e il menu del programma.

---

## Struttura dati
- \`std::vector<Utenti>\` per gestire una lista dinamica di clienti.
- Comunicazione tramite passaggio per riferimento (\`Casse&\`).

## Compilazione
\`\`\`bash
g++ src/*.cpp -I include -o banca
\`\`\`
EOF
