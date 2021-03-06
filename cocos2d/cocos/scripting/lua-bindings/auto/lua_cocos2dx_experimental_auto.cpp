#include "lua_cocos2dx_experimental_auto.hpp"
#include "CCFastTMXLayer.h"
#include "CCFastTMXTiledMap.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_experimental_TMXLayer_getPositionAt(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_getPositionAt'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::Vec2 ret = cobj->getPositionAt(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPositionAt",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_getPositionAt'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_setLayerOrientation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_setLayerOrientation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setLayerOrientation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLayerOrientation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_setLayerOrientation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_getLayerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_getLayerSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getLayerSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLayerSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_getLayerSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_setMapTileSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_setMapTileSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setMapTileSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMapTileSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_setMapTileSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_getLayerOrientation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_getLayerOrientation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getLayerOrientation();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLayerOrientation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_getLayerOrientation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_setProperties(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_setProperties'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ValueMap arg0;

        ok &= luaval_to_ccvaluemap(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setProperties(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setProperties",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_setProperties'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_setLayerName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_setLayerName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setLayerName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLayerName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_setLayerName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_removeTileAt(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_removeTileAt'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->removeTileAt(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeTileAt",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_removeTileAt'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_getProperties(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_getProperties'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            cocos2d::ValueMap& ret = cobj->getProperties();
            ccvaluemap_to_luaval(tolua_S, ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            const cocos2d::ValueMap& ret = cobj->getProperties();
            ccvaluemap_to_luaval(tolua_S, ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getProperties",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_getProperties'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_setupTiles(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_setupTiles'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->setupTiles();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setupTiles",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_setupTiles'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_setupTileSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_setupTileSprite'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Sprite* arg0;
        cocos2d::Vec2 arg1;
        int arg2;

        ok &= luaval_to_object<cocos2d::Sprite>(tolua_S, 2, "cc.Sprite",&arg0);

        ok &= luaval_to_vec2(tolua_S, 3, &arg1);

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        if(!ok)
            return 0;
        cobj->setupTileSprite(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setupTileSprite",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_setupTileSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_setTileGID(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_setTileGID'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

            if (!ok) { break; }
            cocos2d::Vec2 arg1;
            ok &= luaval_to_vec2(tolua_S, 3, &arg1);

            if (!ok) { break; }
            cocos2d::TMXTileFlags_ arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);

            if (!ok) { break; }
            cobj->setTileGID(arg0, arg1, arg2);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

            if (!ok) { break; }
            cocos2d::Vec2 arg1;
            ok &= luaval_to_vec2(tolua_S, 3, &arg1);

            if (!ok) { break; }
            cobj->setTileGID(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTileGID",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_setTileGID'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_getMapTileSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_getMapTileSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getMapTileSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMapTileSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_getMapTileSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_getProperty(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_getProperty'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::Value ret = cobj->getProperty(arg0);
        ccvalue_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getProperty",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_getProperty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_setLayerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_setLayerSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setLayerSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLayerSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_setLayerSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_getLayerName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_getLayerName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getLayerName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLayerName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_getLayerName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_setTileSet(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_setTileSet'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::TMXTilesetInfo* arg0;

        ok &= luaval_to_object<cocos2d::TMXTilesetInfo>(tolua_S, 2, "cc.TMXTilesetInfo",&arg0);
        if(!ok)
            return 0;
        cobj->setTileSet(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTileSet",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_setTileSet'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_getTileSet(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_getTileSet'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::TMXTilesetInfo* ret = cobj->getTileSet();
        object_to_luaval<cocos2d::TMXTilesetInfo>(tolua_S, "cc.TMXTilesetInfo",(cocos2d::TMXTilesetInfo*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTileSet",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_getTileSet'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_getTileAt(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXLayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXLayer_getTileAt'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getTileAt(arg0);
        object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTileAt",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_getTileAt'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.experimental::TMXLayer",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        cocos2d::TMXTilesetInfo* arg0;
        cocos2d::TMXLayerInfo* arg1;
        cocos2d::TMXMapInfo* arg2;
        ok &= luaval_to_object<cocos2d::TMXTilesetInfo>(tolua_S, 2, "cc.TMXTilesetInfo",&arg0);
        ok &= luaval_to_object<cocos2d::TMXLayerInfo>(tolua_S, 3, "cc.TMXLayerInfo",&arg1);
        ok &= luaval_to_object<cocos2d::TMXMapInfo>(tolua_S, 4, "cc.TMXMapInfo",&arg2);
        if(!ok)
            return 0;
        cocos2d::experimental::TMXLayer* ret = cocos2d::experimental::TMXLayer::create(arg0, arg1, arg2);
        object_to_luaval<cocos2d::experimental::TMXLayer>(tolua_S, "cc.experimental::TMXLayer",(cocos2d::experimental::TMXLayer*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_experimental_TMXLayer_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXLayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::experimental::TMXLayer();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"cc.experimental::TMXLayer");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "TMXLayer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXLayer_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_experimental_TMXLayer_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TMXLayer)");
    return 0;
}

int lua_register_cocos2dx_experimental_TMXLayer(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.experimental::TMXLayer");
    tolua_cclass(tolua_S,"TMXLayer","cc.experimental::TMXLayer","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"TMXLayer");
        tolua_function(tolua_S,"new",lua_cocos2dx_experimental_TMXLayer_constructor);
        tolua_function(tolua_S,"getPositionAt",lua_cocos2dx_experimental_TMXLayer_getPositionAt);
        tolua_function(tolua_S,"setLayerOrientation",lua_cocos2dx_experimental_TMXLayer_setLayerOrientation);
        tolua_function(tolua_S,"getLayerSize",lua_cocos2dx_experimental_TMXLayer_getLayerSize);
        tolua_function(tolua_S,"setMapTileSize",lua_cocos2dx_experimental_TMXLayer_setMapTileSize);
        tolua_function(tolua_S,"getLayerOrientation",lua_cocos2dx_experimental_TMXLayer_getLayerOrientation);
        tolua_function(tolua_S,"setProperties",lua_cocos2dx_experimental_TMXLayer_setProperties);
        tolua_function(tolua_S,"setLayerName",lua_cocos2dx_experimental_TMXLayer_setLayerName);
        tolua_function(tolua_S,"removeTileAt",lua_cocos2dx_experimental_TMXLayer_removeTileAt);
        tolua_function(tolua_S,"getProperties",lua_cocos2dx_experimental_TMXLayer_getProperties);
        tolua_function(tolua_S,"setupTiles",lua_cocos2dx_experimental_TMXLayer_setupTiles);
        tolua_function(tolua_S,"setupTileSprite",lua_cocos2dx_experimental_TMXLayer_setupTileSprite);
        tolua_function(tolua_S,"setTileGID",lua_cocos2dx_experimental_TMXLayer_setTileGID);
        tolua_function(tolua_S,"getMapTileSize",lua_cocos2dx_experimental_TMXLayer_getMapTileSize);
        tolua_function(tolua_S,"getProperty",lua_cocos2dx_experimental_TMXLayer_getProperty);
        tolua_function(tolua_S,"setLayerSize",lua_cocos2dx_experimental_TMXLayer_setLayerSize);
        tolua_function(tolua_S,"getLayerName",lua_cocos2dx_experimental_TMXLayer_getLayerName);
        tolua_function(tolua_S,"setTileSet",lua_cocos2dx_experimental_TMXLayer_setTileSet);
        tolua_function(tolua_S,"getTileSet",lua_cocos2dx_experimental_TMXLayer_getTileSet);
        tolua_function(tolua_S,"getTileAt",lua_cocos2dx_experimental_TMXLayer_getTileAt);
        tolua_function(tolua_S,"create", lua_cocos2dx_experimental_TMXLayer_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::experimental::TMXLayer).name();
    g_luaType[typeName] = "cc.experimental::TMXLayer";
    g_typeCast["TMXLayer"] = "cc.experimental::TMXLayer";
    return 1;
}

int lua_cocos2dx_experimental_TMXTiledMap_setObjectGroups(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_setObjectGroups'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vector<cocos2d::TMXObjectGroup *> arg0;

        ok &= luaval_to_ccvector(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setObjectGroups(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setObjectGroups",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_setObjectGroups'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_getProperty(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_getProperty'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::Value ret = cobj->getProperty(arg0);
        ccvalue_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getProperty",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_getProperty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_setMapSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_setMapSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setMapSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMapSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_setMapSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_getObjectGroup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_getObjectGroup'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::TMXObjectGroup* ret = cobj->getObjectGroup(arg0);
        object_to_luaval<cocos2d::TMXObjectGroup>(tolua_S, "cc.TMXObjectGroup",(cocos2d::TMXObjectGroup*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getObjectGroup",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_getObjectGroup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_getObjectGroups(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_getObjectGroups'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            cocos2d::Vector<cocos2d::TMXObjectGroup *>& ret = cobj->getObjectGroups();
            ccvector_to_luaval(tolua_S, ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            const cocos2d::Vector<cocos2d::TMXObjectGroup *>& ret = cobj->getObjectGroups();
            ccvector_to_luaval(tolua_S, ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getObjectGroups",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_getObjectGroups'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_getTileSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_getTileSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getTileSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTileSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_getTileSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_getMapSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_getMapSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getMapSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMapSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_getMapSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_getProperties(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_getProperties'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::ValueMap& ret = cobj->getProperties();
        ccvaluemap_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getProperties",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_getProperties'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_getPropertiesForGID(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_getPropertiesForGID'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::Value ret = cobj->getPropertiesForGID(arg0);
        ccvalue_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPropertiesForGID",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_getPropertiesForGID'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_setTileSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_setTileSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setTileSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTileSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_setTileSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_setProperties(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_setProperties'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ValueMap arg0;

        ok &= luaval_to_ccvaluemap(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setProperties(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setProperties",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_setProperties'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_getLayer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_getLayer'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::experimental::TMXLayer* ret = cobj->getLayer(arg0);
        object_to_luaval<cocos2d::experimental::TMXLayer>(tolua_S, "cc.experimental::TMXLayer",(cocos2d::experimental::TMXLayer*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLayer",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_getLayer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_getMapOrientation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_getMapOrientation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getMapOrientation();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMapOrientation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_getMapOrientation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_setMapOrientation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::TMXTiledMap* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::TMXTiledMap*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_TMXTiledMap_setMapOrientation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setMapOrientation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMapOrientation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_setMapOrientation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocos2d::experimental::TMXTiledMap* ret = cocos2d::experimental::TMXTiledMap::create(arg0);
        object_to_luaval<cocos2d::experimental::TMXTiledMap>(tolua_S, "cc.experimental::TMXTiledMap",(cocos2d::experimental::TMXTiledMap*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_experimental_TMXTiledMap_createWithXML(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.experimental::TMXTiledMap",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cocos2d::experimental::TMXTiledMap* ret = cocos2d::experimental::TMXTiledMap::createWithXML(arg0, arg1);
        object_to_luaval<cocos2d::experimental::TMXTiledMap>(tolua_S, "cc.experimental::TMXTiledMap",(cocos2d::experimental::TMXTiledMap*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createWithXML",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_TMXTiledMap_createWithXML'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_experimental_TMXTiledMap_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TMXTiledMap)");
    return 0;
}

int lua_register_cocos2dx_experimental_TMXTiledMap(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.experimental::TMXTiledMap");
    tolua_cclass(tolua_S,"TMXTiledMap","cc.experimental::TMXTiledMap","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"TMXTiledMap");
        tolua_function(tolua_S,"setObjectGroups",lua_cocos2dx_experimental_TMXTiledMap_setObjectGroups);
        tolua_function(tolua_S,"getProperty",lua_cocos2dx_experimental_TMXTiledMap_getProperty);
        tolua_function(tolua_S,"setMapSize",lua_cocos2dx_experimental_TMXTiledMap_setMapSize);
        tolua_function(tolua_S,"getObjectGroup",lua_cocos2dx_experimental_TMXTiledMap_getObjectGroup);
        tolua_function(tolua_S,"getObjectGroups",lua_cocos2dx_experimental_TMXTiledMap_getObjectGroups);
        tolua_function(tolua_S,"getTileSize",lua_cocos2dx_experimental_TMXTiledMap_getTileSize);
        tolua_function(tolua_S,"getMapSize",lua_cocos2dx_experimental_TMXTiledMap_getMapSize);
        tolua_function(tolua_S,"getProperties",lua_cocos2dx_experimental_TMXTiledMap_getProperties);
        tolua_function(tolua_S,"getPropertiesForGID",lua_cocos2dx_experimental_TMXTiledMap_getPropertiesForGID);
        tolua_function(tolua_S,"setTileSize",lua_cocos2dx_experimental_TMXTiledMap_setTileSize);
        tolua_function(tolua_S,"setProperties",lua_cocos2dx_experimental_TMXTiledMap_setProperties);
        tolua_function(tolua_S,"getLayer",lua_cocos2dx_experimental_TMXTiledMap_getLayer);
        tolua_function(tolua_S,"getMapOrientation",lua_cocos2dx_experimental_TMXTiledMap_getMapOrientation);
        tolua_function(tolua_S,"setMapOrientation",lua_cocos2dx_experimental_TMXTiledMap_setMapOrientation);
        tolua_function(tolua_S,"create", lua_cocos2dx_experimental_TMXTiledMap_create);
        tolua_function(tolua_S,"createWithXML", lua_cocos2dx_experimental_TMXTiledMap_createWithXML);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::experimental::TMXTiledMap).name();
    g_luaType[typeName] = "cc.experimental::TMXTiledMap";
    g_typeCast["TMXTiledMap"] = "cc.experimental::TMXTiledMap";
    return 1;
}
TOLUA_API int register_all_cocos2dx_experimental(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ccexp",0);
	tolua_beginmodule(tolua_S,"ccexp");

	lua_register_cocos2dx_experimental_TMXTiledMap(tolua_S);
	lua_register_cocos2dx_experimental_TMXLayer(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

