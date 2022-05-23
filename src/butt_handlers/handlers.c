/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** handlers
*/

#include "../../include/rpg.h"

handler_t handlers[16] = {
    {"handle_null", &handle_null},
    {"handle_quit", &handle_quit},
    {"handle_play", &handle_play},
    {"handle_menu", &handle_menu},
    {"handle_settings", &handle_settings},
    {"handle_prev", &handle_prev},
    {"handle_music", &handle_music},
    {"handle_sounds", &handle_sounds},
    {"handle_on", &handle_on},
    {"handle_off", &handle_off},
    {"handle_controls", &handle_controls},
    {"handle_main_menu", &handle_main_menu},
    {"handle_sword00", &handle_sword00},
    {"handle_sword01", &handle_sword01},
    {"handle_sword02", &handle_sword02},
    {"handle_sword03", &handle_sword03}
};
