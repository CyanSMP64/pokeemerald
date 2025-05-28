@ Due to the way mks4agb (Nintendo's tool) works, key split table labels can
@ appear before the actual start of the key split table data. If you look at
@ the first keysplit table (KeySplitTable1), you'll notice it's offset backwards
@ by 36 bytes. This is because the key split tables don't map instruments
@ for the entire note range (0-127)--they only map subsets, and the upper
@ and lower ranges aren't necessarily 0 or 127.
@
@ For example if a key split table maps an note range of 10-20, then the key
@ split table label will be offset 10 bytes before the actual key split data
@ begins. Therefore, the notes naturally map to the key split table without
@ any extra offset calculation.

.set KeySplitTable1, . - 36
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 2 (36-47)
    .byte 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1   @ octave 3 (48-59)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2   @ octave 4 (60-71)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 5 (72-83)
    .byte 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3   @ octave 6 (84-95)
    .byte 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   @ octave 7 (96-107)

.set KeySplitTable2, . - 36
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 2 (36-47)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 3 (48-59)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1   @ octave 4 (60-71)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2   @ octave 5 (72-83)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 6 (84-95)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 7 (96-107)

.set KeySplitTable3, . - 36
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 2 (36-47)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 3 (48-59)
    .byte 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1   @ octave 4 (60-71)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 5 (72-83)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 6 (84-95)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 7 (96-107)

.set KeySplitTable4, . - 24
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 1 (24-35)
    .byte 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1   @ octave 2 (36-47)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 3 (48-59)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 4 (60-71)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 5 (72-83)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 6 (84-95)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 7 (96-107)

.set KeySplitTable5, . - 36
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 2 (36-47)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 3 (48-59)
    .byte 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1   @ octave 4 (60-71)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 5 (72-83)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 6 (84-95)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 7 (96-107)

.set KeySplitTable_2oct, .
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave -1 (0-11)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 0 (12-23)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 1 (24-35)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 2 (36-47)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 3 (48-59)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 4 (60-71)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 5 (72-83)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 6 (84-95)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 7 (96-107)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 8 (108-119)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 9 (120-131)

.set KeySplitTable_3oct, .
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave -1 (0-11)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 0 (12-23)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 1 (24-35)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 2 (36-47)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 3 (48-59)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 4 (60-71)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 5 (72-83)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 6 (84-95)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 7 (96-107)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 8 (108-119)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 9 (120-131)

.set KeySplitTable_4oct, .
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave -1 (0-11)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 0 (12-23)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 1 (24-35)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 2 (36-47)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 3 (48-59)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 4 (60-71)
    .byte 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   @ octave 5 (72-83)
    .byte 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   @ octave 6 (84-95)
    .byte 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   @ octave 7 (96-107)
    .byte 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   @ octave 8 (108-119)
    .byte 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   @ octave 9 (120-131)

.set KeySplitTable_5oct, .
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave -1 (0-11)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 0 (12-23)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 1 (24-35)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 2 (36-47)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 3 (48-59)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 4 (60-71)
    .byte 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   @ octave 5 (72-83)
    .byte 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4   @ octave 6 (84-95)
    .byte 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4   @ octave 7 (96-107)
    .byte 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4   @ octave 8 (108-119)
    .byte 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4   @ octave 9 (120-131)

.set KeySplitTable_6oct, .
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave -1 (0-11)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 0 (12-23)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 1 (24-35)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 2 (36-47)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 3 (48-59)
    .byte 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   @ octave 4 (60-71)
    .byte 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4   @ octave 5 (72-83)
    .byte 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5   @ octave 6 (84-95)
    .byte 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5   @ octave 7 (96-107)
    .byte 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5   @ octave 8 (108-119)
    .byte 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5   @ octave 9 (120-131)

.set KeySplitTable_7oct, .
@         C     D     E  F     G     A     B
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave -1 (0-11)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 0 (12-23)
    .byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   @ octave 1 (24-35)
    .byte 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   @ octave 2 (36-47)
    .byte 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   @ octave 3 (48-59)
    .byte 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   @ octave 4 (60-71)
    .byte 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4   @ octave 5 (72-83)
    .byte 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5   @ octave 6 (84-95)
    .byte 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6   @ octave 7 (96-107)
    .byte 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6   @ octave 8 (108-119)
    .byte 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6   @ octave 9 (120-131)
