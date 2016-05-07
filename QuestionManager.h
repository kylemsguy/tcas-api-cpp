#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H

#include <vector>
#include "TCaSObject.h"
#include "Question.h"
#include "Answer.h"

#include "Question.h"
#include "Answer.h"

namespace TCaS_Backend {
	class QuestionManager {
	private:
		std::vector<Question> questionAns;
	public:
		std::vector<Question>& getQuestions(std::string qdata);
		void askQuestion(std::string question);
		void deleteQuestion(Question question);
		void reactivateQuestion(Question question);

		void deleteAnswer(Answer answer);
		void markAnswerRead(Answer answer);
		void replyToAnswer(Answer answer);
	};
}

#endif
