/* This file is part of the KDE libraries
   Copyright (C) 2006 David Faure <faure@kde.org>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License version 2 as published by the Free Software Foundation.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/

/*
 * This file exists to see that ktrader needs to be ported at compile time rather than at link time,
 * and to avoid interferences from installed ktrader.h files
 */
#ifdef KDE_NO_COMPAT
#error ktrader.h does not exist anymore, please use kservicetypetrader or kmimetypetrader
#else
#include <kservicetypetrader.h>
#include <kmimetypetrader.h>
#endif
