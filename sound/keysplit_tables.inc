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
	.byte 0  @ 36
	.byte 0  @ 37
	.byte 0  @ 38
	.byte 0  @ 39
	.byte 0  @ 40
	.byte 0  @ 41
	.byte 0  @ 42
	.byte 0  @ 43
	.byte 0  @ 44
	.byte 0  @ 45
	.byte 0  @ 46
	.byte 0  @ 47
	.byte 0  @ 48
	.byte 0  @ 49
	.byte 0  @ 50
	.byte 0  @ 51
	.byte 0  @ 52
	.byte 0  @ 53
	.byte 0  @ 54
	.byte 1  @ 55
	.byte 1  @ 56
	.byte 1  @ 57
	.byte 1  @ 58
	.byte 1  @ 59
	.byte 1  @ 60
	.byte 1  @ 61
	.byte 1  @ 62
	.byte 1  @ 63
	.byte 1  @ 64
	.byte 1  @ 65
	.byte 1  @ 66
	.byte 1  @ 67
	.byte 1  @ 68
	.byte 1  @ 69
	.byte 2  @ 70
	.byte 2  @ 71
	.byte 2  @ 72
	.byte 2  @ 73
	.byte 2  @ 74
	.byte 2  @ 75
	.byte 2  @ 76
	.byte 2  @ 77
	.byte 2  @ 78
	.byte 2  @ 79
	.byte 2  @ 80
	.byte 2  @ 81
	.byte 2  @ 82
	.byte 2  @ 83
	.byte 2  @ 84
	.byte 2  @ 85
	.byte 2  @ 86
	.byte 2  @ 87
	.byte 2  @ 88
	.byte 2  @ 89
	.byte 2  @ 90
	.byte 3  @ 91
	.byte 3  @ 92
	.byte 3  @ 93
	.byte 3  @ 94
	.byte 3  @ 95
	.byte 3  @ 96
	.byte 3  @ 97
	.byte 3  @ 98
	.byte 3  @ 99
	.byte 3  @ 100
	.byte 3  @ 101
	.byte 3  @ 102
	.byte 3  @ 103
	.byte 3  @ 104
	.byte 3  @ 105
	.byte 3  @ 106
	.byte 3  @ 107

.set KeySplitTable2, . - 36
	.byte 0  @ 36
	.byte 0  @ 37
	.byte 0  @ 38
	.byte 0  @ 39
	.byte 0  @ 40
	.byte 0  @ 41
	.byte 0  @ 42
	.byte 0  @ 43
	.byte 0  @ 44
	.byte 0  @ 45
	.byte 0  @ 46
	.byte 0  @ 47
	.byte 0  @ 48
	.byte 0  @ 49
	.byte 0  @ 50
	.byte 0  @ 51
	.byte 0  @ 52
	.byte 0  @ 53
	.byte 0  @ 54
	.byte 0  @ 55
	.byte 0  @ 56
	.byte 0  @ 57
	.byte 0  @ 58
	.byte 0  @ 59
	.byte 0  @ 60
	.byte 0  @ 61
	.byte 0  @ 62
	.byte 0  @ 63
	.byte 0  @ 64
	.byte 0  @ 65
	.byte 0  @ 66
	.byte 0  @ 67
	.byte 0  @ 68
	.byte 1  @ 69
	.byte 1  @ 70
	.byte 1  @ 71
	.byte 1  @ 72
	.byte 1  @ 73
	.byte 1  @ 74
	.byte 1  @ 75
	.byte 1  @ 76
	.byte 1  @ 77
	.byte 1  @ 78
	.byte 1  @ 79
	.byte 1  @ 80
	.byte 2  @ 81
	.byte 2  @ 82
	.byte 2  @ 83
	.byte 2  @ 84
	.byte 2  @ 85
	.byte 2  @ 86
	.byte 2  @ 87
	.byte 2  @ 88
	.byte 2  @ 89
	.byte 2  @ 90
	.byte 2  @ 91
	.byte 2  @ 92
	.byte 2  @ 93
	.byte 2  @ 94
	.byte 2  @ 95
	.byte 2  @ 96
	.byte 2  @ 97
	.byte 2  @ 98
	.byte 2  @ 99
	.byte 2  @ 100
	.byte 2  @ 101
	.byte 2  @ 102
	.byte 2  @ 103
	.byte 2  @ 104
	.byte 2  @ 105
	.byte 2  @ 106
	.byte 2  @ 107

