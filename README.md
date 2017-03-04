# SevenSegment
An Arduino library for the ATA8041AB 7-Segment display.

<img src="https://github.com/stonepreston/SevenSegment/blob/master/Images/7-segment_display-4_digit(blue).png" width=300 />

After importing the library, create an instance of SevenSegment:

```
SevenSegment seg = SevenSegment();
```

The constructor asssumes a default pin configuration of

| Arduino Digital Pin | ATA8041AB Pin |
|---------------------|---------------|
| 1                   | D1            |
| 2                   | D2            |
| 3                   | D3            |
| 4                   | D4            |
| 5                   | A             |
| 6                   | B             |
| 7                   | C             |
| 8                   | D             |
| 9                   | E             |
| 10                  | F             |
| 11                  | G             |
| 12                  | DP            |

You can specify a custom pin configuration using the overloaded constructor. The arguments are your arduino digital pin numbers. 

For example, 

```
SevenSegment seg = SevenSegment(5, 7, 9, 10, 1, 2, 3, 4, 8, 6, 11, 12);
```

would correspond to a pin configuration of 

| Arduino Digital Pin | ATA8041AB Pin |
|---------------------|---------------|
| 5                   | D1            |
| 7                   | D2            |
| 9                   | D3            |
| 10                  | D4            |
| 1                   | A             |
| 2                   | B             |
| 3                   | C             |
| 4                   | D             |
| 8                   | E             |
| 6                   | F             |
| 11                  | G             |
| 12                  | DP            |



The following character representations are available:

| Character           | Enum Value     |
|---------------------|----------------|
| A                   | A              |
| b                   | B              |
| C                   | C              |
| d                   | D              |
| E                   | E              |
| F                   | F              |
| H                   | H              |
| I                   | I              |
| J                   | J              |
| L                   | L              |
| n                   | N              |
| o                   | O              |
| P                   | P              |
| r                   | R              |
| S                   | S              |
| U                   | U              |
| Y                   | Y              |
| Z                   | Z              |
| 0                   | ZERO           |
| 1                   | ONE            |
| 2                   | TWO            |
| 3                   | THREE          |
| 4                   | FOUR           |
| 5                   | FIVE           |
| 6                   | SIX            |
| 7                   | SEVEN          |
| 8                   | EIGHT          |
| 9                   | NINE           |

To display a character, simply call the display function and pass in the digit you want to display on (1-4), the enum value of the character you want to display (preceded with the name of your SevenSegment instance), and whether or not you want to diplay the decimal point.

```
seg.display(1, seg.A, true);

```
