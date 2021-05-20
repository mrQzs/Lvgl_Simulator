TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt



INCLUDEPATH += $$PWD/include

greaterThan(QT_MAJOR_VERSION,4){
        TARGET_ARCH=$${QT_ARCH}
}else{
        TARGET_ARCH=$${QMAKE_HOST.arch}
}
contains(TARGET_ARCH, x86_64){
#ifdef _MSC_VER
    LIBS += -L$$PWD/lib/msvc/x64/ -lSDL2main -lSDL2
#elif __GNUC__
    LIBS += -L$$PWD/lib/mingw/x64/  -lSDL2main -lSDL2
#endif
    CONFIG(debug, debug|release){
        MOC_DIR = build/x64/moc/debug
        OBJECTS_DIR = build/x64/obj/debug
        RCC_DIR = build/x64/rcc/debug
        UI_DIR = build/x64/ui/debug
        DESTDIR = bin/x64/debug
    }else{
        MOC_DIR = build/x64/moc/release
        OBJECTS_DIR = build/x64/obj/release
        RCC_DIR = build/x64/rcc/release
        UI_DIR = build/x64/ui/release
        DESTDIR = bin/x64/release
    }
}else{
#ifdef _MSC_VER
    LIBS += -L$$PWD/lib/msvc/win32/ -lSDL2main -lSDL2
#elif __GNUC__
    LIBS += -L$$PWD/lib/mingw/win32/ -lmingw32 -lSDL2main -lSDL2
#endif
    CONFIG(debug, debug|release){
        MOC_DIR = build/win32/moc/debug
        OBJECTS_DIR = build/win32/obj/debug
        RCC_DIR = build/win32/rcc/debug
        UI_DIR = build/win32/ui/debug
        DESTDIR = bin/win32/debug
    }else{
        MOC_DIR = build/win32/moc/release
        OBJECTS_DIR = build/win32/obj/release
        RCC_DIR = build/win32/rcc/release
        UI_DIR = build/win32/ui/release
        DESTDIR = bin/win32/release
    }
}

