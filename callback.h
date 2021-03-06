/*
 * Copyright (C) 2016 adil belhaji <belhaji.dev@gmail.com>
 * 
 * textedit is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * textedit is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

 
#ifndef CALLBACK_H
#define CALLBACK_H

#include "textedit.h"




void menu_item_new_clicked(GtkWidget *wid,gpointer data);

void menu_item_open_clicked(GtkWidget *wid,gpointer data);

void menu_item_save_clicked(GtkWidget *wid,gpointer data);

void menu_item_save_as_clicked(GtkWidget *wid,gpointer data);

void menu_item_quit_clicked(GtkWidget *item,gpointer data);



void menu_item_undo_clicked(GtkWidget *wid,gpointer data);

void menu_item_redo_clicked(GtkWidget *wid,gpointer data);

void menu_item_copy_clicked(GtkWidget *wid,gpointer data);

void menu_item_cut_clicked(GtkWidget *wid,gpointer data);

void menu_item_paste_clicked(GtkWidget *wid,gpointer data);

void menu_item_delete_clicked(GtkWidget *wid,gpointer data);

void menu_item_select_all_clicked(GtkWidget *wid,gpointer data);

void menu_item_deselect_clicked(GtkWidget *wid,gpointer data);

void menu_item_to_upper_clicked(GtkWidget *wid,gpointer data);

void menu_item_to_lower_clicked(GtkWidget *wid,gpointer data);

void menu_item_find_clicked(GtkWidget *wid,gpointer data);


void menu_item_line_number_clicked(GtkWidget *wid,gpointer data);

void menu_item_auto_indent_clicked(GtkWidget *wid,gpointer data);

void menu_item_highlight_line_clicked(GtkWidget *wid,gpointer data);

void menu_item_tool_bar_clicked(GtkWidget *wid,gpointer data);

void menu_item_font_clicked(GtkWidget *wid,gpointer data);



void menu_item_about_clicked(GtkWidget *wid,gpointer data);

gboolean mainWindowDeleteEvent(GtkWidget *wid,GdkEvent  *e,gpointer data);

void buffer_changed(GtkWidget *wid,gpointer data);



#endif /* CALLBACK_H */
