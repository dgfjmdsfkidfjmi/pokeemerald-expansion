Cucharico_PlayerHouse_MapScripts::
	.byte 0

Cucharico_PlayerHouse_EventScript_Mom::
	lock
	faceplayer
	msgbox Cucharico_PlayerHouse_Text_Mom, MSGBOX_DEFAULT
	release
	end

Cucharico_PlayerHouse_Text_Mom:
	.string "Schoen, dass du wieder da bist!\n"
	.string "Draussen wartet schon Nemila auf dich.$"
