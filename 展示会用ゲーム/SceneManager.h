#pragma once
#include <deque>

class SceneBase;
class InputState;

class SceneManager
{
	void changeScene(SceneBase* scene);

	void pushScene(SceneBase* scene);

	void popScene();

	void update(const InputState& input);

	void draw();
};

