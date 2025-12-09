# Guida Utente – BankManager

1. Clona la repository:
   \`\`\`bash
   git clone https://github.com/TUO_USERNAME/bank-manager.git
   \`\`\`
2. Compila il progetto:
   \`\`\`bash
   g++ src/*.cpp -I include -o banca
   \`\`\`
3. Esegui il programma:
   \`\`\`bash
   ./banca
   \`\`\`

## Funzionamento
Il programma richiede:
- Il capitale iniziale della banca.
- Il numero di clienti.
- Per ogni cliente: nome e capitale personale.

### Menu principale
\`\`\`
0 → Uscita
1 → Visualizza stato banca
2 → Visualizza clienti
3 → Gestisci prestiti (richiesta / ricoprimento)
\`\`\`

### Esempio output
\`\`\`
**********************
Benvenuto nella banca!
**********************
Cliente: Mario Rossi
Patrimonio: 1200 €
Debiti: 300 €
\`\`\`

## Note
- Gli input devono essere numerici positivi.
- Gli errori di input vengono gestiti con messaggi chiari.
EOF
