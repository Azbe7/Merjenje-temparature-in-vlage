# Merjenje-temparature-in-vlage

## Projektna naloga

### Opis delovanja

Naprava za merjenje temperature in vlage uporablja senzor DHT11, ki redno meri temperaturo in vlago v okolici. Izmerjene vrednosti so prikazane na 16x2 LCD zaslonu, kjer je vlaga prikazana v odstotkih (%) in temperatura V stopinjah Celzija (°C). Senzor za temperaturo in vlago v kombinaciji z LCD zaslonom je praktična rešitev za prikazovanje meritev okoljske temperature in vlage v realnem času.

DHT11 je vsestranski senzor, ki je enostaven za uporabo v mnogih osnovnih aplikacijah za merjenje temperature in vlage, čeprav ni primeren za aplikacije, ki zahtevajo visoko natančnost ali širok merilni obseg.

Datasheet senzorja: [DHT11](DHT11)


### Kosovnica

|Uporabljen material|Število kosov|
|---|---|
|Protoboard| 1 |
|Arduino UNO R3| 1 |
|DHT11 senzor| 1 |
|LCD zaslon| 1 |
|Potenciometer| 1 |
|Povezovalne žice| 19 |

### Vezalna shema 

Vezalna shema narejena v EasyEda: [Vezalna shema](Vezalna_shema.png)

### Slika vezave

Slika vezja na protoboardu: [Slika vezja](Slika_vezja.jpg)

### Načrt ohišja

Načrt ohišja narejen na A4 list: [Načrt ohišja](Načrt_ohišja.jpg)

### Arduino programska koda

Programska koda (Arduino IDE): [KodaCvet](KodaCvet.ino)

### Slika končanega projekta

Slika končnega izdelka: [Končni izdelek](Končni_izdelek.jpg)

### Videoposnetek delovanja

### Ocena natančnosti

#### Podatki natančnosti iz [DHT11 datasheet-a](DHT11.pdf):

Natančnost meritve temperature: ± 2 °C

Natančnost meritve vlage: ± 5 % RH

Temperaturno območje senzorja: 0-50 °C

#### Podatki natančnosti pri mojem izdelku:


### Komentar

Projekt mi je uspel dobro in po pričakovanjih. Največ težav sem imel s pisanjem Arduino programske kode. Projekt bi lahko izboljšal tako, da bi namesto senzorja DHT11 uporabil senzor DHT22, saj je bolj natančen. Lahko bi tudi nadgradil mikrokontroler, saj ponuja dodatne funkcionalnosti. Te izboljšave bi prispevale k večji natančnosti, boljši funkcionalnosti in večji uporabniški prijaznosti naprave. Z zgoraj omenjenimi izboljšavami lahko projekt nadgradim in mu dodam nove funkcionalnosti, kar bo povečalo njegovo uporabnost in zanesljivost. Izboljšave lahko prilagodim specifičnim potrebam tega projekta.
