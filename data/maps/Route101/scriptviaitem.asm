.text
.align 2
.thumb
.thumb_func
.global Hax

	setup:
		push {r4, lr}
		mov r4, r0
		mov r0, pc
		add r0, #0x13
		ldr r1, .unk_03005D00
		str r0, [r1]
		mov r0, r4
		ldr r1, .sub_080C9050
		bl bx_r1
		pop {r4}
		pop {r0}
		bx r0

	main:
		push {r4, lr}
		mov r4, r0
		ldr r0, .ScriptToCall
		ldr r1, .CallScript
		bl bx_r1
		mov r0, r4
		ldr r1, .del_c3_from_linked_list
		bl bx_r1
		pop {r4}
		pop {r0}
		bx r0
.align 2
bx_r1:
	bx r1

.align 2
.CallScript:
	.word 0x080655B8+1
.unk_03005D00:
	.word 0x03005D00
.sub_080C9050:
	.word 0x080C9050+1
.del_c3_from_linked_list:
	.word 0x0807AB74+1
.ScriptToCall:
	.word triggerscriptviaitem