.set KeySplitTable3, . - 36
	.byte 0  @ 36
	.byte 0  @ 37
	.byte 0  @ 38
	.byte 0  @ 39
	.byte 0  @ 40
	.byte 0  @ 41
	.byte 0  @ 42
	.byte 0  @ 43
	.byte 0  @ 44
	.byte 0  @ 45
	.byte 0  @ 46
	.byte 0  @ 47
	.byte 0  @ 48
	.byte 0  @ 49
	.byte 0  @ 50
	.byte 0  @ 51
	.byte 0  @ 52
	.byte 0  @ 53
	.byte 0  @ 54
	.byte 0  @ 55
	.byte 0  @ 56
	.byte 0  @ 57
	.byte 0  @ 58
	.byte 0  @ 59
	.byte 0  @ 60
	.byte 0  @ 61
	.byte 0  @ 62
	.byte 0  @ 63
	.byte 0  @ 64
	.byte 0  @ 65
	.byte 1  @ 66
	.byte 1  @ 67
	.byte 1  @ 68
	.byte 1  @ 69
	.byte 1  @ 70
	.byte 1  @ 71
	.byte 1  @ 72
	.byte 1  @ 73
	.byte 1  @ 74
	.byte 1  @ 75
	.byte 1  @ 76
	.byte 1  @ 77
	.byte 1  @ 78
	.byte 1  @ 79
	.byte 1  @ 80
	.byte 1  @ 81
	.byte 1  @ 82
	.byte 1  @ 83
	.byte 2  @ 84
	.byte 2  @ 85
	.byte 2  @ 86
	.byte 2  @ 87
	.byte 2  @ 88
	.byte 2  @ 89
	.byte 2  @ 90
	.byte 2  @ 91
	.byte 2  @ 92
	.byte 2  @ 93
	.byte 2  @ 94
	.byte 2  @ 95
	.byte 2  @ 96
	.byte 2  @ 97
	.byte 2  @ 98
	.byte 2  @ 99
	.byte 2  @ 100
	.byte 2  @ 101
	.byte 2  @ 102
	.byte 2  @ 103
	.byte 2  @ 104
	.byte 2  @ 105
	.byte 2  @ 106
	.byte 2  @ 107

.set KeySplitTable4, . - 24
	.byte 0  @ 24
	.byte 0  @ 25
	.byte 0  @ 26
	.byte 0  @ 27
	.byte 0  @ 28
	.byte 0  @ 29
	.byte 0  @ 30
	.byte 0  @ 31
	.byte 0  @ 32
	.byte 0  @ 33
	.byte 0  @ 34
	.byte 0  @ 35
	.byte 0  @ 36
	.byte 0  @ 37
	.byte 0  @ 38
	.byte 0  @ 39
	.byte 0  @ 40
	.byte 0  @ 41
	.byte 1  @ 42
	.byte 1  @ 43
	.byte 1  @ 44
	.byte 1  @ 45
	.byte 1  @ 46
	.byte 1  @ 47
	.byte 1  @ 48
	.byte 1  @ 49
	.byte 1  @ 50
	.byte 1  @ 51
	.byte 1  @ 52
	.byte 1  @ 53
	.byte 1  @ 54
	.byte 1  @ 55
	.byte 1  @ 56
	.byte 1  @ 57
	.byte 1  @ 58
	.byte 1  @ 59
	.byte 1  @ 60
	.byte 1  @ 61
	.byte 1  @ 62
	.byte 1  @ 63
	.byte 1  @ 64
	.byte 1  @ 65
	.byte 1  @ 66
	.byte 1  @ 67
	.byte 1  @ 68
	.byte 1  @ 69
	.byte 1  @ 70
	.byte 1  @ 71
	.byte 1  @ 72
	.byte 1  @ 73
	.byte 1  @ 74
	.byte 1  @ 75
	.byte 1  @ 76
	.byte 1  @ 77
	.byte 1  @ 78
	.byte 1  @ 79
	.byte 1  @ 80
	.byte 1  @ 81
	.byte 1  @ 82
	.byte 1  @ 83
	.byte 1  @ 84
	.byte 1  @ 85
	.byte 1  @ 86
	.byte 1  @ 87
	.byte 1  @ 88
	.byte 1  @ 89
	.byte 1  @ 90
	.byte 1  @ 91
	.byte 1  @ 92
	.byte 1  @ 93
	.byte 1  @ 94
	.byte 1  @ 95
	.byte 1  @ 96
	.byte 1  @ 97
	.byte 1  @ 98
	.byte 1  @ 99
	.byte 1  @ 100
	.byte 1  @ 101
	.byte 1  @ 102
	.byte 1  @ 103
	.byte 1  @ 104
	.byte 1  @ 105
	.byte 1  @ 106
	.byte 1  @ 107

