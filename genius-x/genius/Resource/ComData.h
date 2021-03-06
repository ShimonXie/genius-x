﻿/****************************************************************************
 Copyright (c) 2014 Elvis Qin
 Copyright (c) 2014 Soulgame Inc.
 
 http://www.genius-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __GX__ComData__
#define __GX__ComData__

#include "../GXMacros.h"
#include "ResourceDataDelegate.h"

NS_GX_BEGIN

class ECSManager;

/**
 * ComData是Com在内存中的数据格式
 */
class ComData : public GX::ResourceDataDelegate
{
public:
    ComData();
    ~ComData();
    
    static std::string _TYPE;
    
    virtual ResourceDataDelegate* cloneEmpty() const override;
    virtual bool initWithFile(const std::string& filename) override;

    rapidjson::Document data;
    
protected:
    bool readJson(const std::string &fileName, rapidjson::Document &doc);

    friend ECSManager;
};

NS_GX_END

#endif /* defined(__GX__ComData__) */
