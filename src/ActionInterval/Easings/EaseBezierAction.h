/****************************************************************************
Copyright (c) 2008-2010 Ricardo Quesada
Copyright (c) 2010-2012 cocos2d-x.org
Copyright (c) 2011      Zynga Inc.
Copyright (c) 2013-2014 Chukong Technologies Inc.

http://www.cocos2d-x.org

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

#ifndef EASEBEZIERACTION_H
#define EASEBEZIERACTION_H
#include "../ActionEase.h"

OFXACTIONS_NS_BEGIN
/**
@class EaseBezierAction
@brief Ease Bezier
@ingroup Actions
*/
class EaseBezierAction : public ActionEase
{
public:
    /**
     @brief Create the action with the inner action.
     @param action The pointer of the inner action.
     @return A pointer of EaseBezierAction action. If creation failed, return nil.
    */
    static EaseBezierAction *create(ActionInterval *action);

    virtual void update(float time) override;
    virtual EaseBezierAction *clone() const override;
    virtual EaseBezierAction *reverse() const override;

    /**
    @brief Set the bezier parameters.
    */
    virtual void setBezierParamer(float p0, float p1, float p2, float p3);

public:
    EaseBezierAction() {}
    virtual ~EaseBezierAction() {}

protected:
    float m_P0;
    float m_P1;
    float m_P2;
    float m_P3;

private:
    DISALLOW_COPY_AND_ASSIGN(EaseBezierAction);
};

OFXACTIONS_NS_END

#endif // EASEBEZIERACTION_H