.set KeySplitTable5, . - 36
	.byte 0  @ 36
	.byte 0  @ 37
	.byte 0  @ 38
	.byte 0  @ 39
	.byte 0  @ 40
	.byte 0  @ 41
	.byte 0  @ 42
	.byte 0  @ 43
	.byte 0  @ 44
	.byte 0  @ 45
	.byte 0  @ 46
	.byte 0  @ 47
	.byte 0  @ 48
	.byte 0  @ 49
	.byte 0  @ 50
	.byte 0  @ 51
	.byte 0  @ 52
	.byte 0  @ 53
	.byte 0  @ 54
	.byte 0  @ 55
	.byte 0  @ 56
	.byte 0  @ 57
	.byte 0  @ 58
	.byte 0  @ 59
	.byte 0  @ 60
	.byte 0  @ 61
	.byte 0  @ 62
	.byte 0  @ 63
	.byte 0  @ 64
	.byte 0  @ 65
	.byte 1  @ 66
	.byte 1  @ 67
	.byte 1  @ 68
	.byte 1  @ 69
	.byte 1  @ 70
	.byte 1  @ 71
	.byte 1  @ 72
	.byte 1  @ 73
	.byte 1  @ 74
	.byte 1  @ 75
	.byte 1  @ 76
	.byte 1  @ 77
	.byte 1  @ 78
	.byte 1  @ 79
	.byte 1  @ 80
	.byte 1  @ 81
	.byte 1  @ 82
	.byte 1  @ 83
	.byte 1  @ 84
	.byte 1  @ 85
	.byte 1  @ 86
	.byte 1  @ 87
	.byte 1  @ 88
	.byte 1  @ 89
	.byte 1  @ 90
	.byte 1  @ 91
	.byte 1  @ 92
	.byte 1  @ 93
	.byte 1  @ 94
	.byte 1  @ 95
	.byte 1  @ 96
	.byte 1  @ 97
	.byte 1  @ 98
	.byte 1  @ 99
	.byte 1  @ 100
	.byte 1  @ 101
	.byte 1  @ 102
	.byte 1  @ 103
	.byte 1  @ 104
	.byte 1  @ 105
	.byte 1  @ 106
	.byte 1  @ 107

.set KeySplitTable_DPgrandpianolow, . + 16		@ -|-
.set KeySplitTable_DPtuba, . + 15		@ -|-
.set KeySplitTable_BWghetsistimpani_01, . + 6		@ -|-
.set KeySplitTable_GSsynbass, . + 3		@ -|-
.set KeySplitTable_BWsynbass, . + 2		@ -|-
.set KeySplitTable_GSacbass, . + 1		@ -|-
.set KeySplitTable_DPtimpani1, . - 2		@ -|-
.set KeySplitTable_DPtimpani2, . - 2		@ -|-
.set KeySplitTable_BWghetsistimpani_12, . - 6		@ -|-
.set KeySplitTable_GSfretlessbs, . - 7		@ -|-
.set KeySplitTable_DPrhodes, . - 8		@ -|-
.set KeySplitTable_DPfmep, . - 9		@ -|-
.set KeySplitTable_DPfhorns, . - 9		@ -|-
.set KeySplitTable_GSrhodes2, . - 9		@ -|-
.set KeySplitTable_BWdrawbarorg_01, . - 10		@ -|-
.set KeySplitTable_BWtimpani_01, . - 12		@ -|-
.set KeySplitTable_DPhammondorg, . - 13		@ -|-
.set KeySplitTable_BWtrumpet_01, . - 19		@ -|-
.set KeySplitTable_BWstrings_01, . - 20		@ -|-
.set KeySplitTable_GSvibes, . - 21		@ -|-
.set KeySplitTable_GSglocken, . - 21		@ -|-
.set KeySplitTable_BWfhorns_23, . - 23		@ -|-
.set KeySplitTable_DPpizz, . - 25		@ -|-
.set KeySplitTable_GStubbell, . - 25		@ -|-
.set KeySplitTable_BWpizz_34, . - 28		@ -|-
.set KeySplitTable_BWflute2_23, . - 29		@ -|-
.set KeySplitTable_BWe4lead, . - 31		@ -|-
.set KeySplitTable_BWflute2_12, . - 32		@ -|-
.set KeySplitTable_BWeuropad_23, . - 33		@ -|-
.set KeySplitTable_critterstrings, . - 37		@ -|-
.set KeySplitTable_BWflute3_23, . - 41		@ -|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,1,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,1,1,1,1

