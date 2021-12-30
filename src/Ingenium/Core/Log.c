#include "Log.h"

#include <Ingenium/Core/Common.h>
#include <stdio.h>
#include <time.h>

#define RESET		"\033[0m"
#define BLACK		"\033[30m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m
#define BLUE		"\033[34m"
#define MAGENTA		"\033[35m"
#define CYAN		"\033[36m"
#define WHITE		"\033[37m"
#define BOLDBLACK   "\033[1m\033[30m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDYELLOW  "\033[1m\033[33m"
#define BOLDBLUE    "\033[1m\033[34m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"

void I_LogInfo(const char* message) {
	time_t now;
	time(&now);
	printf(RESET);
	printf(GREEN);
	printf("[%s][INGENIUM][INFO] %s\n", ctime(&now), message);
	printf(RESET);
}

void I_LogWarn(const char* message) {
	time_t now;
	time(&now);
	printf(RESET);
	printf(YELLOW);
	printf("[%s][INGENIUM][WARN] %s\n", ctime(&now), message);
	printf(RESET);
}

void I_LogError(const char* message) {
	time_t now;
	time(&now);
	printf(RESET);
	printf(RED);
	printf("[%s][INGENIUM][ERROR] %s\n", ctime(&now), message);
	printf(RESET);
}
