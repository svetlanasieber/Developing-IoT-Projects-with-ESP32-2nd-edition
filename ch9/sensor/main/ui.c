// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.2.0
// Project name: ch9_gui

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_txtTime;
lv_obj_t *ui_pnlLight;
lv_obj_t *ui_txtLight;
lv_obj_t *ui_lblLight;
lv_obj_t *ui_pnlTemp;
lv_obj_t *ui_txtTemp;
lv_obj_t *ui_lblTemp;
void ui_event_chkConnected(lv_event_t *e);
lv_obj_t *ui_chkConnected;
lv_obj_t *ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 1
#error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_chkConnected(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_txtTime = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_txtTime, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_txtTime, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_txtTime, -2);
    lv_obj_set_y(ui_txtTime, -97);
    lv_obj_set_align(ui_txtTime, LV_ALIGN_CENTER);
    lv_label_set_text(ui_txtTime, "<date/time>");
    lv_label_set_recolor(ui_txtTime, "true");

    ui_pnlLight = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_pnlLight, 130);
    lv_obj_set_height(ui_pnlLight, 100);
    lv_obj_set_x(ui_pnlLight, -73);
    lv_obj_set_y(ui_pnlLight, 0);
    lv_obj_set_align(ui_pnlLight, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_pnlLight, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_txtLight = lv_label_create(ui_pnlLight);
    lv_label_set_text(ui_txtLight, "0");
    lv_obj_set_width(ui_txtLight, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_txtLight, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_txtLight, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_style_text_font(ui_txtLight, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblLight = lv_label_create(ui_pnlLight);
    lv_label_set_text(ui_lblLight, "Light");
    lv_obj_set_width(ui_lblLight, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_lblLight, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_lblLight, LV_ALIGN_TOP_MID);

    ui_pnlTemp = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_pnlTemp, 130);
    lv_obj_set_height(ui_pnlTemp, 100);
    lv_obj_set_x(ui_pnlTemp, 73);
    lv_obj_set_y(ui_pnlTemp, 0);
    lv_obj_set_align(ui_pnlTemp, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_pnlTemp, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_txtTemp = lv_label_create(ui_pnlTemp);
    lv_label_set_text(ui_txtTemp, "0.0");
    lv_obj_set_width(ui_txtTemp, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_txtTemp, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_txtTemp, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_style_text_font(ui_txtTemp, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblTemp = lv_label_create(ui_pnlTemp);
    lv_label_set_text(ui_lblTemp, "Temperature");
    lv_obj_set_width(ui_lblTemp, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_lblTemp, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_lblTemp, LV_ALIGN_TOP_MID);

    ui_chkConnected = lv_checkbox_create(ui_Screen1);
    lv_checkbox_set_text(ui_chkConnected, "Disconnected");
    lv_obj_set_width(ui_chkConnected, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_chkConnected, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_chkConnected, -69);
    lv_obj_set_y(ui_chkConnected, 86);
    lv_obj_set_align(ui_chkConnected, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_chkConnected, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_set_style_text_color(ui_chkConnected, lv_color_hex(0xF90909), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_chkConnected, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_chkConnected, lv_color_hex(0x24F213), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui_chkConnected, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_add_event_cb(ui_chkConnected, ui_event_chkConnected, LV_EVENT_ALL, NULL);
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