.set KeySplitTable_GSbrihorn, . - 28		@ -|5|-
	@     C # D # E F # G # A # B
	.byte         0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,1,1,1,1,1,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2

.set KeySplitTable_BWchoir_123, . - 38		@ -|7|-
.set KeySplitTable_GSoboe, . - 44		@ -|7|-
.set KeySplitTable_BWstrings_123, . - 50		@ -|7|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,1,1
	.byte 1,1,1,1,1,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2

.set KeySplitTable_GSbassoon, . - 28		@ -|8|-
.set KeySplitTable_BWnylonstrguitar, . - 35		@ -|8|-
.set KeySplitTable_GSviolin, . - 52		@ -|8|-
	@     C # D # E F # G # A # B
	.byte         0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,1,1
	.byte 1,1,1,1,1,1,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2

.set KeySplitTable_GScello, . - 15		@ -|9|-
.set KeySplitTable_GStrombone, . - 15		@ -|9|-
.set KeySplitTable_GSfhorns, . - 20		@ -|9|-
.set KeySplitTable_GSshamisen, . - 22		@ -|9|-
.set KeySplitTable_GSclarinet, . - 27		@ -|9|-
.set KeySplitTable_GSxylo, . - 32		@ -|9|-
.set KeySplitTable_GStrumpet, . - 32		@ -|9|-
.set KeySplitTable_BWstrings_012, . - 33		@ -|9|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,1,1,1,1,1,1
	.byte 1,1,1,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2

.set KeySplitTable_DPtrombone, . - 32		@ -|10|-
.set KeySplitTable_GSkoto, . - 37		@ -|10|-
.set KeySplitTable_BWtrumpet_champ, . - 45		@ -|10|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,1,1,1,1,1,1,1
	.byte 1,1,1,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2

.set KeySplitTable_BWghetsistimpani, . + 3		@ -|12|-
.set KeySplitTable_GSdrawbarorg, . - 12		@ -|12|-
.set KeySplitTable_GSjazzorg, . - 12		@ -|12|-
.set KeySplitTable_GSharp, . - 12		@ -|12|-
.set KeySplitTable_GStimpani, . - 12		@ -|12|-
.set KeySplitTable_BWdrawbarorg, . - 13		@ -|12|-
.set KeySplitTable_GSmarimba, . - 24		@ -|12|-
.set KeySplitTable_GSmusbox, . - 24		@ -|12|-
.set KeySplitTable_DPmarimba, . - 28		@ -|12|-
.set KeySplitTable_critterviolin, . - 35		@ -|12|-
	@     C # D # E F # G # A # B
	.byte         0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2

.set KeySplitTable_DPwoodbass, . - 20		@ -|13|-
.set KeySplitTable_DPdistgt1_012, . - 33		@ -|13|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,1
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2

.set KeySplitTable_DPclav, . - 28		@ -|14|-
	@     C # D # E F # G # A # B
	.byte         0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,1,1,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2

.set KeySplitTable_DPflute, . - 56		@ -|17|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,1,1,1,1,1,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2

.set KeySplitTable_DPtrumpet1, . - 28		@ -|20|-
	@     C # D # E F # G # A # B
	.byte         0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,1,1,1,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,2,2,2,2,2,2,2,2,2,2,2

.set KeySplitTable_GSorchhit, . - 40		@ -|9|6|-
	@     C # D # E F # G # A # B
	.byte         0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,1,1,1,1
	.byte 1,1,1,1,1,2,2,2,2,2,2,3
	.byte 3,3,3,3

.set KeySplitTable_BWflute, . - 56		@ -|7|9|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 1,1,1,1,1,1,1,2,2,2,2,2
	.byte 2,2,2,2,3,3,3,3

.set KeySplitTable_GSflute, . - 44		@ -|9|7|-
.set KeySplitTable_BWstrings, . - 45		@ -|9|7|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,1,1,1,1,1,1
	.byte 1,1,1,2,2,2,2,2,2,2,3,3
	.byte 3,3,3,3,3,3,3,3,3,3,3,3
	.byte 3,3,3,3,3,3,3,3,3,3,3,3

.set KeySplitTable_GSsteelstrgt, . - 32		@ -|8|9|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,1,1,1,1,1,1,1
	.byte 1,2,2,2,2,2,2,2,2,2,3,3
	.byte 3,3,3,3,3,3,3,3

