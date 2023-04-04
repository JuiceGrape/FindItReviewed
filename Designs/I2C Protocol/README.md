# I2C Protocol

## Protocol Definition

| Register | Address | Data Size | R/W | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
|----------|---------|-----------|-----|---|---|---|---|---|---|---|---
| RequestForm | 0x00 | 1 | W | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0
| Notificatie | 0x01 | 1 | W | GELUID | TRILLING | LICHT | RGB | \ | \ | \ | \ |
| R G B | 0x02 | 3 | W | R | G | B | \ | \ | \ | \ | \ |
| Item | 0x03 | 32 | R/W | DATA | IS | STRING | TEXT | \ | \ | \ | \ |
| Actief | 0x4 | 1 | R/W | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| Error | 0x05 | 1 | R/W | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |

## Sequence Diagrams

!["Request Data Sequence Diagram"](RequestData.png)

!["Send Data Sequence Diagram"](SendData.png)