SOURCES += main.c \
    lv_drivers/display/fbdev.c \
    lv_drivers/display/monitor.c \
    lv_drivers/display/R61581.c \
    lv_drivers/display/SHARP_MIP.c \
    lv_drivers/display/SSD1963.c \
    lv_drivers/display/ST7565.c \
    lv_drivers/display/UC1610.c \
    lv_drivers/indev/AD_touch.c \
    lv_drivers/indev/evdev.c \
    lv_drivers/indev/FT5406EE8.c \
    lv_drivers/indev/keyboard.c \
    lv_drivers/indev/libinput.c \
    lv_drivers/indev/mouse.c \
    lv_drivers/indev/mousewheel.c \
    lv_drivers/indev/XPT2046.c \
    lv_drivers/win_drv.c \
    lvgl/src/lv_core/lv_disp.c \
    lvgl/src/lv_core/lv_group.c \
    lvgl/src/lv_core/lv_indev.c \
    lvgl/src/lv_core/lv_obj.c \
    lvgl/src/lv_core/lv_refr.c \
    lvgl/src/lv_core/lv_style.c \
    lvgl/src/lv_draw/lv_draw_arc.c \
    lvgl/src/lv_draw/lv_draw_blend.c \
    lvgl/src/lv_draw/lv_draw_img.c \
    lvgl/src/lv_draw/lv_draw_label.c \
    lvgl/src/lv_draw/lv_draw_line.c \
    lvgl/src/lv_draw/lv_draw_mask.c \
    lvgl/src/lv_draw/lv_draw_rect.c \
    lvgl/src/lv_draw/lv_draw_triangle.c \
    lvgl/src/lv_draw/lv_img_buf.c \
    lvgl/src/lv_draw/lv_img_cache.c \
    lvgl/src/lv_draw/lv_img_decoder.c \
    lvgl/src/lv_font/lv_font.c \
    lvgl/src/lv_font/lv_font_dejavu_16_persian_hebrew.c \
    lvgl/src/lv_font/lv_font_fmt_txt.c \
    lvgl/src/lv_font/lv_font_loader.c \
    lvgl/src/lv_font/lv_font_montserrat_10.c \
    lvgl/src/lv_font/lv_font_montserrat_12.c \
    lvgl/src/lv_font/lv_font_montserrat_12_subpx.c \
    lvgl/src/lv_font/lv_font_montserrat_14.c \
    lvgl/src/lv_font/lv_font_montserrat_16.c \
    lvgl/src/lv_font/lv_font_montserrat_18.c \
    lvgl/src/lv_font/lv_font_montserrat_20.c \
    lvgl/src/lv_font/lv_font_montserrat_22.c \
    lvgl/src/lv_font/lv_font_montserrat_24.c \
    lvgl/src/lv_font/lv_font_montserrat_26.c \
    lvgl/src/lv_font/lv_font_montserrat_28.c \
    lvgl/src/lv_font/lv_font_montserrat_28_compressed.c \
    lvgl/src/lv_font/lv_font_montserrat_30.c \
    lvgl/src/lv_font/lv_font_montserrat_32.c \
    lvgl/src/lv_font/lv_font_montserrat_34.c \
    lvgl/src/lv_font/lv_font_montserrat_36.c \
    lvgl/src/lv_font/lv_font_montserrat_38.c \
    lvgl/src/lv_font/lv_font_montserrat_40.c \
    lvgl/src/lv_font/lv_font_montserrat_42.c \
    lvgl/src/lv_font/lv_font_montserrat_44.c \
    lvgl/src/lv_font/lv_font_montserrat_46.c \
    lvgl/src/lv_font/lv_font_montserrat_48.c \
    lvgl/src/lv_font/lv_font_montserrat_8.c \
    lvgl/src/lv_font/lv_font_simsun_16_cjk.c \
    lvgl/src/lv_font/lv_font_unscii_16.c \
    lvgl/src/lv_font/lv_font_unscii_8.c \
    lvgl/src/lv_gpu/lv_gpu_nxp_pxp.c \
    lvgl/src/lv_gpu/lv_gpu_nxp_pxp_osa.c \
    lvgl/src/lv_gpu/lv_gpu_nxp_vglite.c \
    lvgl/src/lv_gpu/lv_gpu_stm32_dma2d.c \
    lvgl/src/lv_hal/lv_hal_disp.c \
    lvgl/src/lv_hal/lv_hal_indev.c \
    lvgl/src/lv_hal/lv_hal_tick.c \
    lvgl/src/lv_misc/lv_anim.c \
    lvgl/src/lv_misc/lv_area.c \
    lvgl/src/lv_misc/lv_async.c \
    lvgl/src/lv_misc/lv_bidi.c \
    lvgl/src/lv_misc/lv_color.c \
    lvgl/src/lv_misc/lv_debug.c \
    lvgl/src/lv_misc/lv_fs.c \
    lvgl/src/lv_misc/lv_gc.c \
    lvgl/src/lv_misc/lv_ll.c \
    lvgl/src/lv_misc/lv_log.c \
    lvgl/src/lv_misc/lv_math.c \
    lvgl/src/lv_misc/lv_mem.c \
    lvgl/src/lv_misc/lv_printf.c \
    lvgl/src/lv_misc/lv_task.c \
    lvgl/src/lv_misc/lv_templ.c \
    lvgl/src/lv_misc/lv_txt.c \
    lvgl/src/lv_misc/lv_txt_ap.c \
    lvgl/src/lv_misc/lv_utils.c \
    lvgl/src/lv_themes/lv_theme.c \
    lvgl/src/lv_themes/lv_theme_empty.c \
    lvgl/src/lv_themes/lv_theme_material.c \
    lvgl/src/lv_themes/lv_theme_mono.c \
    lvgl/src/lv_themes/lv_theme_template.c \
    lvgl/src/lv_widgets/lv_arc.c \
    lvgl/src/lv_widgets/lv_bar.c \
    lvgl/src/lv_widgets/lv_btn.c \
    lvgl/src/lv_widgets/lv_btnmatrix.c \
    lvgl/src/lv_widgets/lv_calendar.c \
    lvgl/src/lv_widgets/lv_canvas.c \
    lvgl/src/lv_widgets/lv_chart.c \
    lvgl/src/lv_widgets/lv_checkbox.c \
    lvgl/src/lv_widgets/lv_cont.c \
    lvgl/src/lv_widgets/lv_cpicker.c \
    lvgl/src/lv_widgets/lv_dropdown.c \
    lvgl/src/lv_widgets/lv_gauge.c \
    lvgl/src/lv_widgets/lv_img.c \
    lvgl/src/lv_widgets/lv_imgbtn.c \
    lvgl/src/lv_widgets/lv_keyboard.c \
    lvgl/src/lv_widgets/lv_label.c \
    lvgl/src/lv_widgets/lv_led.c \
    lvgl/src/lv_widgets/lv_line.c \
    lvgl/src/lv_widgets/lv_linemeter.c \
    lvgl/src/lv_widgets/lv_list.c \
    lvgl/src/lv_widgets/lv_msgbox.c \
    lvgl/src/lv_widgets/lv_objmask.c \
    lvgl/src/lv_widgets/lv_objx_templ.c \
    lvgl/src/lv_widgets/lv_page.c \
    lvgl/src/lv_widgets/lv_roller.c \
    lvgl/src/lv_widgets/lv_slider.c \
    lvgl/src/lv_widgets/lv_spinbox.c \
    lvgl/src/lv_widgets/lv_spinner.c \
    lvgl/src/lv_widgets/lv_switch.c \
    lvgl/src/lv_widgets/lv_table.c \
    lvgl/src/lv_widgets/lv_tabview.c \
    lvgl/src/lv_widgets/lv_textarea.c \
    lvgl/src/lv_widgets/lv_tileview.c \
    lvgl/src/lv_widgets/lv_win.c \
    mouse_cursor_icon.c \
    lv_examples/src/lv_demo_benchmark/lv_demo_benchmark.c \
    lv_examples/assets/img_cogwheel_alpha16.c \
    lv_examples/assets/img_cogwheel_argb.c \
    lv_examples/assets/img_cogwheel_chroma_keyed.c \
    lv_examples/assets/img_cogwheel_indexed16.c \
    lv_examples/assets/img_cogwheel_rgb.c \
    lv_examples/assets/lv_font_montserrat_12_compr_az.c \
    lv_examples/assets/lv_font_montserrat_16_compr_az.c \
    lv_examples/assets/lv_font_montserrat_28_compr_az.c \
    lv_examples/src/lv_ex_widgets/lv_ex_calendar/lv_ex_calendar_1.c \
    lv_examples/src/lv_ex_widgets/lv_ex_tabview/lv_ex_tabview_1.c

