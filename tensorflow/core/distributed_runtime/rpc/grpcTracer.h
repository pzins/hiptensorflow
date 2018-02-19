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
        const char*, name_arg
    ),
    TP_FIELDS(
        ctf_string(name, name_arg)
    )
)
TRACEPOINT_EVENT(
    grpcTracer,
    receive_request,
    TP_ARGS(
        const char*, name_arg
    ),
    TP_FIELDS(
        ctf_string(name, name_arg)
    )
)


/*
GetStatusAsync
RegisterGraphAsync
DeregisterGraphAsync
RunGraphAsync
CleanupGraphAsync
CleanupAllAsync
RecvTensorAsync
LoggingAsync
TracingAsync


GetStatusHandler
CleanupAllHandler
RegisterGraphHandler
DeregisterGraphHandler
RunGraphHandler
RecvTensorHandlerRaw
CleanupGraphHandler
LoggingHandler
TracingHandler
*/




#endif

#include <lttng/tracepoint-event.h>
