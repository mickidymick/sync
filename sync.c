#include <yed/plugin.h>

#define DO_LOG
#define DBG__XSTR(x) #x
#define DBG_XSTR(x) DBG__XSTR(x)
#ifdef DO_LOG
#define DBG(...)                                           \
do {                                                       \
    LOG_FN_ENTER();                                        \
    yed_log(__FILE__ ":" XSTR(__LINE__) ": " __VA_ARGS__); \
    LOG_EXIT();                                            \
} while (0)
#else
#define DBG(...) ;
#endif

yed_plugin *Self;

int yed_plugin_boot(yed_plugin *self) {

    YED_PLUG_VERSION_CHECK();

    Self = self;

    return 0;
}
