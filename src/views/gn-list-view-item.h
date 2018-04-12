/* gn-list-view-item.h
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

#include "gn-provider-item.h"

G_BEGIN_DECLS

#define GN_TYPE_LIST_VIEW_ITEM (gn_list_view_item_get_type ())

G_DECLARE_FINAL_TYPE (GnListViewItem, gn_list_view_item, GN, LIST_VIEW_ITEM, GtkListBoxRow)

GtkWidget      *gn_list_view_item_new              (gpointer data,
                                                    gpointer user_data);

void            gn_list_view_item_set_selected     (GnListViewItem *self,
                                                    gboolean        is_selected);
gboolean        gn_list_view_item_get_selected     (GnListViewItem *self);
void            gn_list_view_item_toggle_selection (GnListViewItem *self);
GnProviderItem *gn_list_view_item_get_item         (GnListViewItem *self);

G_END_DECLS