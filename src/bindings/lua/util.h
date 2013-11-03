/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#ifdef LEAN_USE_LUA
#include <lua.hpp>
namespace lean {
void setfuncs(lua_State * L, luaL_Reg const * l, int nup);
}
#endif
