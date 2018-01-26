#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER tensorflowTracer

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./tensorflowTracer.h"

#if !defined(_TENSORFLOWTRACER_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TENSORFLOWTRACER_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    tensorflowTracer,
    process_entry,
    TP_ARGS(
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_string(name, my_string_arg)
    )
)
TRACEPOINT_EVENT(
    tensorflowTracer,
    process_exit,
    TP_ARGS(
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_string(name, my_string_arg)
    )
)
TRACEPOINT_EVENT(
    tensorflowTracer,
    inline_ready_entry,
    TP_ARGS(
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_string(name, my_string_arg)
    )
)
TRACEPOINT_EVENT(
    tensorflowTracer,
    inline_ready_exit,
    TP_ARGS(
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_string(name, my_string_arg)
    )
)

TRACEPOINT_EVENT(
    tensorflowTracer,
    push_succ_entry,
    TP_ARGS(
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_string(name, my_string_arg)
    )
)
TRACEPOINT_EVENT(
    tensorflowTracer,
    push_succ_exit,
    TP_ARGS(
        const char*, my_string_arg,
        int, my_integer_arg
    ),
    TP_FIELDS(
        ctf_string(name, my_string_arg)
        ctf_integer(int, is_ready, my_integer_arg)
    )
)




#endif

#include <lttng/tracepoint-event.h>