HEADERS += \
    include/SDL2/begin_code.h \
    include/SDL2/close_code.h \
    include/SDL2/SDL.h \
    include/SDL2/SDL_assert.h \
    include/SDL2/SDL_atomic.h \
    include/SDL2/SDL_audio.h \
    include/SDL2/SDL_bits.h \
    include/SDL2/SDL_blendmode.h \
    include/SDL2/SDL_clipboard.h \
    include/SDL2/SDL_config.h \
    include/SDL2/SDL_cpuinfo.h \
    include/SDL2/SDL_egl.h \
    include/SDL2/SDL_endian.h \
    include/SDL2/SDL_error.h \
    include/SDL2/SDL_events.h \
    include/SDL2/SDL_filesystem.h \
    include/SDL2/SDL_gamecontroller.h \
    include/SDL2/SDL_gesture.h \
    include/SDL2/SDL_haptic.h \
    include/SDL2/SDL_hints.h \
    include/SDL2/SDL_joystick.h \
    include/SDL2/SDL_keyboard.h \
    include/SDL2/SDL_keycode.h \
    include/SDL2/SDL_loadso.h \
    include/SDL2/SDL_log.h \
    include/SDL2/SDL_main.h \
    include/SDL2/SDL_messagebox.h \
    include/SDL2/SDL_mouse.h \
    include/SDL2/SDL_mutex.h \
    include/SDL2/SDL_name.h \
    include/SDL2/SDL_opengl.h \
    include/SDL2/SDL_opengl_glext.h \
    include/SDL2/SDL_opengles.h \
    include/SDL2/SDL_opengles2.h \
    include/SDL2/SDL_opengles2_gl2.h \
    include/SDL2/SDL_opengles2_gl2ext.h \
    include/SDL2/SDL_opengles2_gl2platform.h \
    include/SDL2/SDL_opengles2_khrplatform.h \
    include/SDL2/SDL_pixels.h \
    include/SDL2/SDL_platform.h \
    include/SDL2/SDL_power.h \
    include/SDL2/SDL_quit.h \
    include/SDL2/SDL_rect.h \
    include/SDL2/SDL_render.h \
    include/SDL2/SDL_revision.h \
    include/SDL2/SDL_rwops.h \
    include/SDL2/SDL_scancode.h \
    include/SDL2/SDL_shape.h \
    include/SDL2/SDL_stdinc.h \
    include/SDL2/SDL_surface.h \
    include/SDL2/SDL_system.h \
    include/SDL2/SDL_syswm.h \
    include/SDL2/SDL_test.h \
    include/SDL2/SDL_test_assert.h \
    include/SDL2/SDL_test_common.h \
    include/SDL2/SDL_test_compare.h \
    include/SDL2/SDL_test_crc32.h \
    include/SDL2/SDL_test_font.h \
    include/SDL2/SDL_test_fuzzer.h \
    include/SDL2/SDL_test_harness.h \
    include/SDL2/SDL_test_images.h \
    include/SDL2/SDL_test_log.h \
    include/SDL2/SDL_test_md5.h \
    include/SDL2/SDL_test_memory.h \
    include/SDL2/SDL_test_random.h \
    include/SDL2/SDL_thread.h \
    include/SDL2/SDL_timer.h \
    include/SDL2/SDL_touch.h \
    include/SDL2/SDL_types.h \
    include/SDL2/SDL_version.h \
    include/SDL2/SDL_video.h \
    include/SDL2/SDL_vulkan.h \
    lv_drivers/display/fbdev.h \
    lv_drivers/display/monitor.h \
    lv_drivers/display/R61581.h \
    lv_drivers/display/SHARP_MIP.h \
    lv_drivers/display/SSD1963.h \
    lv_drivers/display/ST7565.h \
    lv_drivers/display/UC1610.h \
    lv_drivers/indev/AD_touch.h \
    lv_drivers/indev/evdev.h \
    lv_drivers/indev/FT5406EE8.h \
    lv_drivers/indev/keyboard.h \
    lv_drivers/indev/libinput_drv.h \
    lv_drivers/indev/mouse.h \
    lv_drivers/indev/mousewheel.h \
    lv_drivers/indev/XPT2046.h \
    lv_drivers/win_drv.h \
    lv_conf.h \
    lv_drv_conf.h \
    lv_examples/src/lv_demo_benchmark/lv_demo_benchmark.h \
    lv_examples/lv_ex_conf.h \
    lv_examples/lv_examples.h \
    lvgl/lv_conf_template.h \
    lvgl/lvgl.h \
    lvgl/src/lv_api_map.h \
    lvgl/src/lv_conf_internal.h \
    lvgl/src/lv_conf_kconfig.h \
    lvgl/src/lv_core/lv_disp.h \
    lvgl/src/lv_core/lv_group.h \
    lvgl/src/lv_core/lv_indev.h \
    lvgl/src/lv_core/lv_obj.h \
    lvgl/src/lv_core/lv_obj_style_dec.h \
    lvgl/src/lv_core/lv_refr.h \
    lvgl/src/lv_core/lv_style.h \
    lvgl/src/lv_draw/lv_draw.h \
    lvgl/src/lv_draw/lv_draw_arc.h \
    lvgl/src/lv_draw/lv_draw_blend.h \
    lvgl/src/lv_draw/lv_draw_img.h \
    lvgl/src/lv_draw/lv_draw_label.h \
    lvgl/src/lv_draw/lv_draw_line.h \
    lvgl/src/lv_draw/lv_draw_mask.h \
    lvgl/src/lv_draw/lv_draw_rect.h \
    lvgl/src/lv_draw/lv_draw_triangle.h \
    lvgl/src/lv_draw/lv_img_buf.h \
    lvgl/src/lv_draw/lv_img_cache.h \
    lvgl/src/lv_draw/lv_img_decoder.h \
    lvgl/src/lv_font/lv_font.h \
    lvgl/src/lv_font/lv_font_fmt_txt.h \
    lvgl/src/lv_font/lv_font_loader.h \
    lvgl/src/lv_font/lv_symbol_def.h \
    lvgl/src/lv_gpu/lv_gpu_nxp_pxp.h \
    lvgl/src/lv_gpu/lv_gpu_nxp_pxp_osa.h \
    lvgl/src/lv_gpu/lv_gpu_nxp_vglite.h \
    lvgl/src/lv_gpu/lv_gpu_stm32_dma2d.h \
    lvgl/src/lv_hal/lv_hal.h \
    lvgl/src/lv_hal/lv_hal_disp.h \
    lvgl/src/lv_hal/lv_hal_indev.h \
    lvgl/src/lv_hal/lv_hal_tick.h \
    lvgl/src/lv_misc/lv_anim.h \
    lvgl/src/lv_misc/lv_area.h \
    lvgl/src/lv_misc/lv_async.h \
    lvgl/src/lv_misc/lv_bidi.h \
    lvgl/src/lv_misc/lv_color.h \
    lvgl/src/lv_misc/lv_debug.h \
    lvgl/src/lv_misc/lv_fs.h \
    lvgl/src/lv_misc/lv_gc.h \
    lvgl/src/lv_misc/lv_ll.h \
    lvgl/src/lv_misc/lv_log.h \
    lvgl/src/lv_misc/lv_math.h \
    lvgl/src/lv_misc/lv_mem.h \
    lvgl/src/lv_misc/lv_printf.h \
    lvgl/src/lv_misc/lv_task.h \
    lvgl/src/lv_misc/lv_templ.h \
    lvgl/src/lv_misc/lv_txt.h \
    lvgl/src/lv_misc/lv_txt_ap.h \
    lvgl/src/lv_misc/lv_types.h \
    lvgl/src/lv_misc/lv_utils.h \
    lvgl/src/lv_themes/lv_theme.h \
    lvgl/src/lv_themes/lv_theme_empty.h \
    lvgl/src/lv_themes/lv_theme_material.h \
    lvgl/src/lv_themes/lv_theme_mono.h \
    lvgl/src/lv_themes/lv_theme_template.h \
    lvgl/src/lv_widgets/lv_arc.h \
    lvgl/src/lv_widgets/lv_bar.h \
    lvgl/src/lv_widgets/lv_btn.h \
    lvgl/src/lv_widgets/lv_btnmatrix.h \
    lvgl/src/lv_widgets/lv_calendar.h \
    lvgl/src/lv_widgets/lv_canvas.h \
    lvgl/src/lv_widgets/lv_chart.h \
    lvgl/src/lv_widgets/lv_checkbox.h \
    lvgl/src/lv_widgets/lv_cont.h \
    lvgl/src/lv_widgets/lv_cpicker.h \
    lvgl/src/lv_widgets/lv_dropdown.h \
    lvgl/src/lv_widgets/lv_gauge.h \
    lvgl/src/lv_widgets/lv_img.h \
    lvgl/src/lv_widgets/lv_imgbtn.h \
    lvgl/src/lv_widgets/lv_keyboard.h \
    lvgl/src/lv_widgets/lv_label.h \
    lvgl/src/lv_widgets/lv_led.h \
    lvgl/src/lv_widgets/lv_line.h \
    lvgl/src/lv_widgets/lv_linemeter.h \
    lvgl/src/lv_widgets/lv_list.h \
    lvgl/src/lv_widgets/lv_msgbox.h \
    lvgl/src/lv_widgets/lv_objmask.h \
    lvgl/src/lv_widgets/lv_objx_templ.h \
    lvgl/src/lv_widgets/lv_page.h \
    lvgl/src/lv_widgets/lv_roller.h \
    lvgl/src/lv_widgets/lv_slider.h \
    lvgl/src/lv_widgets/lv_spinbox.h \
    lvgl/src/lv_widgets/lv_spinner.h \
    lvgl/src/lv_widgets/lv_switch.h \
    lvgl/src/lv_widgets/lv_table.h \
    lvgl/src/lv_widgets/lv_tabview.h \
    lvgl/src/lv_widgets/lv_textarea.h \
    lvgl/src/lv_widgets/lv_tileview.h \
    lvgl/src/lv_widgets/lv_win.h \
    lvgl/src/lvgl.h

OTHER_FILES +=

DISTFILES += \
    lvgl/src/lv_core/lv_core.mk \
    lvgl/src/lv_draw/lv_draw.mk \
    lvgl/src/lv_font/lv_font.mk \
    lvgl/src/lv_gpu/lv_gpu.mk \
    lvgl/src/lv_hal/lv_hal.mk \
    lvgl/src/lv_misc/lv_misc.mk \
    lvgl/src/lv_themes/lv_themes.mk \
    lvgl/src/lv_widgets/lv_widgets.mk

