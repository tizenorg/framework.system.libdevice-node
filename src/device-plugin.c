/*
 * Copyright (c) 2012 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License"),
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/


#include <string.h>
#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <errno.h>

#include "devman_plugin_intf.h"

static int OEM_sys_get_display_count(int *value)
{
	return 0;
}

static int OEM_sys_get_backlight_min_brightness(int index, int *value)
{
	return 0;
}

static int OEM_sys_get_backlight_max_brightness(int index, int *value)
{
	return 0;
}

static int OEM_sys_get_backlight_brightness(int index, int *value, int power_saving)
{
	return 0;
}

static int OEM_sys_set_backlight_brightness(int index, int value, int power_saving)
{
	return 0;
}

static int OEM_sys_set_backlight_dimming(int index, int value)
{
	return 0;
}

static int OEM_sys_get_backlight_acl_control(int index, int *value)
{
	return 0;
}

static int OEM_sys_set_backlight_acl_control(int index, int value)
{
	return 0;
}

static int OEM_sys_get_lcd_power(int index, int *value)
{
	return 0;
}

static int OEM_sys_set_lcd_power(int index, int value)
{
	return 0;
}

static int OEM_sys_get_image_enhance_mode(int *value)
{
	return 0;
}

static int OEM_sys_set_image_enhance_mode(int value)
{
	return 0;
}

static int OEM_sys_get_image_enhance_scenario(int *value)
{
	return 0;
}

static int OEM_sys_set_image_enhance_scenario(int value)
{
	return 0;
}

static int OEM_sys_get_image_enhance_tone(int *value)
{
	return 0;
}

static int OEM_sys_set_image_enhance_tone(int value)
{
	return 0;
}

static int OEM_sys_get_image_enhance_outdoor(int *value)
{
	return 0;
}

static int OEM_sys_set_image_enhance_outdoor(int value)
{
	return 0;
}

static int OEM_sys_get_image_enhance_tune(int *value)
{
	return 0;
}

static int OEM_sys_set_image_enhance_tune(int value)
{
	return 0;
}

static int OEM_sys_image_enhance_info(int *value)
{
	return 0;
}

static int OEM_sys_get_image_enhance_color_blind(int *value)
{
	return 0;
}

static int OEM_sys_set_image_enhance_color_blind(void *value)
{
	return 0;
}

static int OEM_sys_set_display_frame_rate(int value)
{
	return 0;
}

static int OEM_sys_set_auto_screen_tone(int index, int value)
{
	return 0;
}

static int OEM_sys_get_auto_screen_tone(int index, int *value)
{
	return 0;
}

static int OEM_sys_get_uart_path(int *value)
{
	return 0;
}

static int OEM_sys_set_uart_path(int value)
{
	return 0;
}

static int OEM_sys_get_usb_path(int *value)
{
	return 0;
}

static int OEM_sys_set_usb_path(int value)
{
	return 0;
}

static int OEM_sys_get_haptic_vibetones_level_max(int *value)
{
	return 0;
}

static int OEM_sys_get_haptic_vibetones_level(int *value)
{
	return 0;
}

static int OEM_sys_set_haptic_vibetones_level(int value)
{
	return 0;
}

static int OEM_sys_set_haptic_vibetones_enable(int value)
{
	return 0;
}

static int OEM_sys_set_haptic_vibetones_oneshot(int value)
{
	return 0;
}

static int OEM_sys_get_battery_capacity(int *value)
{
	return 0;
}

static int OEM_sys_get_battery_capacity_raw(int *value)
{
	return 0;
}

static int OEM_sys_get_battery_charge_full(int *value)
{
	return 0;
}

static int OEM_sys_get_battery_charge_now(int *value)
{
	return 0;
}

static int OEM_sys_get_battery_present(int *value)
{
	return 0;
}

static int OEM_sys_get_battery_health(int *value)
{
	return 0;
}

static int OEM_sys_get_battery_polling_required(int *value)
{
	return 0;
}

static int OEM_sys_get_battery_support_insuspend_charging(int *value)
{
	return 0;
}

static int OEM_sys_get_jack_charger_online(int *value)
{
	return 0;
}

static int OEM_sys_get_jack_earjack_online(int *value)
{
	return 0;
}

static int OEM_sys_get_jack_earkey_online(int *value)
{
	return 0;
}

static int OEM_sys_get_jack_hdmi_online(int *value)
{
	return 0;
}

static int OEM_sys_get_jack_usb_online(int *value)
{
	return 0;
}

static int OEM_sys_get_jack_cradle_online(int *value)
{
	return 0;
}

static int OEM_sys_get_jack_tvout_online(int *value)
{
	return 0;
}

static int OEM_sys_get_jack_keyboard_online(int *value)
{
	return 0;
}

static int OEM_sys_get_leds_torch_max_brightness(int *value)
{
	return 0;
}

static int OEM_sys_get_leds_torch_brightness(int *value)
{
	return 0;
}

static int OEM_sys_set_leds_torch_brightness(int value)
{
	return 0;
}

static int OEM_sys_set_power_state(int value)
{
	return 0;
}

static int OEM_sys_set_power_lock(int value)
{
	return 0;
}

static int OEM_sys_get_power_lock_support(int *value)
{
	return 0;
}

static int OEM_sys_get_power_wakeup_count(int *value)
{
	return 0;
}

static int OEM_sys_set_power_wakeup_count(int value)
{
	return 0;
}

static int OEM_sys_get_memnotify_node(char *node)
{
	return 0;
}

static int OEM_sys_get_memnotify_victim_task(int *value)
{
	return 0;
}

static int OEM_sys_set_memnotify_threshold_lv1(int value)
{
	return 0;
}

static int OEM_sys_set_memnotify_threshold_lv2(int value)
{
	return 0;
}

static int OEM_sys_get_process_monitor_node(char *node)
{
	return 0;
}

static int OEM_sys_set_process_monitor_mp_pnp(int value)
{
	return 0;
}

static int OEM_sys_set_process_monitor_mp_vip(int value)
{
	return 0;
}

static int OEM_sys_get_cpufreq_cpuinfo_max_freq(int *value)
{
	return 0;
}

static int OEM_sys_get_cpufreq_cpuinfo_min_freq(int *value)
{
	return 0;
}

static int OEM_sys_get_cpufreq_scaling_max_freq(int *value)
{
	return 0;
}

static int OEM_sys_set_cpufreq_scaling_max_freq(int value)
{
	return 0;
}

static int OEM_sys_get_cpufreq_scaling_min_freq(int *value)
{
	return 0;
}

static int OEM_sys_set_cpufreq_scaling_min_freq(int value)
{
	return 0;
}

static int OEM_sys_get_cpufreq_power_max_freq(int *value)
{
	return 0;
}

static int OEM_sys_set_cpufreq_power_max_freq(int value)
{
	return 0;
}

static int OEM_sys_get_cpufreq_power_min_freq(int *value)
{
	return 0;
}

static int OEM_sys_set_cpufreq_power_min_freq(int value)
{
	return 0;
}

static int OEM_sys_get_battery_siop_active(int *value)
{
	return 0;
}

static int OEM_sys_set_battery_siop_active(int value)
{
	return 0;
}

static int OEM_sys_get_cpu_enable_max_number(int *value)
{
	return 0;
}

static int OEM_sys_set_cpu_enable_max_number(int value)
{
	return 0;
}

static int OEM_sys_get_temperature_adc(int *value)
{
	return 0;
}

static int OEM_sys_get_temperature_value(int *value)
{
	return 0;
}

static int OEM_sys_get_backlight_overheating_control(int index, int *value)
{
	return 0;
}

static int OEM_sys_set_backlight_overheating_control(int index, int value)
{
	return 0;
}

static int OEM_sys_get_backlight_brightness_by_lux(int lux, int *value, int force)
{
	return 0;
}

static int OEM_sys_get_whitemagic_mode(int index, int *value)
{
	return 0;
}

static int OEM_sys_set_whitemagic_mode(int index, int value)
{
	return 0;
}

static int OEM_sys_get_lcd_cabc(int index, int *value)
{
	return 0;
}

static int OEM_sys_set_lcd_cabc(int index, int value)
{
	return 0;
}

static int OEM_sys_get_hdmi_support(int *value)
{
	return 0;
}

static int OEM_sys_set_irled_control(char *value)
{
	return 0;
}

static int OEM_sys_set_svcled_color(int rgb, int led_on_ms, int led_off_ms)
{
	return 0;
}

static int OEM_sys_get_hall_status(char *value)
{
	return 0;
}

static int OEM_sys_set_siop_control(int level, int mode)
{
	return 0;
}

static int OEM_sys_set_resetkey_disable(int value)
{
	return 0;
}

static int OEM_sys_get_hardkey_backlight(int *value)
{
	return 0;
}

static int OEM_sys_set_hardkey_backlight(int value)
{
	return 0;
}

static int OEM_sys_get_battery_technology(char *value)
{
	return 0;
}

static int OEM_sys_get_battery_temperature(int *value)
{
	return 0;
}

static int OEM_sys_get_battery_voltage(int *value)
{
	return 0;
}

static int OEM_sys_get_leds_flash_brightness(int *value)
{
	return 0;
}

static int OEM_sys_set_leds_flash_brightness(int value)
{
	return 0;
}

static int OEM_sys_set_cpufreq_id_min_freq(char *value)
{
	return 0;
}

static int OEM_sys_set_cpufreq_id_max_freq(char *value)
{
	return 0;
}

static int OEM_sys_get_cpu_fixed_number(int *value)
{
	return 0;
}

static int OEM_sys_set_cpu_fixed_number(int value)
{
	return 0;
}

static int OEM_sys_get_touchscreen_clear_cover(int *value)
{
	return 0;
}

static int OEM_sys_set_touchscreen_clear_cover(int value)
{
	return 0;
}

static int OEM_sys_get_touchscreen_glove_mode(int *value)
{
	return 0;
}

static int OEM_sys_set_touchscreen_glove_mode(int value)
{
	return 0;
}

static int OEM_sys_get_touchkey_flip_mode(int *value)
{
	return 0;
}

static int OEM_sys_set_touchkey_flip_mode(int value)
{
	return 0;
}

static int OEM_sys_get_touchkey_glove_mode(int *value)
{
	return 0;
}

static int OEM_sys_set_touchkey_glove_mode(int value)
{
	return 0;
}

static int OEM_sys_get_backlight_hbm_control(int index, int *value)
{
	return 0;
}

static int OEM_sys_set_backlight_hbm_control(int index, int value)
{
	return 0;
}

static int OEM_sys_set_pm_scenario(char *value)
{
	return 0;
}

static int OEM_sys_get_siop_level(int *value)
{
	return 0;
}

static int OEM_sys_get_rear_level(int *value)
{
	return 0;
}

static int OEM_sys_get_backlight_elvss_control(int index, int *value)
{
	return 0;
}

static int OEM_sys_set_backlight_elvss_control(int index, int value)
{
	return 0;
}

static int OEM_sys_set_key(int index, int value)
{
	return 0;
}

static int OEM_sys_set_backlight_max_brightness(int index, int value)
{
	return 0;
}

static int OEM_sys_set_auto_screen_tone_force(int index, int value)
{
	return 0;
}

static int OEM_sys_get_extcon(int type, int *value)
{
	return 0;
}

static int OEM_sys_set_extcon(int type, int value)
{
	return 0;
}

const OEM_sys_devman_plugin_interface default_plugin = {
	/* Light interfaces */
	.OEM_sys_get_display_count = OEM_sys_get_display_count,

	.OEM_sys_get_backlight_min_brightness = OEM_sys_get_backlight_min_brightness,
	.OEM_sys_get_backlight_max_brightness = OEM_sys_get_backlight_max_brightness,
	.OEM_sys_get_backlight_brightness = OEM_sys_get_backlight_brightness,
	.OEM_sys_set_backlight_brightness = OEM_sys_set_backlight_brightness,

	.OEM_sys_set_backlight_dimming = OEM_sys_set_backlight_dimming,

	.OEM_sys_get_backlight_acl_control = OEM_sys_get_backlight_acl_control,
	.OEM_sys_set_backlight_acl_control = OEM_sys_set_backlight_acl_control,

	.OEM_sys_get_lcd_power = OEM_sys_get_lcd_power,
	.OEM_sys_set_lcd_power = OEM_sys_set_lcd_power,

	/* Image Ehnhace interfaces */
	.OEM_sys_get_image_enhance_mode = OEM_sys_get_image_enhance_mode,
	.OEM_sys_set_image_enhance_mode = OEM_sys_set_image_enhance_mode,
	.OEM_sys_get_image_enhance_scenario = OEM_sys_get_image_enhance_scenario,
	.OEM_sys_set_image_enhance_scenario = OEM_sys_set_image_enhance_scenario,
	.OEM_sys_get_image_enhance_tone = OEM_sys_get_image_enhance_tone,
	.OEM_sys_set_image_enhance_tone = OEM_sys_set_image_enhance_tone,
	.OEM_sys_get_image_enhance_outdoor = OEM_sys_get_image_enhance_outdoor,
	.OEM_sys_set_image_enhance_outdoor = OEM_sys_set_image_enhance_outdoor,

	.OEM_sys_get_image_enhance_tune = OEM_sys_get_image_enhance_tune,
	.OEM_sys_set_image_enhance_tune = OEM_sys_set_image_enhance_tune,

	.OEM_sys_image_enhance_info = OEM_sys_image_enhance_info,

	.OEM_sys_get_image_enhance_color_blind = OEM_sys_get_image_enhance_color_blind,
	.OEM_sys_set_image_enhance_color_blind = OEM_sys_set_image_enhance_color_blind,

	.OEM_sys_set_display_frame_rate = OEM_sys_set_display_frame_rate,

	.OEM_sys_set_auto_screen_tone = OEM_sys_set_auto_screen_tone,
	.OEM_sys_get_auto_screen_tone = OEM_sys_get_auto_screen_tone,

	/* UART path interfaces */
	.OEM_sys_get_uart_path = OEM_sys_get_uart_path,
	.OEM_sys_set_uart_path = OEM_sys_set_uart_path,

	/* USB path interfaces */
	.OEM_sys_get_usb_path = OEM_sys_get_usb_path,
	.OEM_sys_set_usb_path = OEM_sys_set_usb_path,

	/* Vibrator interfaces */
	.OEM_sys_get_haptic_vibetones_level_max = OEM_sys_get_haptic_vibetones_level_max,
	.OEM_sys_get_haptic_vibetones_level = OEM_sys_get_haptic_vibetones_level,
	.OEM_sys_set_haptic_vibetones_level = OEM_sys_set_haptic_vibetones_level,
	.OEM_sys_set_haptic_vibetones_enable = OEM_sys_set_haptic_vibetones_enable,
	.OEM_sys_set_haptic_vibetones_oneshot = OEM_sys_set_haptic_vibetones_oneshot,

	/* Battery interfaces */
	.OEM_sys_get_battery_capacity = OEM_sys_get_battery_capacity,
	.OEM_sys_get_battery_capacity_raw = OEM_sys_get_battery_capacity_raw,
	.OEM_sys_get_battery_charge_full = OEM_sys_get_battery_charge_full,
	.OEM_sys_get_battery_charge_now = OEM_sys_get_battery_charge_now,
	.OEM_sys_get_battery_present = OEM_sys_get_battery_present,
	.OEM_sys_get_battery_health = OEM_sys_get_battery_health,
	.OEM_sys_get_battery_polling_required= OEM_sys_get_battery_polling_required,
	.OEM_sys_get_battery_support_insuspend_charging = OEM_sys_get_battery_support_insuspend_charging,

	/* Connection interfaces  */
	.OEM_sys_get_jack_charger_online = OEM_sys_get_jack_charger_online,
	.OEM_sys_get_jack_earjack_online = OEM_sys_get_jack_earjack_online,
	.OEM_sys_get_jack_earkey_online = OEM_sys_get_jack_earkey_online,
	.OEM_sys_get_jack_hdmi_online = OEM_sys_get_jack_hdmi_online,
	.OEM_sys_get_jack_usb_online = OEM_sys_get_jack_usb_online,
	.OEM_sys_get_jack_cradle_online = OEM_sys_get_jack_cradle_online,
	.OEM_sys_get_jack_tvout_online = OEM_sys_get_jack_tvout_online,
	.OEM_sys_get_jack_keyboard_online = OEM_sys_get_jack_keyboard_online,

	/* Torch interfaces */
	.OEM_sys_get_leds_torch_max_brightness = OEM_sys_get_leds_torch_max_brightness,
	.OEM_sys_get_leds_torch_brightness = OEM_sys_get_leds_torch_brightness,
	.OEM_sys_set_leds_torch_brightness = OEM_sys_set_leds_torch_brightness,

	/* Power management interfaces */
	.OEM_sys_set_power_state = OEM_sys_set_power_state,
	.OEM_sys_set_power_lock = OEM_sys_set_power_lock,
	.OEM_sys_get_power_lock_support = OEM_sys_get_power_lock_support,

	/* TODO: Should determine enum values of wakeup_count nodes */
	.OEM_sys_get_power_wakeup_count = OEM_sys_get_power_wakeup_count,
	.OEM_sys_set_power_wakeup_count = OEM_sys_set_power_wakeup_count,

	/* OOM interfaces */
	.OEM_sys_get_memnotify_node = OEM_sys_get_memnotify_node,
	.OEM_sys_get_memnotify_victim_task = OEM_sys_get_memnotify_victim_task,
	.OEM_sys_set_memnotify_threshold_lv1 = OEM_sys_set_memnotify_threshold_lv1,
	.OEM_sys_set_memnotify_threshold_lv2 = OEM_sys_set_memnotify_threshold_lv2,

	/* Process monitor interfaces */
	.OEM_sys_get_process_monitor_node = OEM_sys_get_process_monitor_node,
	.OEM_sys_set_process_monitor_mp_pnp = OEM_sys_set_process_monitor_mp_pnp,
	.OEM_sys_set_process_monitor_mp_vip = OEM_sys_set_process_monitor_mp_vip,

	/* UART path interfaces */
	.OEM_sys_get_cpufreq_cpuinfo_max_freq = OEM_sys_get_cpufreq_cpuinfo_max_freq,
	.OEM_sys_get_cpufreq_cpuinfo_min_freq = OEM_sys_get_cpufreq_cpuinfo_min_freq,
	.OEM_sys_get_cpufreq_scaling_max_freq = OEM_sys_get_cpufreq_scaling_max_freq,
	.OEM_sys_set_cpufreq_scaling_max_freq = OEM_sys_set_cpufreq_scaling_max_freq,
	.OEM_sys_get_cpufreq_scaling_min_freq = OEM_sys_get_cpufreq_scaling_min_freq,
	.OEM_sys_set_cpufreq_scaling_min_freq = OEM_sys_set_cpufreq_scaling_min_freq,
	.OEM_sys_get_cpufreq_power_max_freq = OEM_sys_get_cpufreq_power_max_freq,
	.OEM_sys_set_cpufreq_power_max_freq = OEM_sys_set_cpufreq_power_max_freq,
	.OEM_sys_get_cpufreq_power_min_freq = OEM_sys_get_cpufreq_power_min_freq,
	.OEM_sys_set_cpufreq_power_min_freq = OEM_sys_set_cpufreq_power_min_freq,

	.OEM_sys_get_battery_siop_active = OEM_sys_get_battery_siop_active,
	.OEM_sys_set_battery_siop_active = OEM_sys_set_battery_siop_active,

	.OEM_sys_get_cpu_enable_max_number = OEM_sys_get_cpu_enable_max_number,
	.OEM_sys_set_cpu_enable_max_number= OEM_sys_set_cpu_enable_max_number,

	.OEM_sys_get_temperature_adc = OEM_sys_get_temperature_adc,
	.OEM_sys_get_temperature_value = OEM_sys_get_temperature_value,

	.OEM_sys_get_backlight_overheating_control = OEM_sys_get_backlight_overheating_control,
	.OEM_sys_set_backlight_overheating_control = OEM_sys_set_backlight_overheating_control,

	.OEM_sys_get_backlight_brightness_by_lux = OEM_sys_get_backlight_brightness_by_lux,

	.OEM_sys_get_whitemagic_mode = OEM_sys_get_whitemagic_mode,
	.OEM_sys_set_whitemagic_mode = OEM_sys_set_whitemagic_mode,

	.OEM_sys_get_lcd_cabc = OEM_sys_get_lcd_cabc,
	.OEM_sys_set_lcd_cabc = OEM_sys_set_lcd_cabc,

	.OEM_sys_get_hdmi_support = OEM_sys_get_hdmi_support,

	.OEM_sys_set_irled_control = OEM_sys_set_irled_control,

	.OEM_sys_set_svcled_color = OEM_sys_set_svcled_color,

	.OEM_sys_get_hall_status = OEM_sys_get_hall_status,
	.OEM_sys_set_siop_control = OEM_sys_set_siop_control,

	.OEM_sys_set_resetkey_disable = OEM_sys_set_resetkey_disable,

	.OEM_sys_get_hardkey_backlight = OEM_sys_get_hardkey_backlight,
	.OEM_sys_set_hardkey_backlight = OEM_sys_set_hardkey_backlight,

	.OEM_sys_get_battery_technology = OEM_sys_get_battery_technology,
	.OEM_sys_get_battery_temperature = OEM_sys_get_battery_temperature,
	.OEM_sys_get_battery_voltage = OEM_sys_get_battery_voltage,

	.OEM_sys_get_leds_flash_brightness = OEM_sys_get_leds_flash_brightness,
	.OEM_sys_set_leds_flash_brightness = OEM_sys_set_leds_flash_brightness,

	.OEM_sys_set_cpufreq_id_min_freq = OEM_sys_set_cpufreq_id_min_freq,
	.OEM_sys_set_cpufreq_id_max_freq = OEM_sys_set_cpufreq_id_max_freq,
	.OEM_sys_get_cpu_fixed_number = OEM_sys_get_cpu_fixed_number,
	.OEM_sys_set_cpu_fixed_number = OEM_sys_set_cpu_fixed_number,

	.OEM_sys_get_touchscreen_clear_cover = OEM_sys_get_touchscreen_clear_cover,
	.OEM_sys_set_touchscreen_clear_cover = OEM_sys_set_touchscreen_clear_cover,
	.OEM_sys_get_touchscreen_glove_mode = OEM_sys_get_touchscreen_glove_mode,
	.OEM_sys_set_touchscreen_glove_mode = OEM_sys_set_touchscreen_glove_mode,

	.OEM_sys_get_touchkey_flip_mode = OEM_sys_get_touchkey_flip_mode,
	.OEM_sys_set_touchkey_flip_mode = OEM_sys_set_touchkey_flip_mode,
	.OEM_sys_get_touchkey_glove_mode = OEM_sys_get_touchkey_glove_mode,
	.OEM_sys_set_touchkey_glove_mode = OEM_sys_set_touchkey_glove_mode,

	.OEM_sys_get_backlight_hbm_control = OEM_sys_get_backlight_hbm_control,
	.OEM_sys_set_backlight_hbm_control = OEM_sys_set_backlight_hbm_control,

	.OEM_sys_set_pm_scenario = OEM_sys_set_pm_scenario,

	.OEM_sys_get_siop_level = OEM_sys_get_siop_level,
	.OEM_sys_get_rear_level = OEM_sys_get_rear_level,

	.OEM_sys_get_backlight_elvss_control = OEM_sys_get_backlight_elvss_control,
	.OEM_sys_set_backlight_elvss_control = OEM_sys_set_backlight_elvss_control,

	.OEM_sys_set_key = OEM_sys_set_key,

	.OEM_sys_set_backlight_max_brightness = OEM_sys_set_backlight_max_brightness,
	.OEM_sys_set_auto_screen_tone_force = OEM_sys_set_auto_screen_tone_force,

	.OEM_sys_get_extcon = OEM_sys_get_extcon,
	.OEM_sys_set_extcon = OEM_sys_set_extcon,
};
