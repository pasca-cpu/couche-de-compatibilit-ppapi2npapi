/*
 * Copyright © 2013-2015  Rinat Ibragimov
 *
 * This file is part of FreshPlayerPlugin.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef FPP_TRACE_H
#define FPP_TRACE_H

#include <ppapi/c/pp_var.h>
#include <ppapi/c/pp_rect.h>
#include <ppapi/c/pp_touch_point.h>
#include <ppapi/c/ppb_net_address.h>
#include <npapi/npapi.h>
#include "trace_core.h"


char   *trace_var_as_string(struct PP_Var var);
char   *trace_size_as_string(const struct PP_Size *size);
char   *trace_rect_as_string(const struct PP_Rect *rect);
char   *trace_point_as_string(const struct PP_Point *point);
char   *trace_float_point_as_string(const struct PP_FloatPoint *point);
char   *trace_touch_point_as_string(const struct PP_TouchPoint *point);
char   *trace_event_classes_as_string(uint32_t event_classes);
char   *trace_np_window_as_string(const NPWindow *window);
char   *trace_graphics3d_attributes_as_string(const int32_t attrib_list[]);
char   *trace_netaddress_ipv4_as_string(const struct PP_NetAddress_IPv4 *addr);
char   *trace_netaddress_ipv6_as_string(const struct PP_NetAddress_IPv6 *addr);


#endif // FPP_TRACE_H
