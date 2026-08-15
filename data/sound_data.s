	.section .rodata

	.include "asm/macros/m4a.inc"
	.include "asm/macros/music_voice.inc"
	.include "include/constants/adsr_ds_conversion.h"
	.include "include/config/music_expansion_v3.h"

	.include "sound/voice_groups.inc"
	.include "sound/keysplit_tables.inc"
	.include "sound/programmable_wave_data.inc"
	.include "sound/music_player_table.inc"
	.include "sound/song_table.inc"
	.include "sound/direct_sound_data.inc"
	.include "sound/direct_sound_data_mux.inc"

	.align 2
