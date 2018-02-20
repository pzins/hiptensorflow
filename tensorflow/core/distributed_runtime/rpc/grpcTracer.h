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

TRACEPOINT_EVENT(
    grpcTracer,
    send_RecvTensor_request,
    TP_ARGS(
        const char*, name_arg,
        const char*, tensor_arg,
        const char*, src_device_arg,
        const char*, dst_device_arg,
        const char*, request_arg,
        const char*, response_arg
    ),
    TP_FIELDS(
        ctf_string(name, name_arg)
        ctf_string(tensor, tensor_arg)
        ctf_string(src_device, src_device_arg)
        ctf_string(dst_device, dst_device_arg)
        ctf_string(request, request_arg)
        ctf_string(response, response_arg)
    )
)
TRACEPOINT_EVENT(
    grpcTracer,
    receive_RecvTensor_request,
    TP_ARGS(
        const char*, name_arg,
        const char*, rendezvous_key_arg,
        uint64_t, step_id_arg,
        uint32_t, bus_id_arg
    ),
    TP_FIELDS(
        ctf_string(name, name_arg)
        ctf_string(rendezvous_key, rendezvous_key_arg)
        ctf_integer(uint64_t, step_id, step_id_arg)
        ctf_integer(uint32_t, bus_id, bus_id_arg)
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
