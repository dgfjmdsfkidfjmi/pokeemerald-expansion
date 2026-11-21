Cucharico_PlayerHouse_MapScripts::
	.byte 0

Cucharico_PlayerHouse_EventScript_Mom::
	lock
	faceplayer
	msgbox Cucharico_PlayerHouse_Text_Mom, MSGBOX_DEFAULT
	waitmessage
	release
	end

Cucharico_PlayerHouse_Text_Mom:
	.string "Schön, dass du wieder da bist!\n"
	.string "Draußen wartet schon Nemila auf dich.$
