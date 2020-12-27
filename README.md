# Demo MPLABXpress-PIC16F18855

https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-xpress

---

## Matériels nécessaires

* Une carte **MPLAB® Xpress Evaluation Board** (vous pouvez la trouver sur Microchip Direct, mais aussi sur Mouser, Digikey et d'autres magasins de composants électroniques en ligne en recherchant le code DM164140)
* Un câble USB type A vers USB micro B (probablement celui que vous utilisez pour votre téléphone portable convient également à moins que vous n'ayez un téléphone portable USB type C ou un iPhone...)
* La dernière version de MPLAB X IDE, ici la version utilisée est la [v5.45](https://www.microchip.com/mplab/mplab-x-ide)
* La dernière version du compilateur XC8, la version utilisée est la [v2.31](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-xc-compilers#MPLAB%20XC%20Compiler%20Choices) (celle-ci est utilisé à la fois pour les PIC et les AVR)
* La documentation (manuel d'utilisation et schéma) de la carte, [disponible sur le site du fabricant](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM164140)

[MPLAB® Xpress Evaluation Board Pinout](https://ww1.microchip.com/downloads/en/DeviceDoc/30010190A.pdf) (DM164140)

![mplab-xpress-evaluation-board-pinout](images/mplab-xpress-evaluation-board-pinout.png)

### GENERAL PURPOSE MPLAB® Xpress EVALUATION BOARD

| Description   | MCU's Pin | Net name |
| :------------ | :-------: | :------- |
| LED D2        |    RA0    | RA0      |
| LED D3        |    RA1    | RA1      |
| LED D4        |    RA2    | RA2      |
| LED D5        |    RA3    | RA3      |
| Push Button   |    RA5    | RA5      |
| Potentiometer |    RA4    | RA4      |
| TXD           |    RC0    | F188TXU  |
| RXD           |    RC1    | F188RXU  |

---

## Mise en oeuvre de l'UART

Vous devez modifier l'attribution des broches de l'UART lors de la configuration de MCC :

* TX = RC6 --> RC0
* RX = RC7 --> RC1

### Programmation de la carte MPLAB® Xpress Evaluation Board

Pour charger le fichier HEX dans le microcontrôleur, il faut copier le fichier ./MPLABXpress-PIC16F18855/PIC16F18855_Demo_UART.X/dist/default/production/PIC16F18855_Demo_UART.X.production.hex
dans le lecteur présent dans l'Explorateur de Windows, ici : XPRESS (F:)

**Communicate with Serial :**

```Serial terminal
__FILE__: main.c
__DATE__: Dec 27 2020
__TIME__: 19:56:04
__VERSION__: 4.2.1 Compatible Clang 4.0.1 (tags/RELEASE_401/final)

BUTTON PRESSED

```

---

## Liens Internet

* Microchip, [PIC16F18855](https://www.microchip.com/wwwproducts/en/PIC16F18855)
* [Windows Tools for the Electrical Engineer  Serial Terminal](https://learn.adafruit.com/windows-tools-for-the-electrical-engineer/serial-terminal)
