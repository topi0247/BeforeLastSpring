/*
	@file	SceneTitle.h
	@brief	�^�C�g���V�[��
	@date	2017/02/18
	@author	�m�ȍ��c
*/
#pragma once
#include "Scene.h"
#include "SceneRoot.h"
#include "SceneMain.h"

class SceneTitle:public Scene
{
private:
	void Update();
public:
	SceneTitle();
	~SceneTitle();

	void Init();
	SceneBase* Update(SceneRoot* root);
	void Render();
	void Destroy();
};