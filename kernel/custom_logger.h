#ifndef CUSTOM_LOGGER_H
#define CUSTOM_LOGGER_H

typedef enum
{
    INFO = 0,
    WARN = 1,
    ERROR = 2
} log_level_t;

void log_message(log_level_t level, const char *message);

#endif