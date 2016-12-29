#include "GameOverScene.h"
#include "SimpleAudioEngine.h"
#include "GameScene.h"
#include "MainScene.h"

USING_NS_CC;

Scene* GameOverScene::createScene()
{
    auto scene = Scene::create();
    
    auto layer = GameOverScene::create();

    scene->addChild(layer);

    return scene;
}

bool GameOverScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    return true;
}

void GameOverScene::goToMainMenuScene(cocos2d::Ref *pSender){
	auto scene = MainScene::createScene();
	Director::getInstance()->replaceScene(scene);
}

void GameOverScene::goToGameScene(cocos2d::Ref *pSender){
	auto scene = GameScene::createScene();
	Director::getInstance()->replaceScene(scene);
}
