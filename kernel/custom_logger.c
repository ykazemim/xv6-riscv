#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "custom_logger.h"

void log_message(log_level_t log_level, const char *message)
{
    const char *color;
    const char *level;

    switch (log_level)
    {
    case INFO:
        color = "\033[34m"; // Blue
        level = "INFO";
        break;
    case WARN:
        color = "\033[33m"; // Yellow
        level = "WARNING";
        break;
    case ERROR:
        color = "\033[31m"; // Red
        level = "ERROR";
        break;
    default:
        color = "\033[90m"; // Gray
        level = "UNKNOWN";
        break;
    }

    printf("%s[%s] %s\033[0m\n", color, level, message);
}
