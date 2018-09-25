### Description
Attempt at making a public base of Pokeruby with expanded pokémon up to Arceus and other Gen. 4 features.

I don't know when or if I'll ever be able to complete it, so keep that in mind.

### Progress
493/493 - 386 + All the Gen. 4 Pokémon. This project doesn't include alternate formes for now, however.

![Pic](https://i.imgur.com/F6jmvee.png)

![Pic2](https://i.imgur.com/XAFsMzJ.png)

![Pic3](https://i.imgur.com/j6ZWfeE.png)

I'll be uploading sheets consisting of 4 pictures for each pokémon I add to this base. All the pictures can be found inside [the screenshots folder](screenshots).

### Modified Files

The following is a list of all the files involved in the task of expanding pokémon in pokeruby:

* pokeruby\data\graphics\pokemon || [back_pic_coords.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/back_pic_coords.inc)   ;   [back_pic_table.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/back_pic_table.inc)  ;  [front_pic_coords.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/front_pic_coords.inc)  ;  [front_pic_table.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/front_pic_table.inc)  ;  [graphics.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/graphics.inc)  ;  [palette_table.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/palette_table.inc)  ;  [shiny_palette_table.inc](https://github.com/LOuroboros/pokeruby493/blob/master/data/graphics/pokemon/shiny_palette_table.inc)

* pokeruby\graphics\pokemon || A folder whose name is the pokémon's with the following files: back.png, front.png, icon.png, footprint.png, normal.pal and shiny.pal

* pokeruby\include\constants || [species.h](https://github.com/LOuroboros/pokeruby493/blob/master/include/constants/species.h)

* pokeruby\include || [global.h](https://github.com/LOuroboros/pokeruby493/blob/master/include/global.h)  ;  [graphics.h](https://github.com/LOuroboros/pokeruby493/blob/master/include/graphics.h)  ;  [pokedex.h](https://github.com/LOuroboros/pokeruby493/blob/master/include/pokedex.h)

* pokeruby\sound\direct_sound_samples\cries || A .wav file converted into a Signed 8bit PCM .aiff file renamed into a .aif one with the name "cry_(pokémon's name)".

* pokeruby\sound || [direct_sound_data.inc](https://github.com/LOuroboros/pokeruby493/blob/master/sound/direct_sound_data.inc)  ;  [voice_groups.inc](https://github.com/LOuroboros/pokeruby493/blob/master/sound/voice_groups.inc)

* pokeruby\src\battle || [battle_1.c](https://github.com/LOuroboros/pokeruby493/blob/master/src/battle/battle_1.c)

* pokeruby\src\data\pokemon || [base_stats.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/base_stats.h)  ;  [cry_ids.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/cry_ids.h)  ;   [evolution.h](https://github.com/LOuroboros/pokeruby493/tree/master/src/data/pokemon)   ;   [level_up_learnset_pointers.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/level_up_learnset_pointers.h)  ;  [level_up_learnsets.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/level_up_learnsets.h)  ;  [tmhm_learnsets.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokemon/tmhm_learnsets.h)

* pokeruby\src\data\text || [species_names_en.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/text/species_names_en.h)

* pokeruby\src\data || [pokedex_entries_en.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokedex_entries_en.h)  ;  [pokedex_orders.h](https://github.com/LOuroboros/pokeruby493/blob/master/src/data/pokedex_orders.h)

* pokeruby\src || [hall_of_fame.c](https://github.com/LOuroboros/pokeruby493/blob/7a746e15432542459a1650da4ab2ac074bde9020/src/hall_of_fame.c#L43)  ;  [pokedex.c](https://github.com/LOuroboros/pokeruby493/blob/master/src/pokedex.c)  ;  [pokemon_1.c](https://github.com/LOuroboros/pokeruby493/blob/master/src/pokemon_1.c)  ;  [pokemon_icon.c](https://github.com/LOuroboros/pokeruby493/blob/master/src/pokemon_icon.c)

### Bugs
As of right now, there aren't any bugs. There's a small issue involving pokémon not showing up in the pokédex using existing savefiles, but in those cases you just need to catch the pokémon again and they'll show up correctly.

### Other Features

I intend to implement as many Gen. 4 features as I can to this base. Right now, the other features aside from the expanded amount of pokémon are:

* Held items effect boosted from 10% to 20%

* You can now run indoors

* There's 42 Gen. 4 moves added to Pokémon Ruby and Sapphire's 354. The list starts with Aqua Jet in [the moves.h file](https://github.com/LOuroboros/pokeruby493/blob/fa8a7c4745c3687a703dea9c7d2cd23b2c7244a0/include/constants/moves.h#L359). Judgment's effect isn't implemented yet and the last 19 moves currently use Pound's animation as a placeholder.

* There's 2 new evolution stones: The Shiny Stone for Roselia and Togetic, and the Dusk Stone for Misdreavus and Murkrow.

* The following evolution-inducing items were added: Oval Stone, Protector, Electirizer, Magmarizer, Razor Claw, Razor Fang, Dubious Disc, Reaper Cloth.

* New evolution methods have been implemented to account for the evolutions of certain pokémon like Combee, Happiny, Aipom, Sneasel, Gligar, Nosepass, Magneton, Mantyke, etc.

* Gen. 4 trade evolutions will use my own custom evolution method by default, where pokémon like Electabuzz or Magmar evolve starting at Lv52 while holding their evolutionary item (Electirizer and Magmarizer respectively, in this case).

* Poisoning in the overworld works just like it does in the Gen. 4 Games.

* The Light Ball works just like in the Gen. 4 Games. It doubles not only Pikachu's Sp. Atk, but its Atk too.

# Credits

-[Gamer2020](https://github.com/Gamer2020): He created aseriestodis which is the tool that "motivated" me to create my pokeruby_gen4sprites repo which I'm using here, and for his [pokémon base stats file](https://github.com/Gamer2020/Pokeemerald-Pokemon-and-Move-Expansion-Files/blob/master/files/include/data/pokemon/base_stats.h) which I'm using as a base for this repo's.

-[The DS-style 64x64 Pokémon Sprite Resource](https://www.pokecommunity.com/showthread.php?t=267728): For creating such a wonderful pack of resources for everyone to use.

-[Game Freak](https://www.gamefreak.co.jp/): For creating the Mainline Pokémon Games.

-[Pret](https://github.com/pret): For their impressive dedication and their work to preserve the Pokémon Games and open new paths for the ROM Hacking Community of these games.

-[UltimaSoul](https://www.pokecommunity.com/member.php?u=719183): Notes about pokémon expansion in Pokeruby and **A LOT** of help.

-[Tetra](https://www.pokecommunity.com/member.php?u=174056): Help with indexing icons and how to assign a custom cry to Chimchar.

-Shinny: Help with the front sprites' position issue and with the Level + Gender Based evolution.

-[BluRose](https://github.com/BluRosie): Map and move-based evolutions, Happiny's and Mantyke's evolution methods too and Gen. 4 styled OW Poisoning.

-[Doesnt](https://github.com/Doesnty): I learned how to add new moves thanks to his commits and I'm also using some of the features from his repo, namely: Em+ Pickup System, Instant Text Speed, Close Combat's effect and several Gen. 4 moves data.

-[ShantyTown](https://github.com/huderlem): Tips on how to debug any problems I may find while working with the decompilation projects.

-[Rubyruby](https://github.com/hiddenruby): Attribution screen which I repurposed into an Anti-Piracy screen.