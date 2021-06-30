/*
 * Super Mario 64 ROM header
 * Only the first 0x18 bytes matter to the console.
 */

.byte  0x80, 0x37, 0x12, 0x40   /* PI BSD Domain 1 register */
.word  0x0000000F               /* Clockrate setting*/
.word  entry_point              /* Entrypoint */

/* Revision */
.word  0x0000144C

.word  0x00000000               /* Checksum 1 */
.word  0x00000000               /* Checksum 2 */
.word  0x00000000               /* Unknown */
.word  0x00000000               /* Unknown */
.ascii "SUPER MARIO 64      "   /* Internal ROM name */
.word  0x00000000               /* Unknown */
.word  0x0000004E               /* Cartridge */
.ascii "SM"                     /* Cartridge ID */

/* Region */
.if JAPANESE == 1
    .ascii "J"                  /* NTSC-J (Japan) */
.elseif PAL == 1
    .ascii "P"                  /* PAL (Europe) */
.else
    .ascii "E"                  /* NTSC-U (North America) */
.endif
    .byte  0x00                 /* Version */
