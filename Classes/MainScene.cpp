#include "MainScene.h"
#include "ui/UIButton.h"

USING_NS_CC;

Scene* MainScene::createScene()
{
    return MainScene::create();
}

bool MainScene::init()
{
    if ( !Scene::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    Vec2 center = Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y);

    // configuring and adding stop-button
    auto pStopBtn = ui::Button::create("button.png");
    pStopBtn->setTitleText("stop");
    pStopBtn->setTitleFontSize(32);
    Vec2 stopBtnPos = Vec2(center.x, origin.y + pStopBtn->getContentSize().height);
    pStopBtn->setPosition(stopBtnPos);
    this->addChild(pStopBtn);

   


    return true;
}