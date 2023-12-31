// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: ui_project

#include "../ui.h"

void ui_ScreenHome_screen_init(void)
{
ui_ScreenHome = lv_obj_create(NULL);
lv_obj_clear_flag( ui_ScreenHome, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_ScreenHome, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ScreenHome, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_PanelStatus = lv_obj_create(ui_ScreenHome);
lv_obj_set_width( ui_PanelStatus, 112);
lv_obj_set_height( ui_PanelStatus, 112);
lv_obj_set_align( ui_PanelStatus, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_PanelStatus, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_PanelStatus, 8, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelBattery = lv_label_create(ui_ScreenHome);
lv_obj_set_width( ui_LabelBattery, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelBattery, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelBattery, 40 );
lv_obj_set_y( ui_LabelBattery, -45 );
lv_obj_set_align( ui_LabelBattery, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelBattery,"-");

ui_LabelTime = lv_label_create(ui_ScreenHome);
lv_obj_set_width( ui_LabelTime, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelTime, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelTime, -30 );
lv_obj_set_y( ui_LabelTime, -45 );
lv_obj_set_align( ui_LabelTime, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelTime,"07:09");
lv_obj_set_style_text_font(ui_LabelTime, &ui_font_Fixedasys16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ButtonApp = lv_btn_create(ui_ScreenHome);
lv_obj_set_width( ui_ButtonApp, 36);
lv_obj_set_height( ui_ButtonApp, 36);
lv_obj_set_x( ui_ButtonApp, -25 );
lv_obj_set_y( ui_ButtonApp, -15 );
lv_obj_set_align( ui_ButtonApp, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ButtonApp, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_ButtonApp, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_ButtonApp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ButtonApp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_ButtonApp, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_ButtonApp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_ButtonApp, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_ButtonApp, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelApp = lv_label_create(ui_ButtonApp);
lv_obj_set_width( ui_LabelApp, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelApp, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LabelApp, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelApp,"Read");
lv_obj_set_style_text_color(ui_LabelApp, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelApp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_LabelApp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelApp, &ui_font_Fixedasys16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ButtonApp1 = lv_btn_create(ui_ScreenHome);
lv_obj_set_width( ui_ButtonApp1, 36);
lv_obj_set_height( ui_ButtonApp1, 36);
lv_obj_set_x( ui_ButtonApp1, 25 );
lv_obj_set_y( ui_ButtonApp1, -15 );
lv_obj_set_align( ui_ButtonApp1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ButtonApp1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_ButtonApp1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_ButtonApp1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ButtonApp1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_ButtonApp1, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_ButtonApp1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_ButtonApp1, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_ButtonApp1, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelApp1 = lv_label_create(ui_ButtonApp1);
lv_obj_set_width( ui_LabelApp1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelApp1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LabelApp1, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelApp1,"Game");
lv_obj_set_style_text_color(ui_LabelApp1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelApp1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_LabelApp1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelApp1, &ui_font_Fixedasys16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ButtonApp2 = lv_btn_create(ui_ScreenHome);
lv_obj_set_width( ui_ButtonApp2, 36);
lv_obj_set_height( ui_ButtonApp2, 36);
lv_obj_set_x( ui_ButtonApp2, -25 );
lv_obj_set_y( ui_ButtonApp2, 30 );
lv_obj_set_align( ui_ButtonApp2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ButtonApp2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_ButtonApp2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_ButtonApp2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ButtonApp2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_ButtonApp2, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_ButtonApp2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_ButtonApp2, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_ButtonApp2, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelApp2 = lv_label_create(ui_ButtonApp2);
lv_obj_set_width( ui_LabelApp2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelApp2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LabelApp2, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelApp2,"Set");
lv_obj_set_style_text_color(ui_LabelApp2, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelApp2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_LabelApp2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelApp2, &ui_font_Fixedasys16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ButtonApp3 = lv_btn_create(ui_ScreenHome);
lv_obj_set_width( ui_ButtonApp3, 36);
lv_obj_set_height( ui_ButtonApp3, 36);
lv_obj_set_x( ui_ButtonApp3, 25 );
lv_obj_set_y( ui_ButtonApp3, 30 );
lv_obj_set_align( ui_ButtonApp3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ButtonApp3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_ButtonApp3, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_ButtonApp3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ButtonApp3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_ButtonApp3, lv_color_hex(0xAAAAAA), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_ButtonApp3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_ButtonApp3, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_ButtonApp3, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelApp3 = lv_label_create(ui_ButtonApp3);
lv_obj_set_width( ui_LabelApp3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelApp3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LabelApp3, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelApp3,"Term");
lv_obj_set_style_text_color(ui_LabelApp3, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelApp3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_LabelApp3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelApp3, &ui_font_Fixedasys16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelWifi = lv_label_create(ui_ScreenHome);
lv_obj_set_width( ui_LabelWifi, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelWifi, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelWifi, 20 );
lv_obj_set_y( ui_LabelWifi, -45 );
lv_obj_set_align( ui_LabelWifi, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelWifi,"-");

ui_LabelGPS = lv_label_create(ui_ScreenHome);
lv_obj_set_width( ui_LabelGPS, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelGPS, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelGPS, 0 );
lv_obj_set_y( ui_LabelGPS, -45 );
lv_obj_set_align( ui_LabelGPS, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelGPS,"-");

}
