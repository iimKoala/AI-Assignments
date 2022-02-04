#pragma once
#ifndef __PLAY_SCENE__
#define __PLAY_SCENE__

#include "Scene.h"

#include "Target.h"
#include "SpaceShip.h"
#include "Label.h"

class PlayScene : public Scene
{
public:
	PlayScene();
	~PlayScene();

	// Scene LifeCycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;
private:
	// IMGUI Function
	void GUI_Function();
	std::string m_guiTitle; 
	
	glm::vec2 m_mousePosition;

	// Game objects
	Target* m_pTarget;
	SpaceShip* m_pSpaceShip;

	Label* m_pInstructionsLabel{};

	// Debug bool
	bool m_bDebugView;

};

#endif /* defined (__PLAY_SCENE__) */