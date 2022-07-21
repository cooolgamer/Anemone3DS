Note: la première personne "je" est reféré au créateur original et non moi, le traducteur. - cooolgamer
![# Anemone3DS](https://github.com/cooolgamer/Anemone3DS-FR/blob/master/meta/banner.png)

Un gestionnaire de thèmes et splashs pour la Nintendo 3DS, écrit en C.

# Dépendances
 * devkitARM, qui peut être installé en suivant les instructions [ici](https://devkitpro.org/wiki/Getting_Started).
 * jansson, libvorbisidec, libpng, et libarchive, qui peuvent être trouvé sur [devkitPro pacman](https://devkitpro.org/viewtopic.php?f=13&t=8702).
 * Une version récente de [makerom](https://github.com/profi200/Project_CTR) et la dernière version de [bannertool](https://github.com/Steveice10/bannertool). Ils doivent être ajouté dans votre PATH.

# Compilation
Tout d'abord, vous devez avoir devkitARM proprement installé - `$DEVKITPRO` et `$DEVKITARM` doivent être configuré dans `/opt/devkitpro` et `$DEVKITPRO/devkitARM`, respectivement.  
Ensuite, ouvrez le dossier sur lequel vous voulez cloner le repo, et exécutez  
`git clone https://github.com/astronautlevel2/Anemone3DS` (ou alors une autre méthode de clonage).  
Pour installer les librairies prérequis, commencez par être sure que devkitPro pacman (et le groupe d'installation de base, `3ds-dev`) est installé, et ensuite installez les paquets dKP `3ds-jansson`, `3ds-libvorbisidec`, `3ds-libpng`, et `3ds-libarchive` en utilisant `[sudo] [dkp-]pacman -S <nom-du-paquet>`.  

Après avoir ajouté [makerom](https://github.com/profi200/Project_CTR) et [bannertool](https://github.com/Steveice10/buildtools) dans votre PATH, allez juste dans votre dossier et exécutez `make`. Tout les fichiers compilés seront mit dans `/out/`.

# Licence
Ce projet est licencié sous  GNU GPLv3. Regardez le LICENSE.md pour les détails. Les conditions supplémentaires 7b et 7c s'appliquent à ce projet.

# Crédits
Ces personnes suivantes ont contribué pour Anemone3ds d'une manière ou d'une autre. Sans eux, Anemone3DS n'existerait pas, ou ne serait pas aussi bien qu'il ne l'est: [CONTRIBUTORS.md](CONTRIBUTORS.md)

La majorité des icônes dans les `romfs` viennent du site [icons8.com](https://icons8.com) et sont licencié sous [CC-BY-NC-SA](https://creativecommons.org/licenses/by-nc-sa/3.0/)

Remerciments spécial à ces personnes qui, sans contribuer directement, on beaucoup aidé:
 * [Rinnegatamante](https://github.com/Rinnegatamante), dont le code a servi de référence sur l'installation des thèmes.
 * [SteveIce10](https://github.com/SteveIce10), dont le QR code sur FBI était essentiel.
 * [BernardoGiordano](https://github.com/BernardoGiordano) pour avoir fait pp2d, avoir été très réactif aux demandes de fonctionnalités et aussi juste pour de l'aide générale.
 * [yellows8](https://github.com/yellows8) pour son outil "home menu extdump", qui a été très utile pour le Débugage.
 * les gens dans #dev de Nintendo Homebrew, qui ont aidé pour l'unicode (notamment [Stary2001](https://github.com/Stary2001), [Fenrir](https://github.com/FenrirWolf), et DanielKO).
 * the maintainers for all used libraries, including but not limited to ctrulib, zlib, citro3d, pp2d, and quirc.
 * tous les gens qui m'ont aidé à me motiver pour travailler. Cela inclut, mais n'est pas limité:
 
   + Au membres du [Discord Nintendo Homebrew](https://discord.gg/C29hYvh)
   + Au membres du __Discord Secret Shack Service__   
   + Au membres du [Discord ThemePlaza](https://discord.gg/2hUQwXz)
