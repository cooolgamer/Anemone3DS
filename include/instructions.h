/*
*   This file is part of Anemone3DS
*   Copyright (C) 2016-2020 Contributors in CONTRIBUTORS.md
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "draw.h"
#include "colors.h"

Instructions_s normal_instructions[MODE_AMOUNT] = {
    {
        .info_line = NULL,
        .instructions = {
            {
                "\uE000 Maintenir: installer",
                "\uE001 Mettre thème aléatoire"
            },
            {
                "\uE002 Maintenir pour +",
                "\uE003 Aperçu"
            },
            {
                "\uE004 Menu des splashs",
                "\uE005 Scanner un QR code"
            },
            {
                "Quitter",
                "Effacer"
            }
        }
    },
    {
        .info_line = NULL,
        .instructions = {
            {
                "\uE000 Installer",
                "\uE001 Effacer splash installé"
            },
            {
                "\uE002 Maintenir pour +",
                "\uE003 Aperçu"
            },
            {
                "\uE004 Menu des thèmes",
                "\uE005 Scanner un QR code"
            },
            {
                "Quitter",
                "Effacer"
            }
        }
    }
};

Instructions_s install_instructions = {
    .info_line = "Relâcher \uE000: annuler. Maintenir \uE006 et relâcher \uE000: installer",
    .instructions = {
        {
            "\uE079 Installation normale",
            "\uE07A Installation aléatoire"
        },
        {
            "\uE07B Installer que musique",
            "\uE07C Installer sans musique"
        },
        {
            NULL,
            NULL
        },
        {
            "Quitter",
            NULL
        }
    }
};

Instructions_s extra_instructions[3] = {
    {
        .info_line = "Relâcher \uE002: annuler. Maintenir \uE006 et relâcher \uE002: trier",
        .instructions = {
            {
                "\uE079 Trier par nom",
                "\uE07A Trier par auteur"
            },
            {
                "\uE07B Trier par nom de fichier",
                NULL
            },
            {
                NULL,
                NULL
            },
            {
                "Quitter",
                NULL
            }
        }
    },
    {
        .info_line = "Relâcher \uE002: annuler. Maintenir \uE006 et relâcher \uE002: choisir",
        .instructions = {
            {
                "\uE079 Aller dans la liste",
                "\uE07A Actualiser les icônes"
            },
            {
                "\uE07B Aller sur ThemePlaza",
                NULL
            },
            {
                "\uE004 Trier",
                "\uE005 Dump"
            },
            {
                "Quitter",
                NULL
            }
        }
    },
    {
        .info_line = "Relâcher \uE002: annuler. Maintenir \uE006 et relâcher \uE002: dump",
        .instructions = {
            {
                "\uE079 Dump le thème actuel",
                "\uE07A Dump tous les thèmes"
            },
            {
                NULL,
                NULL
            },
            {
                NULL,
                NULL
            },
            {
                "Quitter",
                NULL
            }
        }
    }
};

#endif
