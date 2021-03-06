/*
 *      envtree.h
 *      
 *      Copyright 2010 Alexander Petukhov <devel(at)apetukhov.ru>
 *      
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *      
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *      
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */

#ifndef ENVTREE_H
#define ENVTREE_H

#include <glib.h>
#include <gtk/gtk.h>

GtkWidget*		envtree_init(void);
void			envtree_destroy(void);
void			envtree_clear(void);
void			envtree_set_readonly(gboolean readonly);
void			envtree_add_environment(const gchar *name, const gchar *value);
GList*			envpage_get_environment(void);

#endif /* guard */
