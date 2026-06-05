#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;

//
// Event handlers
//

lv_obj_t *tick_value_change_obj;

//
// Screens
//

void create_screen_home_screen() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.home_screen = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 466, 466);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj0 = obj;
            lv_obj_set_pos(obj, 185, 410);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_mono40, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[active_theme_index][1]), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text_static(obj, "HOME");
        }
        {
            // homeContainerMain
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.home_container_main = obj;
            lv_obj_set_pos(obj, 33, 10);
            lv_obj_set_size(obj, 400, 430);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_layout(obj, LV_LAYOUT_FLEX, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_flex_flow(obj, LV_FLEX_FLOW_COLUMN, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_flex_main_place(obj, LV_FLEX_ALIGN_SPACE_EVENLY, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_flex_cross_place(obj, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // powerIconsCont
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.power_icons_cont = obj;
                    lv_obj_set_pos(obj, 37, 74);
                    lv_obj_set_size(obj, 290, 140);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_layout(obj, LV_LAYOUT_FLEX, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_flex_flow(obj, LV_FLEX_FLOW_ROW, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_flex_track_place(obj, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_flex_main_place(obj, LV_FLEX_ALIGN_SPACE_AROUND, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // trunOffBUtton
                            lv_obj_t *obj = lv_btn_create(parent_obj);
                            objects.trun_off_button = obj;
                            lv_obj_set_pos(obj, 174, 318);
                            lv_obj_set_size(obj, 100, 100);
                            lv_obj_set_style_bg_img_src(obj, &img_power_icon, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[active_theme_index][2]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xd44444), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_opa(obj, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_width(obj, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_spread(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // restartButton
                            lv_obj_t *obj = lv_btn_create(parent_obj);
                            objects.restart_button = obj;
                            lv_obj_set_pos(obj, 174, 318);
                            lv_obj_set_size(obj, 100, 100);
                            lv_obj_set_style_bg_img_src(obj, &img_reboot_icon, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[active_theme_index][2]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xd44444), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_opa(obj, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_width(obj, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_spread(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // powerIconsCont_3
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.power_icons_cont_3 = obj;
                    lv_obj_set_pos(obj, 20, 74);
                    lv_obj_set_size(obj, 400, 120);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_layout(obj, LV_LAYOUT_FLEX, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // trunOffBUtton_3
                            lv_obj_t *obj = lv_btn_create(parent_obj);
                            objects.trun_off_button_3 = obj;
                            lv_obj_set_pos(obj, 174, 318);
                            lv_obj_set_size(obj, 90, 90);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[active_theme_index][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // powerIconsCont_2
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.power_icons_cont_2 = obj;
                    lv_obj_set_pos(obj, 20, 74);
                    lv_obj_set_size(obj, 400, 120);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_layout(obj, LV_LAYOUT_FLEX, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // trunOffBUtton_2
                            lv_obj_t *obj = lv_btn_create(parent_obj);
                            objects.trun_off_button_2 = obj;
                            lv_obj_set_pos(obj, 174, 318);
                            lv_obj_set_size(obj, 100, 100);
                            lv_obj_set_style_bg_img_src(obj, &img_power_icon, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[active_theme_index][2]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_color(obj, lv_color_hex(0xc65050), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_opa(obj, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_width(obj, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_shadow_spread(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
    }
    
    tick_screen_home_screen();
}

void tick_screen_home_screen() {
}

typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_home_screen,
};
void tick_screen(int screen_index) {
    if (screen_index >= 0 && screen_index < 1) {
        tick_screen_funcs[screen_index]();
    }
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen(screenId - 1);
}

//
// Fonts
//

ext_font_desc_t fonts[] = {
    { "mono40", &ui_font_mono40 },
#if LV_FONT_MONTSERRAT_8
    { "MONTSERRAT_8", &lv_font_montserrat_8 },
#endif
#if LV_FONT_MONTSERRAT_10
    { "MONTSERRAT_10", &lv_font_montserrat_10 },
#endif
#if LV_FONT_MONTSERRAT_12
    { "MONTSERRAT_12", &lv_font_montserrat_12 },
#endif
#if LV_FONT_MONTSERRAT_14
    { "MONTSERRAT_14", &lv_font_montserrat_14 },
#endif
#if LV_FONT_MONTSERRAT_16
    { "MONTSERRAT_16", &lv_font_montserrat_16 },
#endif
#if LV_FONT_MONTSERRAT_18
    { "MONTSERRAT_18", &lv_font_montserrat_18 },
#endif
#if LV_FONT_MONTSERRAT_20
    { "MONTSERRAT_20", &lv_font_montserrat_20 },
#endif
#if LV_FONT_MONTSERRAT_22
    { "MONTSERRAT_22", &lv_font_montserrat_22 },
#endif
#if LV_FONT_MONTSERRAT_24
    { "MONTSERRAT_24", &lv_font_montserrat_24 },
#endif
#if LV_FONT_MONTSERRAT_26
    { "MONTSERRAT_26", &lv_font_montserrat_26 },
#endif
#if LV_FONT_MONTSERRAT_28
    { "MONTSERRAT_28", &lv_font_montserrat_28 },
#endif
#if LV_FONT_MONTSERRAT_30
    { "MONTSERRAT_30", &lv_font_montserrat_30 },
#endif
#if LV_FONT_MONTSERRAT_32
    { "MONTSERRAT_32", &lv_font_montserrat_32 },
#endif
#if LV_FONT_MONTSERRAT_34
    { "MONTSERRAT_34", &lv_font_montserrat_34 },
#endif
#if LV_FONT_MONTSERRAT_36
    { "MONTSERRAT_36", &lv_font_montserrat_36 },
#endif
#if LV_FONT_MONTSERRAT_38
    { "MONTSERRAT_38", &lv_font_montserrat_38 },
#endif
#if LV_FONT_MONTSERRAT_40
    { "MONTSERRAT_40", &lv_font_montserrat_40 },
#endif
#if LV_FONT_MONTSERRAT_42
    { "MONTSERRAT_42", &lv_font_montserrat_42 },
#endif
#if LV_FONT_MONTSERRAT_44
    { "MONTSERRAT_44", &lv_font_montserrat_44 },
#endif
#if LV_FONT_MONTSERRAT_46
    { "MONTSERRAT_46", &lv_font_montserrat_46 },
#endif
#if LV_FONT_MONTSERRAT_48
    { "MONTSERRAT_48", &lv_font_montserrat_48 },
#endif
};

//
// Color themes
//

uint32_t active_theme_index = 0;
void change_color_theme(uint32_t theme_index) {
    active_theme_index = theme_index;
    
    {
        lv_obj_set_style_text_color(objects.obj0, lv_color_hex(theme_colors[theme_index][1]), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_color(objects.trun_off_button, lv_color_hex(theme_colors[theme_index][2]), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_color(objects.restart_button, lv_color_hex(theme_colors[theme_index][2]), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_color(objects.trun_off_button_3, lv_color_hex(theme_colors[theme_index][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_color(objects.trun_off_button_2, lv_color_hex(theme_colors[theme_index][2]), LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    lv_obj_invalidate(objects.home_screen);
}
uint32_t theme_colors[1][4] = {
    { 0xff000000, 0xff323232, 0xff9c0808, 0xff4a484a },
};

//
//
//

void create_screens() {

// Set default LVGL theme
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    // Initialize screens
    // Create screens
    create_screen_home_screen();
}