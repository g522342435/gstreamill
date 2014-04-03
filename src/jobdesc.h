/*
 * json type of job description parser
 *
 * Copyright (C) Zhang Ping <dqzhangp@163.com>
 *
 */

#ifndef __JOBDESC_H__
#define __JOBDESC_H__

#include <gst/gst.h>

gboolean jobdesc_is_valid (gchar *job);
gchar * jobdesc_get_name (gchar *job);
gint jobdesc_encoders_count (gchar *job);
gint jobdesc_streams_count (gchar *job, gchar *pipeline);
gboolean jobdesc_is_live (gchar *job);
gchar * jobdesc_get_debug (gchar *job);
gchar * jobdesc_get_log_path (gchar *job);
gchar ** jobdesc_bins (gchar *job, gchar *pipeline);
gchar * jobdesc_udpstreaming (gchar *job, gchar *pipeline);
gchar ** jobdesc_element_properties (gchar *job, gchar *element);
gchar * jobdesc_element_property_value (gchar *job, gchar *property);
gchar * jobdesc_element_caps (gchar *job, gchar *element);
gboolean jobdesc_m3u8streaming (gchar *job);
guint jobdesc_m3u8streaming_version (gchar *job);
guint jobdesc_m3u8streaming_window_size (gchar *job);
GstClockTime jobdesc_m3u8streaming_segment_duration (gchar *job);
gchar * jobdesc_m3u8streaming_push_server_uri (gchar *job);

#endif /* __JOBDESC_H__ */
