#ifndef OFXACTIONMANAGER_H
#define OFXACTIONMANAGER_H
#include "TweenFunction.h"
#include "uthash.h"
#include "utlist.h"
#include "Action.h"
#include "ActionEase.h"
#include "ActionInstant.h"
#include "ActionInterval.h"
#include "ActionManager.h"
#include "ActionTarget.h"
#include "Array.h"

//Action Instant
#include "ActionInstant/CallFunc.h"
#include "ActionInstant/VisibilityAction.h"

//Action Interval
#include "ActionInterval/BezierAction.h"
#include "ActionInterval/DelayTime.h"
#include "ActionInterval/MoveAction.h"
#include "ActionInterval/RepeatAction.h"
#include "ActionInterval/RotateAction.h"
#include "ActionInterval/ScaleAction.h"
#include "ActionInterval/Sequence.h"
#include "ActionInterval/Spawn.h"
#include "ActionInterval/TintAction.h"
#include "ActionInterval/ActionFloat.h"
#include "ActionInterval/ActionVec3.h"
#include "ActionInterval/ActionVec4.h"
#include "ActionInterval/FadeAction.h"

//Easings
#include "ActionInterval/Easings/EaseBack.h"
#include "ActionInterval/Easings/EaseBezierAction.h"
#include "ActionInterval/Easings/EaseBounce.h"
#include "ActionInterval/Easings/EaseCircle.h"
#include "ActionInterval/Easings/EaseCubic.h"
#include "ActionInterval/Easings/EaseElastic.h"
#include "ActionInterval/Easings/EaseExponential.h"
#include "ActionInterval/Easings/EaseIn.h"
#include "ActionInterval/Easings/EaseInOut.h"
#include "ActionInterval/Easings/EaseOut.h"
#include "ActionInterval/Easings/EaseQuadratic.h"
#include "ActionInterval/Easings/EaseQuartic.h"
#include "ActionInterval/Easings/EaseQuintic.h"
#include "ActionInterval/Easings/EaseSineIn.h"
#include "ActionInterval/Easings/EaseSineInOut.h"
#include "ActionInterval/Easings/EaseSineOut.h"


#endif // OFXACTIONMANAGER_H
