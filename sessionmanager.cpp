#include "connectionmanager.h"
#include "sessionmanager.h"

SessionManager::SessionManager(CookieJar cookieJar){
	cm.setCookieJar(cookieJar);
}

// TODO: implement login
// TODO: implement TCaS Mobile API