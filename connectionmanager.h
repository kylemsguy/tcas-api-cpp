#ifndef CONNECTIONMANAGER_H
#define CONNECTIONMANAGER_H

#include <vector>
#include <unordered_map>

class CookieJar{
private:
	std::unordered_map<std::string, std::vector<std::string>> cookies;

public:
	std::vector<std::string> getCookie(std::string url) { return cookies[url]; }
	std::unordered_map<std::string, std::vector<std::string>> getCookies() { return cookies; }
	void setCookies(std::unordered_map<std::string, std::vector<std::string>> newCookies) { cookies = newCookies; }
};

class ConnectionManager {
protected:
	CookieJar cookieJar;
public:
	// sends regular post request
	virtual std::string getPage(std::string url, std::string getParams) = 0;
	virtual std::string sendPost(std::string url, std::string postParams) = 0;
	virtual CookieJar getCookieJar() { return cookieJar; }
	virtual void setCookieJar(CookieJar jar) { cookieJar = jar; }
};

#endif