.set KeySplitTable_GSstrings, . - 28		@ -|9|9|-
	@     C # D # E F # G # A # B
	.byte         0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,1,1,1,1,1,1
	.byte 1,1,1,2,2,2,2,2,2,2,2,2
	.byte 3,3,3,3,3,3,3,3,3,3,3,3

.set KeySplitTable_DPaccordion, . - 1		@ -|12|12|-
.set KeySplitTable_GSoctpiano, . - 9		@ -|12|12|-
.set KeySplitTable_BWharp, . - 23		@ -|12|12|-
.set KeySplitTable_DPtubbell, . - 32		@ -|12|12|-
.set KeySplitTable_DPharp, . - 37		@ -|12|12|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,1,1,1,1,1
	.byte 1,1,1,1,1,1,1,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,3,3,3,3,3
	.byte 3,3,3,3,3,3,3,3,3,3,3,3
	.byte 3,3,3,3,3,3,3,3,3,3,3,3
	.byte 3,3,3,3,3,3,3,3,3,3,3,3
	.byte 3,3,3,3,3,3,3,3

.set KeySplitTable_DPdistgt2, . - 20		@ -|13|12|-
.set KeySplitTable_GSdistgt1, . - 20		@ -|13|12|-
.set KeySplitTable_GSdistgt2, . - 20		@ -|13|12|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,3,3,3,3,3,3,3,3,3,3,3
	.byte 3,3,3,3,3,3,3,3,3,3,3,3
	.byte 3,3,3,3,3,3,3,3,3,3,3,3

.set KeySplitTable_DPstrings, . - 20		@ -|10|16|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,1,1,1,1
	.byte 1,1,1,1,1,1,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,3,3
	.byte 3,3,3,3,3,3,3,3,3,3,3,3
	.byte 3,3,3,3,3,3,3,3,3,3,3,3
	.byte 3,3,3,3,3,3,3,3

.set KeySplitTable_DProtaryorg, . - 40		@ -|18|12|-
	@     C # D # E F # G # A # B
	.byte         0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,1,1,1,1,1,2,2,2,2,2,2
	.byte 2,2,2,2,2,2,3,3,3,3,3,3
	.byte 3,3,3,3

.set KeySplitTable_DPviolin, . - 32		@ -|22|19|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,1,1,2,2
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,2,2,2,2,3,3,3,3,3,3,3
	.byte 3,3,3,3

.set KeySplitTable_GSpizz, . - 24		@ -|9|8|9|-
	@     C # D # E F # G # A # B
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,1,1,1,1,1,1,1,1,1,2,2
	.byte 2,2,2,2,2,2,3,3,3,3,3,3
	.byte 3,3,3,4,4,4,4,4,4,4,4,4
	.byte 4,4,4,4,4,4,4,4

.set KeySplitTable_DPdistgt1, . - 20		@ -|13|12|7|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 1,2,2,2,2,2,2,2,2,2,2,2
	.byte 2,3,3,3,3,3,3,3,4,4,4,4
	.byte 4,4,4,4,4,4,4,4,4,4,4,4
	.byte 4,4,4,4

.set KeySplitTable_GSgrandpiano, . - 24		@ -|12|12|12|-
	@     C # D # E F # G # A # B
	.byte 0,0,0,0,0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,2,2,2,2
	.byte 2,2,2,2,2,2,2,2,3,3,3,3
	.byte 3,3,3,3,3,3,3,3,4,4,4,4
	.byte 4,4,4,4,4,4,4,4,4,4,4,4
	.byte 4,4,4,4,4,4,4,4,4,4,4,4

.set KeySplitTable_DPvibes, . - 44		@ -|12|12|12|12|-
	@     C # D # E F # G # A # B
	.byte                 0,0,0,0
	.byte 1,1,1,1,1,1,1,1,1,1,1,1
	.byte 2,2,2,2,2,2,2,2,2,2,2,2
	.byte 3,3,3,3,3,3,3,3,3,3,3,3
	.byte 4,4,4,4,4,4,4,4,4,4,4,4
	.byte 5,5,5,5,5,5,5,5,5,5,5,5

.set KeySplitTable_DPgrandpiano, . - 28		@ -|14|7|7|5|7|5|-
	@     C # D # E F # G # A # B
	.byte         0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0,1,1,1,1
	.byte 1,1,1,1,1,1,1,1,1,1,2,2
	.byte 2,2,2,2,2,3,3,3,3,3,3,3
	.byte 4,4,4,4,4,5,5,5,5,5,5,5
	.byte 6,6,6,6,6,7,7,7,7,7,7,7
	.byte 7,7,7,7,7,7,7,7
