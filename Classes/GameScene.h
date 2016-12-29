#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"

class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);

	void goToPauseScene(cocos2d::Ref *pSender);

	void goToGameOverScene(cocos2d::Ref *pSender);
};

#endif // __MAIN_SCENE_H__
