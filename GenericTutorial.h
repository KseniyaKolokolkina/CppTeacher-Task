#include "Task.h"

#pragma once
class GenericTutorial: public Task {
protected: 
	char *tutorialText;

	virtual void setTutorialText(char *tutorialText);
public: 
	virtual char *viewTask();
	virtual void doTask(char **inputs, unsigned int inputCount);

	GenericTutorial(char *title, char *tutorialText);
};
