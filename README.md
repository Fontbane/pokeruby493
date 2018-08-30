### Description
Attempt at making a public base of Pokeruby with expanded pokémon up to Arceus.

I don't know when or if I'll ever be able to complete it, so keep that in mind.

It goes without saying: This is **NOT** usable at the moment.

### Progress
390/493 - 386 + Turtwig, Grotle, Torterra and Chimchar.

### Modified Files

The following is a list of all the files involved in the task of expanding pokémon in pokeruby:

* pokeruby\data\graphics\pokemon || [back_pic_table.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/back_pic_table.inc)  ;  [front_pic_coords.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/front_pic_coords.inc)  ;  [front_pic_table.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/front_pic_table.inc)  ;  [graphics.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/graphics.inc)  ;  [palette_table.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/palette_table.inc)  ;  [shiny_palette_table.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/shiny_palette_table.inc)

* pokeruby\graphics\pokemon || A folder whose name is the pokémon's with the following files: back.png, front.png, icon.png, footprint.png, normal.pal and shiny.pal

* pokeruby\include\constants || [species.h](https://github.com/LOuroboros/pokeruby493/blob/master/include/constants/species.h)

* pokeruby\include || [global.h](https://github.com/LOuroboros/pokeruby493/blob/master/include/global.h)  ;  [graphics.h](https://github.com/LOuroboros/pokeruby493/blob/master/include/graphics.h)  ;  [pokedex.h](https://github.com/LOuroboros/pokeruby493/blob/master/include/pokedex.h)

* pokeruby\sound\direct_sound_samples\cries || A .wav file converted into a Signed 8bit PCM .aiff file renamed into a .aif one with the name "cry_(pokémon's name)".

* pokeruby\sound || [direct_sound_data.inc](https://github.com/LOuroboros/pokeruby493/blob/master/sound/direct_sound_data.inc)  ;  [voice_groups.inc](https://github.com/LOuroboros/pokeruby493/blob/master/sound/voice_groups.inc)

* pokeruby\src\battle || [battle_1.c](https://github.com/LOuroboros/pokeruby493/blob/master/src/battle/battle_1.c)

* pokeruby\src\data\pokemon || [base_stats.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/base_stats.h)  ;  [cry_ids.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/cry_ids.h)  ;  [level_up_learnset_pointers.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/level_up_learnset_pointers.h)  ;  [level_up_learnsets.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/level_up_learnsets.h)  ;  [tmhm_learnsets.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/tmhm_learnsets.h)

* pokeruby\src\data\text || [species_names_en.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/text/species_names_en.h)

* pokeruby\src || [pokedex.c](https://github.com/LOuroboros/pokeruby493/blob/master/src/pokedex.c)  ;  [pokemon_1.c](https://github.com/LOuroboros/pokeruby493/blob/master/src/pokemon_1.c)  ;  [pokemon_icon.c](https://github.com/LOuroboros/pokeruby493/blob/master/src/pokemon_icon.c)

### Bugs
As of right now, there's only one bug with this expansion. The pokédex seems to be broken for whatever reason. The Regional Dex ends at Kyogre *(it's missing 4 pokémon)* and the National Dex is missing certain pokémon too.

# Credits

-[Gamer2020](https://github.com/Gamer2020): He created aseriestodis which is the tool that "motivated" me and that I utilized to create this.

-[The DS-style 64x64 Pokémon Sprite Resource](https://www.pokecommunity.com/showthread.php?t=267728): For creating such a wonderful pack of resources for everyone to use.

-[Game Freak](https://www.gamefreak.co.jp/): For creating the Mainline Pokémon Games.

-[Pret](https://github.com/pret): For their impressive dedication and their work to preserve the Pokémon Games and open new paths for the ROM Hacking Community of these games.

-[UltimaSoul](https://www.pokecommunity.com/member.php?u=719183): Notes about pokémon expansion in Pokeruby.

-[Tetra](https://www.pokecommunity.com/member.php?u=174056): Help with indexing icons and how to assign a custom cry to Chimchar.