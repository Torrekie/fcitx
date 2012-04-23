/***************************************************************************
 *   Copyright (C) 2010~2010 by CSSlayer                                   *
 *   wengxt@gmail.com                                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.              *
 ***************************************************************************/

#ifndef _FCITX_MODULE_LUA_H_
#define _FCITX_MODULE_LUA_H_


#ifdef __cplusplus
extern "C" {
#endif

#define FCITX_LUA_NAME "fcitx-lua"
#define FCITX_LUA_CALLCOMMAND 0
#define FCITX_LUA_CALLCOMMAND_RETURNTYPE UT_array *

typedef struct _LuaResultItem {
    char *result;
} LuaResultItem;


#ifdef __cplusplus
}
#endif

#endif
