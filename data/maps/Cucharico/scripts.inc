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
	lock
	faceplayer
	msgbox Cucharico_Text_Nemila_Intro, MSGBOX_DEFAULT
	msgbox Cucharico_Text_Nemila_Paldea, MSGBOX_DEFAULT
	msgbox Cucharico_Text_Nemila_Friend, MSGBOX_DEFAULT
	release
	end

Cucharico_Text_Nemila_Intro:
	.string "Hey! Da bist du ja!\n"
	.string "Ich habe schon auf dich gewartet.$"

Cucharico_Text_Nemila_Paldea:
	.string "Willkommen in PALDEA!\p"
	.string "Hier gibt es so viel zu entdecken.\n"
	.string "Ich kann es kaum erwarten, mit dir loszuziehen!$"

Cucharico_Text_Nemila_Friend:
	.string "Ach ja, ich bin NEMILA!\p"
	.string "Ich liebe Pokémon-Kämpfe. Wenn du\n"
	.string "magst, können wir bald zusammen trainieren!$"
