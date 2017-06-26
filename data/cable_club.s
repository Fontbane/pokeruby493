	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata

.ifdef ENGLISH
TrainerCardColorName_Bronze:
	.string "BRONZE$", 7
TrainerCardColorName_Copper:
	.string "COPPER$", 7
TrainerCardColorName_Silver:
	.string "SILVER$", 7
TrainerCardColorName_Gold:
	.string "GOLD$", 7
.else
TrainerCardColorName_Bronze:
	.string "BRONZE$", 7
TrainerCardColorName_Copper:
	.string "KUPFER$", 7
TrainerCardColorName_Silver:
	.string "SILBER$", 7
TrainerCardColorName_Gold:
	.string "GOLD$", 7
.endif


	.align 2
gTrainerCardColorNames:: @ 839B21C
	.4byte TrainerCardColorName_Bronze
	.4byte TrainerCardColorName_Copper
	.4byte TrainerCardColorName_Silver
	.4byte TrainerCardColorName_Gold
