#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H

#include <vector>

#include "Question.h"
#include "Answer.h"

namespace TCaS_Backend {
	class QuestionManager {
		std::vector<Question> questionAns;
	public:
		void askQuestion(std::string question);
		std::vector<Question> getQuestions();
		void deleteQuestion(Question question);
		void deleteAnswer(Answer answer);
		
	};
}

#endif