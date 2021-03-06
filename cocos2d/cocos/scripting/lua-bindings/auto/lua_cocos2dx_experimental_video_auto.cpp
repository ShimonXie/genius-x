#include "lua_cocos2dx_experimental_video_auto.hpp"
#include "UIVideoPlayer.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_experimental_video_VideoPlayer_getFileName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_getFileName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getFileName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFileName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_getFileName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_getURL(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_getURL'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getURL();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getURL",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_getURL'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_play(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_play'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->play();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "play",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_play'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_pause(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_pause'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->pause();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pause",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_pause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_setKeepAspectRatioEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_setKeepAspectRatioEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setKeepAspectRatioEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setKeepAspectRatioEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_setKeepAspectRatioEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_resume(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_resume'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->resume();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resume",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_resume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_stop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_stop'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stop();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_stop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_setFullScreenEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_setFullScreenEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setFullScreenEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFullScreenEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_setFullScreenEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_setFileName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_setFileName'", nullptr);
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
        cobj->setFileName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFileName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_setFileName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_setURL(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_setURL'", nullptr);
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
        cobj->setURL(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setURL",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_setURL'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_isKeepAspectRatioEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_isKeepAspectRatioEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isKeepAspectRatioEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isKeepAspectRatioEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_isKeepAspectRatioEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_onPlayEvent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_onPlayEvent'", nullptr);
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
        cobj->onPlayEvent(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onPlayEvent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_onPlayEvent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_isFullScreenEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_isFullScreenEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isFullScreenEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isFullScreenEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_isFullScreenEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_isPlaying(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_isPlaying'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isPlaying();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isPlaying",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_isPlaying'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_seekTo(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::experimental::ui::VideoPlayer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::experimental::ui::VideoPlayer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_experimental_video_VideoPlayer_seekTo'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->seekTo(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "seekTo",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_seekTo'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_experimental_video_VideoPlayer_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.experimental::ui::VideoPlayer",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::experimental::ui::VideoPlayer* ret = cocos2d::experimental::ui::VideoPlayer::create();
        object_to_luaval<cocos2d::experimental::ui::VideoPlayer>(tolua_S, "cc.experimental::ui::VideoPlayer",(cocos2d::experimental::ui::VideoPlayer*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_experimental_video_VideoPlayer_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_experimental_video_VideoPlayer_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (VideoPlayer)");
    return 0;
}

int lua_register_cocos2dx_experimental_video_VideoPlayer(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.experimental::ui::VideoPlayer");
    tolua_cclass(tolua_S,"VideoPlayer","cc.experimental::ui::VideoPlayer","ccui.Widget",nullptr);

    tolua_beginmodule(tolua_S,"VideoPlayer");
        tolua_function(tolua_S,"getFileName",lua_cocos2dx_experimental_video_VideoPlayer_getFileName);
        tolua_function(tolua_S,"getURL",lua_cocos2dx_experimental_video_VideoPlayer_getURL);
        tolua_function(tolua_S,"play",lua_cocos2dx_experimental_video_VideoPlayer_play);
        tolua_function(tolua_S,"pause",lua_cocos2dx_experimental_video_VideoPlayer_pause);
        tolua_function(tolua_S,"setKeepAspectRatioEnabled",lua_cocos2dx_experimental_video_VideoPlayer_setKeepAspectRatioEnabled);
        tolua_function(tolua_S,"resume",lua_cocos2dx_experimental_video_VideoPlayer_resume);
        tolua_function(tolua_S,"stop",lua_cocos2dx_experimental_video_VideoPlayer_stop);
        tolua_function(tolua_S,"setFullScreenEnabled",lua_cocos2dx_experimental_video_VideoPlayer_setFullScreenEnabled);
        tolua_function(tolua_S,"setFileName",lua_cocos2dx_experimental_video_VideoPlayer_setFileName);
        tolua_function(tolua_S,"setURL",lua_cocos2dx_experimental_video_VideoPlayer_setURL);
        tolua_function(tolua_S,"isKeepAspectRatioEnabled",lua_cocos2dx_experimental_video_VideoPlayer_isKeepAspectRatioEnabled);
        tolua_function(tolua_S,"onPlayEvent",lua_cocos2dx_experimental_video_VideoPlayer_onPlayEvent);
        tolua_function(tolua_S,"isFullScreenEnabled",lua_cocos2dx_experimental_video_VideoPlayer_isFullScreenEnabled);
        tolua_function(tolua_S,"isPlaying",lua_cocos2dx_experimental_video_VideoPlayer_isPlaying);
        tolua_function(tolua_S,"seekTo",lua_cocos2dx_experimental_video_VideoPlayer_seekTo);
        tolua_function(tolua_S,"create", lua_cocos2dx_experimental_video_VideoPlayer_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::experimental::ui::VideoPlayer).name();
    g_luaType[typeName] = "cc.experimental::ui::VideoPlayer";
    g_typeCast["VideoPlayer"] = "cc.experimental::ui::VideoPlayer";
    return 1;
}
TOLUA_API int register_all_cocos2dx_experimental_video(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ccexp",0);
	tolua_beginmodule(tolua_S,"ccexp");

	lua_register_cocos2dx_experimental_video_VideoPlayer(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

