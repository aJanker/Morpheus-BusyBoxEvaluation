/* Copyright (C) 1998-99 Martin Baulig
   This file is part of LibGTop 1.0.

   Contributed by Martin Baulig <martin@home-of-linux.org>, April 1998.

   LibGTop is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License,
   or (at your option) any later version.

   LibGTop is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
   for more details.

   You should have received a copy of the GNU General Public License
   along with LibGTop; see the file COPYING. If not, write to the
   Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
*/

#ifndef __GLIBTOP_PROC_ARGS_H__
#define __GLIBTOP_PROC_ARGS_H__

#include <glibtop.h>
#include <glibtop/global.h>

G_BEGIN_DECLS

#define GLIBTOP_PROC_ARGS_SIZE		0

#define GLIBTOP_MAX_PROC_ARGS		1

typedef struct _glibtop_proc_args	glibtop_proc_args;

struct _glibtop_proc_args
{
	guint64	flags;
	guint64 size;			/* GLIBTOP_PROC_ARGS_SIZE	*/
};


char *
glibtop_get_proc_args_l (glibtop *server, glibtop_proc_args *buf,
			 pid_t pid, unsigned max_len);

char *
glibtop_get_proc_args (glibtop_proc_args *buf, pid_t pid, unsigned max_len);

#if GLIBTOP_SUID_PROC_ARGS

# define glibtop_get_proc_args_r		glibtop_get_proc_args_p

  void _glibtop_init_proc_args_p (glibtop *server);

  char *
  glibtop_get_proc_args_p (glibtop *server, glibtop_proc_args *buf,
			   pid_t pid, unsigned max_len);


#else /* !GLIBTOP_SUID_PROC_ARGS */

# define glibtop_get_proc_args_r		glibtop_get_proc_args_s

  void _glibtop_init_proc_args_s (glibtop *server);

  char *
  glibtop_get_proc_args_s (glibtop *server, glibtop_proc_args *buf,
			   pid_t pid, unsigned max_len);
#endif /* GLIBTOP_SUID_PROC_ARGS */



/*
 * NEW functions
 */

char **
glibtop_get_proc_argv_l (glibtop *server, glibtop_proc_args *buf,
			 pid_t pid, unsigned max_len);

char **
glibtop_get_proc_argv (glibtop_proc_args *buf, pid_t pid, unsigned max_len);


G_END_DECLS

#endif
