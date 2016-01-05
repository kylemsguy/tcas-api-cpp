#ifndef TCAS_CONSTANTS_H
#define TCAS_CONSTANTS_H

namespace TCaS_Backend {
    struct RequestUrls {
        static const char *USER_AGENT = "Mozilla/5.0 (compatible; TCaSMobile/1.x)"; // TODO perhaps include sysinfo?
        static const char *BASE_URL = "http://twocansandstring.com/";
        static const char *LOGIN = BASE_URL + "login/";
        static const char *ASK_URL = "apiw/qa/ask/";
        static const char *QUESTION_URL = "apiw/qa/notifications/";
        static const char *DEL_QUESTION_URL = "apiw/qa/delete/question/";
        static const char *DEL_ANSWER_URL = "apiw/qa/delete/answer/";
        static const char *MARK_READ_URL = "apiw/qa/markread/";
        static const char *REACTIVATE_QUESTION_URL = "apiw/qa/reactivate/";
        static const char *REPLY_TO_ANSWER_URL = "createmessage/";
    };
}

#endif