/*
 * include/linux/input/sweep2wake.h
 *
 * Copyright (c) 2013, Dennis Rassmann <showp1984@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _LINUX_SWEEP2WAKE_H
#define _LINUX_SWEEP2WAKE_H

extern bool s2w_scr_suspended;
//extern bool scr_suspended;
extern int s2w_s2sonly;

extern int s2d_enabled;
extern int down_kcal, up_kcal;
extern int update_preset_lcdc_lut_s2d(int lut_trigger);
extern int gestures_switch;
extern int vib_strength;
#if !defined(CONFIG_TOUCHSCREEN_SWEEP2WAKE)
int s2w_switch = 0;
#else
extern int s2w_switch;
#endif
#endif	/* _LINUX_SWEEP2WAKE_H */
