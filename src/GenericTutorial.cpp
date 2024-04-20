#include "GenericTutorial.h"
#include "Task.h"

#pragma once

char *GenericTutorial::viewTask() { return this->tutorialText; }

void GenericTutorial::doTask(char **input, unsigned int inputCount) {
	this->setCompletedAttempts(this->getCompletedAttempts() + 1);
	this->setCompleted(true);
}

void GenericTutorial::setTutorialText(char *tutorialText) { this->tutorialText = tutorialText; }

GenericTutorial::GenericTutorial(char *title, char *tutorialText): Task(title) {
	this->setTutorialText(tutorialText);
	/*
	this->tutorialText = (char *) R"(This is the first line. 
		This is the second line. 
		This is the third line. )";
	*/
}
