#include "Task.h"

#pragma once

void Task::setCompleted(bool completed) { this->completed = completed; }

void Task::setAvailable(bool available) { this->available = available; }

void Task::setTitle(char *title) { this->title = title; }

void Task::setCompletedAttempts(unsigned int completedAttempts) { this->completedAttempts = completedAttempts; }

void Task::setAllowedAttempts(unsigned int allowedAttempts) { this->allowedAttempts = allowedAttempts; }

Task::Task(char *title, bool completed, bool available, unsigned int completedAttempts, unsigned int allowedAttempts) {
	this->setTitle(title);
	this->setCompleted(completed);
	this->setAvailable(available);
	this->setCompletedAttempts(completedAttempts);
	this->setAllowedAttempts(allowedAttempts);
}

bool Task::isCompleted() { return this->completed; }

bool Task::isAvailable() { return this->available; }

char *Task::getTitle() { return this->title; }

unsigned int Task::getCompletedAttempts() { return this->completedAttempts; }
unsigned int Task::getAllowedAttempts() { return this->allowedAttempts; }

Task::Task(char *title): Task(title, false, true, 0, 1) {}
