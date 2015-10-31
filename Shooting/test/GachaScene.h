#pragma once
#include "GameScene.h"
class GachaScene :
	public SceneBase
{
public:
	GachaScene();
	~GachaScene();
	SceneBase* Update(GameScene*);
	void Draw(GameScene*);

private:
	//座標
	int x;
	int y;
	int Random_value;
	int Color;
	int money;
	int chara;
	//キー操作
	KeyManager* m_KeyManager;
};

