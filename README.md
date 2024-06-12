# Merjenje-temparature-in-vlage

### Opis delovanja

Naprava za merjenje temperature in vlage uporablja senzor DHT11, ki redno meri temperaturo in vlago v okolici. Izmerjene vrednosti so prikazane na 16x2 LCD zaslonu, kjer je vlaga prikazana v odstotkih (%) in temperatura V stopinjah Celzija (°C).

[DHT11](DHT11)


### Kosovnica

|Uporabljen predmet|Št. kosov|
|---|---|
|Protoboard| 1 |
|Arduino UNO R3| 1 |
|DHT11 senzor| 1 |
|LCD zaslon| 1 |
|Potenciometer| 1 |
|Povezovalne žice| 20 |

### Vezalna shema 

[Vezalna shema](Vezalna_shema.png)

### Arduino programska koda

[KodaCvet](KodaCvet.ino)


### Videoposnetek delovanja

### Ocena natančnosti


### Komentar

Projekt mi je uspel dobro in po pričakovanjih. Največ težav sem imel s pisanjem Arduino programske kode. Projekt bi lahko izboljšal tako, da bi namesto senzorja DHT11 uporabil senzor DHT22, saj je bolj natančen. Lahko bi tudi nadgradil mikrokontroler, saj ponuja dodatne funkcionalnosti. Te izboljšave bi prispevale k večji natančnosti, boljši funkcionalnosti in večji uporabniški prijaznosti vaše naprave.
