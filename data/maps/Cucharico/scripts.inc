Cucharico_MapScripts::
	.byte 0

Cucharico_EventScript_VillageSign::
	msgbox Cucharico_Text_VillageSign, MSGBOX_SIGN
	end

Cucharico_EventScript_BeachSign::
	msgbox Cucharico_Text_BeachSign, MSGBOX_SIGN
	end

Cucharico_Text_VillageSign:
	.string "CUCHARICO\n"
	.string "A quiet village by the sea.$"

Cucharico_Text_BeachSign:
	.string "BEACH\n"
	.string "Please keep the coast clean.$"

Cucharico_EventScript_Nemila::
	msgbox Cucharico_Text_Nemila, MSGBOX_NPC
	end

Cucharico_Text_Nemila:
	.string "Hey! Du bist also auch hier!$"
