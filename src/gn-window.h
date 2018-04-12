/* gn-window.h
 *
 * Copyright 2018 Mohammed Sadiq <sadiq@sadiqpk.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <gtk/gtk.h>

#include "gn-enums.h"
#include "gn-application.h"

G_BEGIN_DECLS

#define GN_TYPE_WINDOW (gn_window_get_type ())

G_DECLARE_FINAL_TYPE (GnWindow, gn_window, GN, WINDOW, GtkApplicationWindow)

GnWindow *gn_window_new (GnApplication *application);

GnViewMode gn_window_get_mode (GnWindow   *self);
void       gn_window_set_view (GnWindow   *self,
                               GnView      view,
                               GnViewMode  mode);

G_END_DECLS