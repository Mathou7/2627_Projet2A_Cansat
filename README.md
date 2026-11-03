# 2627_Projet2A_Cansat

Projet Cansat de 2A



## Partie Info

### Tableau Récapitulatif des connexions entre composants

| Broche STM32 | Signal | Élément / Périphérique | Protocole / Rôle | Adresse I2C |
| --- | --- | --- | --- | --- |
| **PA0** | `PWM` | Connecteur Moteur | Sortie PWM (+5V) | — |
| **PA1** | `MesBat` | Mesure Batterie (Pont diviseur) | Entrée analogique (ADC) | — |
| **PA2** / **PA3** | `VCP_RX` / `VCP_TX` | ST-LINK / Liaison série (Virtual COM) | UART | — |
| **PA4** | `INT_IMU` | Centrale Inertielle **BNO055** | Interruption matérielle | **`0x29`** (ou `0x28`) |
| **PA5** | `INT_BARO` | Capteur de pression **BMP581** | Interruption matérielle | **`0x46`** (ou `0x47`) |
| **PB0** | `CS_SD` | Port MicroSD (Chip Select) | GPIO / SPI | — |
| **PB3** | `SPI_SCK` | Port MicroSD (Horloge SPI) | SPI (Horloge) | — |
| **PB4** | `MISO` | Port MicroSD (Master In Slave Out) | SPI | — |
| **PB5** | `MOSI` | Port MicroSD (Master Out Slave In) | SPI | — |
| **PA9** | `SCL` | Bus I2C Commun (**BNO055** & **BMP581**) | I2C (Horloge avec pull-up) | Partagé |
| **PA8** | `SDA` | Bus I2C Commun (**BNO055** & **BMP581**) | I2C (Données avec pull-up) | Partagé |
| **PG10** | `NRST` | Bouton de Reset / Réinitialisation | Reset matériel | — |
| **PA13** / **PA14** | `SWDIO` / `SWCLK` | Connecteur ST-LINK (Debug / Programmation) | SWD | — |

## Tableau Récapitulatif du RTOS

| Tâche FreeRTOS | Rôle | Périodicité / Déclenchement | Priorité | Taille de Pile |
| --- | --- | --- | --- | --- |
| **`SensorTask`** | Acquisition I2C de la centrale BNO055 et du baromètre BMP581 | Périodique rigoureuse (ex: **20 ms / 50 Hz**) | **Haute** (ou *Normal* haute) | 512 mots (*words*) |
| **`LoggingTask`** | Enregistrement des données sur la carte MicroSD via le bus SPI | Sur événement (bloquée en attente via une Queue) | **Basse** (*Below Normal*) | 512 mots (*words*) |
| **`ControlTask`** | Surveillance de la tension batterie (ADC) et gestion de la PWM moteur | Périodique (ex: **100 ms / 10 Hz**) | **Normale** (*Normal*) | 512 mots (*words*) |

## Pinout STM32G431KBT6

<img width="471" height="438" alt="image" src="https://github.com/user-attachments/assets/b827d19e-fbf3-4b9a-b1de-5d058783cfbd" />

