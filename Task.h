#pragma once

class Task {
protected: 
	//Status: 
	bool completed; 
	bool available; 

	//General info: 
	char *title;

	//Attempts: 
	unsigned int completedAttempts;
	unsigned int allowedAttempts; 

protected: 
	//Setters: 
	virtual void setCompleted(bool completed);
	virtual void setAvailable(bool available);
	virtual void setTitle(char *title);
	virtual void setCompletedAttempts(unsigned int completedAttempts);
	virtual void setAllowedAttempts(unsigned int allowedAttempts);

	Task(char *title, bool completed, bool available, unsigned int completedAttempts, unsigned int allowedAttempts);

public: 
	//Completing the task: 
	virtual char *viewTask() = 0;
	virtual void doTask(char **inputs, unsigned int inputCount) = 0;

	//Getters: 
	virtual bool isCompleted();
	virtual bool isAvailable();
	virtual char *getTitle();
	virtual unsigned int getCompletedAttempts();
	virtual unsigned int getAllowedAttempts();

	Task(char *title);
};
