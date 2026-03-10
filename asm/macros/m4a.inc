	.macro song label:req, music_player:req, volume:req, speed:req
	.4byte \label
	.byte \music_player
	.byte \volume
	.2byte \speed
	.endm

	.macro music_player info_struct:req, track_struct:req, num_tracks:req, unknown:req
	.4byte \info_struct
	.4byte \track_struct
	.byte \num_tracks
	.space 1  @ Padding
	.2byte \unknown
	.endm
