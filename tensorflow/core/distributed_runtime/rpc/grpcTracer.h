#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER grpcTracer

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./grpcTracer.h"

#if !defined(_grpcTracer_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _grpcTracer_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    grpcTracer,
    send_request,
    TP_ARGS(
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_string(name, my_string_arg)
    )
)
TRACEPOINT_EVENT(
    grpcTracer,
    receive_request,
    TP_ARGS(
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_string(name, my_string_arg)
    )
)





#endif

#include <lttng/tracepoint-event.h>
