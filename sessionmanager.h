#ifndef SESSIONMANAGER_H
#define SESSIONMANAGER_H

#include "connectionmanager.h"

class SessionManager {
private:
	static const char *USER_AGENT = "Mozilla/5.0 (compatible; TCaSMobile/1.x)";
	static const char *LOGIN_URL = "login/";

	ConnectionManager cm;
public:
	static const char *BASE_URL = "http://twocansandstring.com/";

	
};

#endif