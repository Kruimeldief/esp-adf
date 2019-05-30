/*
 * ESPRESSIF MIT License
 *
 * Copyright (c) 2019 <ESPRESSIF SYSTEMS (SHANGHAI) CO., LTD>
 *
 * Permission is hereby granted for use on all ESPRESSIF SYSTEMS products, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef __ESP_DEAMON_COMMON_EVT_H__
#define __ESP_DEAMON_COMMON_EVT_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    DEAMON_EXE_TYPE_UNKNOWN                                = - 1,
    DEAMON_EXE_TYPE_CONNECTIVITY_BASE                      = 0x0,
    DEAMON_EXE_TYPE_WIFI_DISCONNECT                        = 0x1,
    DEAMON_EXE_TYPE_WIFI_CONNECT                           = 0x2,
    DEAMON_EXE_TYPE_WIFI_SETTING_START                     = 0x3,
    DEAMON_EXE_TYPE_WIFI_SETTING_STOP                      = 0x4,
    DEAMON_EXE_TYPE_CONNECTIVITY_MAX                       = 0xFFF,

    DEAMON_EXE_TYPE_AUDIO_BASE                             = 0x1000,
    DEAMON_EXE_TYPE_AUDIO_PLAY                             = 0x1001,
    DEAMON_EXE_TYPE_AUDIO_PAUSE                            = 0x1002,
    DEAMON_EXE_TYPE_AUDIO_RESUME                           = 0x1003,
    DEAMON_EXE_TYPE_AUDIO_STOP                             = 0x1004,
    DEAMON_EXE_TYPE_AUDIO_GET_PROGRESS_BYTE                = 0x1005,
    DEAMON_EXE_TYPE_AUDIO_GET_PROGRESS_TIME                = 0x1006,
    DEAMON_EXE_TYPE_AUDIO_VOLUME_SET                       = 0x1007,
    DEAMON_EXE_TYPE_AUDIO_VOLUME_GET                       = 0x1008,
    DEAMON_EXE_TYPE_AUDIO_VOLUME_UP                        = 0x1009,
    DEAMON_EXE_TYPE_AUDIO_VOLUME_DOWN                      = 0x100A,
    DEAMON_EXE_TYPE_AUDIO_MUTE_ON                          = 0x100B,
    DEAMON_EXE_TYPE_AUDIO_MUTE_OFF                         = 0x100C,
    DEAMON_EXE_TYPE_AUDIO_MAX                              = 0x1FFF,

    DEAMON_EXE_TYPE_RECORDER_BASE                          = 0x2000,
    DEAMON_EXE_TYPE_REC_WAV_TURN_ON                        = 0x2001,
    DEAMON_EXE_TYPE_REC_WAV_TURN_OFF                       = 0x2002,
    DEAMON_EXE_TYPE_REC_AMR_TURN_ON                        = 0x2003,
    DEAMON_EXE_TYPE_REC_AMR_TURN_OFF                       = 0x2004,
    DEAMON_EXE_TYPE_RECORDER_MAX                           = 0x2FFF,

    DEAMON_EXE_TYPE_DISPLAY_BASE                           = 0x3000,
    DEAMON_EXE_TYPE_DISPLAY_TURN_ON                        = 0x3001,
    DEAMON_EXE_TYPE_DISPLAY_TURN_OFF                       = 0x3002,
    DEAMON_EXE_TYPE_DISPLAY_WIFI_SETTING                   = 0x3003,
    DEAMON_EXE_TYPE_DISPLAY_WIFI_DISCONNECTED              = 0x3004,
    DEAMON_EXE_TYPE_DISPLAY_WIFI_CONNECTED                 = 0x3005,
    DEAMON_EXE_TYPE_DISPLAY_SETTING_TIMEOUT                = 0x3006,
    DEAMON_EXE_TYPE_DISPLAY_BATTERY_CHARGING               = 0x3007,
    DEAMON_EXE_TYPE_DISPLAY_BATTERY_FULL                   = 0x3008,
    DEAMON_EXE_TYPE_DISPLAY_BATTERY_DISCHARGING            = 0x3009,
    DEAMON_EXE_TYPE_DISPLAY_MAX                            = 0x3FFF,

    DEAMON_EXE_TYPE_DUER_BASE                              = 0x4000,
    DEAMON_EXE_TYPE_DUER_AUDIO                             = 0x4001,
    DEAMON_EXE_TYPE_DUER_SPEAK                             = 0x4002,
    DEAMON_EXE_TYPE_DUER_VOLUME_ADJ                        = 0x4003,
    DEAMON_EXE_TYPE_DUER_PAUSE                             = 0x4004,
    DEAMON_EXE_TYPE_DUER_RESUME                            = 0x4005,
    DEAMON_EXE_TYPE_DUER_STOP                              = 0x4006,
    DEAMON_EXE_TYPE_DUER_DISCONNECT                        = 0x4007,
    DEAMON_EXE_TYPE_DUER_CONNECT                           = 0x4008,
    DEAMON_EXE_TYPE_DUER_MAX                               = 0x8FF,

    DEAMON_EXE_TYPE_CUSTOMER_BASE                          = 0x80000,
} deamon_exe_type_t;


#ifdef __cplusplus
}
#endif

#endif // End of __ESP_DEAMON_COMMON_EVT_H__
