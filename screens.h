#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Screens

enum ScreensEnum {
    _SCREEN_ID_FIRST = 1,
    SCREEN_ID_HOME_SCREEN = 1,
    _SCREEN_ID_LAST = 1
};

typedef struct _objects_t {
    lv_obj_t *home_screen;
    lv_obj_t *obj0;
    lv_obj_t *home_container_main;
    lv_obj_t *power_icons_cont;
    lv_obj_t *trun_off_button;
    lv_obj_t *restart_button;
    lv_obj_t *power_icons_cont_3;
    lv_obj_t *trun_off_button_3;
    lv_obj_t *power_icons_cont_2;
    lv_obj_t *trun_off_button_2;
} objects_t;

extern objects_t objects;

void create_screen_home_screen();
void tick_screen_home_screen();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();

// Color themes

enum Themes {
    THEME_ID_DARK,
};
enum Colors {
    COLOR_ID_BLACK,
    COLOR_ID_GRAY_DARK,
    COLOR_ID_RED_DARK,
    COLOR_ID_GRAY_BRIGHT,
};
void change_color_theme(uint32_t themeIndex);
extern uint32_t theme_colors[1][4];
extern uint32_t active_theme_index;

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/