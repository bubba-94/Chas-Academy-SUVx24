# Kommunikationsprotokoll – Arduino

## Huvudskillnad mellan seriell och parallell kommunikation

| Typ             | Beskrivning |
|----------------|-------------|
| **Seriell**    | Data skickas **en bit i taget** över en enda ledning. |
| **Parallell**  | Flera bitar skickas **samtidigt** över flera ledningar. |

**Parallell** är snabbare men kräver fler kablar. **Seriell** är enklare, särskilt för längre avstånd.

---

## Nackdelar med seriell kommunikation

- Lägre överföringshastighet per klockcykel jämfört med parallell.
- Begränsningar vid längre avstånd (kan orsaka störningar).
- Synkroniseringsproblem vid asynkron kommunikation.
- Kräver ofta mer protokollhantering (t.ex. start-/stoppbitar i UART).

---

## Kommunikation med och utan klocka

| Typ               | Klocksignal? | Exempel | Kommentar |
|------------------|--------------|---------|-----------|
| **Synkron**       | Ja         | SPI, I2C | Gemensam klocka styr timing. |
| **Asynkron**      | Nej        | UART    | Ingen klocka – använder start/stoppbitar. |

---

## I2C-protokollet – Hur fungerar det?

- Använder **två ledningar**:
  - **SDA** (Serial Data Line) – dataöverföring
  - **SCL** (Serial Clock Line) – klocksignal
- En **master** styr kommunikationen.
- Upp till **128 slave-enheter** kan kopplas in.
- Kommunikation sker i följande steg:
  1. Master skickar **startsignal**
  2. Skickar **adress** till önskad enhet
  3. Skickar eller tar emot **data**
  4. Avslutar med **stoppsignal**

---

## Fördelar med I2C jämfört med UART och SPI

| Protokoll | Ledningar | Fler enheter | Klocka? | Fördelar |
|-----------|-----------|--------------|---------|------------------|
| **UART**  | 2 (TX, RX) | Nej         | Nej    | Enkelt men endast punkt-till-punkt |
| **SPI**   | 4 (MISO, MOSI, SCK, SS) | Begränsat (en SS per enhet) | Ja | Snabbt men kräver många ledningar |
| **I2C**   | 2 (SDA, SCL) | Ja (adressbaserat) | Ja | Bara två ledningar<br> Adressbaserad<br> Bra balans mellan enkelhet och funktionalitet |

---