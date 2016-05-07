#include "QuestionManager.h"
#include <boost/regex.hpp>
using namespace TCaS_Backend;

std::vector<Question>& getQuestions(std::string qdata){
	
}

void QuestionManager::askQuestion(std::string question);
void QuestionManager::deleteQuestion(Question question);
void QuestionManager::reactivateQuestion(Question question);

void QuestionManager::deleteAnswer(Answer answer);
void QuestionManager::markAnswerRead(Answer answer);
void QuestionManager::replyToAnswer(Answer answer);