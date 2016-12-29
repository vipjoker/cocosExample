#include "GameScene.h"
#include "SimpleAudioEngine.h"
#include "PauseScene.h"
#include "GameOverScene.h"

USING_NS_CC;

Scene* GameScene::createScene()
{
    auto scene = Scene::create();
    
    auto layer = GameScene::create();

    scene->addChild(layer);

    return scene;
}

bool GameScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    return true;
}

void GameScene::goToGameOverScene(cocos2d::Ref *pSender)
{
	auto scene  = GameOverScene::createScene();

	Director::getInstance()->replaceScene(scene);
}

void GameScene::goToPauseScene(cocos2d::Ref *pSender)
{
	auto scene  = PauseScene::createScene();
	Director::getInstance()->pushScene(scene);
}
