#include "MainScene.h"
#include "SimpleAudioEngine.h"
#include "GameScene.h"


USING_NS_CC;

Scene* MainScene::createScene()
{
    auto scene = Scene::create();
    
    auto layer = MainScene::create();

    scene->addChild(layer);

    return scene;
}

bool MainScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    return true;
}

void MainScene::goToGameScene(cocos2d::Ref *pSender){
	auto scene = GameScene::createScene();
	Director::getInstance()-> replaceScene(scene);
}
