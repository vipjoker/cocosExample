#include "PauseScene.h"
#include "SimpleAudioEngine.h"
#include "GameScene.h"
#include "MainScene.h"

USING_NS_CC;

Scene* PauseScene::createScene()
{
    auto scene = Scene::create();
    
    auto layer = PauseScene::create();

    scene->addChild(layer);

    return scene;
}

bool PauseScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    return true;
}

void PauseScene::resume(cocos2d::Ref *pSender){
	Director::getInstance()->popScene();
}

void PauseScene::goToMainMenuScene(cocos2d::Ref *pSender){
	auto scene = MainScene::createScene();
	Director::getInstance()->popScene();
	Director::getInstance()->replaceScene(scene);
}

void PauseScene::retry(cocos2d::Ref *pSender){
	auto scene = GameScene::createScene();
	Director::getInstance()->popScene();
	Director::getInstance()->replaceScene(scene);
}

