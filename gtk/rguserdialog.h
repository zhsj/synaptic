/* rguserdialog.h
 *
 * Copyright (c) 2000, 2001 Conectiva S/A
 *
 * Author: Alfredo K. Kojima <kojima@conectiva.com.br>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 */

#ifndef RGUSERDIALOG_H
#define RGUSERDIALOG_H
#include "rpackagelister.h"

#include "galertpanel.h"


class RGUserDialog : public RUserDialog
{

protected:

   GtkWidget *_parentWindow;

   static void actionResponse(GtkDialog *dialog, gint id, gpointer user_data)
   {
      GtkResponseType *res = (GtkResponseType*) user_data;
      *res = (GtkResponseType) id;
   }

public:

   RGUserDialog(GtkWidget *parent = NULL) : _parentWindow(parent) {};

   virtual bool confirm(const char *message);
   virtual void warning(const char *message);
   virtual void info(const char *message);
   virtual void error(const char *message);
};

#endif
