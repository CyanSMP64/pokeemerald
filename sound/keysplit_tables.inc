@ Due to the way mks4agb (Nintendo's tool) works, key split table labels can
@ appear before the actual start of the key split table data. If you look at
@ the first keysplit table (keysplit_piano), you'll notice it's offset backwards
@ by 36 bytes. This is because the key split tables don't map instruments
@ for the entire note range (0-127)--they only map subsets, and the upper
@ and lower ranges aren't necessarily 0 or 127.
@
@ For example if a key split table maps an note range of 10-20, then the key
@ split table label will be offset 10 bytes before the actual key split data
@ begins. Therefore, the notes naturally map to the key split table without
@ any extra offset calculation.

keysplit piano, 36
	split 0, 55
	split 1, 70
	split 2, 91
	split 3, 108

keysplit strings, 36
	split 0, 69
	split 1, 81
	split 2, 108

keysplit trumpet, 36
	split 0, 66
	split 1, 84
	split 2, 108

keysplit tuba, 24
	split 0, 42
	split 1, 108

keysplit french_horn, 36
	split 0, 66
	split 1, 108

keysplit 2oct, 0
    split 0, 60
    split 1, 132

keysplit 3oct, 0
    split 0, 60
    split 1, 72
    split 2, 132

keysplit 4oct, 0
    split 0, 48
    split 1, 60
    split 2, 72
    split 3, 132

keysplit 5oct, 0
    split 0, 48
    split 1, 60
    split 2, 72
    split 3, 84
    split 4, 132

keysplit 6oct, 0
    split 0, 36
    split 1, 48
    split 2, 60
    split 3, 72
    split 4, 84
    split 5, 132

keysplit 7oct, 0
    split 0, 36
    split 1, 48
    split 2, 60
    split 3, 72
    split 4, 84
    split 5, 96
    split 6, 132

keysplit piano1, 12
    split 0, 43
    split 1, 53
    split 2, 62
    split 3, 68
    split 4, 76
    split 5, 84
    split 6, 94
    split 7, 120

keysplit glocken, 24
    split 0, 83
    split 1, 89
    split 2, 100
    split 3, 120

keysplit acbass, 12
    split 0, 37
    split 1, 43
    split 2, 50
    split 3, 108

keysplit strings_new, 0
    split 0, 47
    split 1, 61
    split 2, 76
    split 3, 89
    split 4, 120

keysplit slowstrings, 0
    split 0, 47
    split 1, 60
    split 2, 76
    split 3, 89
    split 4, 120

keysplit wb_choirs_male, 0
    split 0, 64
    split 1, 71
    split 2, 128
