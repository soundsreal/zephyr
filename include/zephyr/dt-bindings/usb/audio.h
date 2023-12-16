/*
 * Copyright (c) 2023 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_USB_AUDIO_H
#define ZEPHYR_INCLUDE_DT_BINDINGS_USB_AUDIO_H

/* USB Device Class Definition for Audio Devices Release 2.0 May 31, 2006
 * A.7 Audio Function Category Codes
 */
#define AUDIO_FUNCTION_SUBCLASS_UNDEFINED	0x00
#define AUDIO_FUNCTION_DESKTOP_SPEAKER		0x01
#define AUDIO_FUNCTION_HOME_THEATER		0x02
#define AUDIO_FUNCTION_MICROPHONE		0x03
#define AUDIO_FUNCTION_HEADSET			0x04
#define AUDIO_FUNCTION_TELEPHONE		0x05
#define AUDIO_FUNCTION_CONVERTER		0x06
#define AUDIO_FUNCTION_VOICE_SOUND_RECORDER	0x07
#define AUDIO_FUNCTION_IO_BOX			0x08
#define AUDIO_FUNCTION_MUSICAL_INSTRUMENT	0x09
#define AUDIO_FUNCTION_PRO_AUDIO		0x0A
#define AUDIO_FUNCTION_AUDIO_VIDEO		0x0B
#define AUDIO_FUNCTION_CONTROL_PANEL		0x0C
#define AUDIO_FUNCTION_OTHER			0xFF


/* USB Device Class Definition for Terminal Types
 * Both "Universal Serial Bus Device Class Definition for Terminal Types"
 * Release 2.0 May 31, 2006 and Release 3.0 September 22, 2016 contain exactly
 * the same terminal types and values.
 */

/* 2.1 USB Terminal Types */
#define USB_TERMINAL_UNDEFINED					0x0100
#define USB_TERMINAL_STREAMING					0x0101
#define USB_TERMINAL_VENDOR_SPECIFIC				0x01FF

/* 2.2 Input Terminal Types */
#define INPUT_TERMINAL_UNDEFINED				0x0200
#define INPUT_TERMINAL_MICROPHONE				0x0201
#define INPUT_TERMINAL_DESKTOP_MICROPHONE			0x0202
#define INPUT_TERMINAL_PERSONAL_MICROPHONE			0x0203
#define INPUT_TERMINAL_OMNI_DIRECTIONAL_MICROPHONE		0x0204
#define INPUT_TERMINAL_MICROPHONE_ARRAY				0x0205
#define INPUT_TERMINAL_PROCESSING_MICROPHONE_ARRAY		0x0206

/* 2.3 Output Terminal Types */
#define OUTPUT_TERMINAL_UNDEFINED				0x0300
#define OUTPUT_TERMINAL_SPEAKER					0x0301
#define OUTPUT_TERMINAL_HEADPHONES				0x0302
#define OUTPUT_TERMINAL_HEAD_MOUNTED_DISPLAY_AUDIO		0x0303
#define OUTPUT_TERMINAL_DESKTOP_SPEAKER				0x0304
#define OUTPUT_TERMINAL_ROOM_SPEAKER				0x0305
#define OUTPUT_TERMINAL_COMMUNICATION_SPEAKER			0x0306
#define OUTPUT_TERMINAL_LOW_FREQUENCY_EFFECTS_SPEAKER		0x0307

/* 2.4 Bi-directional Terminal Types */
#define BIDIRECTIONAL_TERMINAL_UNDEFINED			0x0400
#define BIDIRECTIONAL_TERMINAL_HANDSET				0x0401
#define BIDIRECTIONAL_TERMINAL_HEADSET				0x0402
#define BIDIRECTIONAL_TERMINAL_SPEAKERPHONE_NO_ECHO_REDUCTION	0x0403
#define BIDIRECTIONAL_TERMINAL_ECHO_SUPPRESSING_SPEAKERPHONE	0x0404
#define BIDIRECTIONAL_TERMINAL_ECHO_CANCELLING_SPEAKERPHONE	0x0405

/* 2.5 Telephony Terminal Types */
#define TELEPHONY_TERMINAL_UNDEFINED				0x0500
#define TELEPHONY_TERMINAL_PHONE_LINE				0x0501
#define TELEPHONY_TERMINAL_TELEPHONE				0x0502
#define TELEPHONY_TERMINAL_DOWN_LINE_PHONE			0x0503

/* 2.6 External Terminal Types */
#define EXTERNAL_TERMINAL_UNDEFINED				0x0600
#define EXTERNAL_TERMINAL_ANALOG_CONNECTOR			0x0601
#define EXTERNAL_TERMINAL_DIGITAL_AUDIO_INTERFACE		0x0602
#define EXTERNAL_TERMINAL_LINE_CONNECTOR			0x0603
#define EXTERNAL_TERMINAL_LEGACY_AUDIO_CONNECTOR		0x0604
#define EXTERNAL_TERMINAL_SPDIF_INTERFACE			0x0605
#define EXTERNAL_TERMINAL_1394_DA_STREAM			0x0606
#define EXTERNAL_TERMINAL_1394_DV_STREAM_SOUNDTRACK		0x0607
#define EXTERNAL_TERMINAL_ADAT_LIGHTPIPE			0x0608
#define EXTERNAL_TERMINAL_TDIF					0x0609
#define EXTERNAL_TERMINAL_MADI					0x060A

/* 2.7 Embedded Function Terminal Types */
#define EMBEDDED_TERMINAL_UNDEFINED				0x0700
#define EMBEDDED_TERMINAL_LEVEL_CALIBRATION_NOISE_SOURCE	0x0701
#define EMBEDDED_TERMINAL_EQUALIZATION_NOISE			0x0702
#define EMBEDDED_TERMINAL_CD_PLAYER				0x0703
#define EMBEDDED_TERMINAL_DAT					0x0704
#define EMBEDDED_TERMINAL_DCC					0x0705
#define EMBEDDED_TERMINAL_COMPRESSED_AUDIO_PLAYER		0x0706
#define EMBEDDED_TERMINAL_ANALOG_TAPE				0x0707
#define EMBEDDED_TERMINAL_PHONOGRAPH				0x0708
#define EMBEDDED_TERMINAL_VCR_AUDIO				0x0709
#define EMBEDDED_TERMINAL_VIDEO_DISC_AUDIO			0x070A
#define EMBEDDED_TERMINAL_DVD_AUDIO				0x070B
#define EMBEDDED_TERMINAL_TV_TUNER_AUDIO			0x070C
#define EMBEDDED_TERMINAL_SATELLITE_RECEIVER_AUDIO		0x070D
#define EMBEDDED_TERMINAL_CABLE_TUNER_AUDIO			0x070E
#define EMBEDDED_TERMINAL_DSS_AUDIO				0x070F
#define EMBEDDED_TERMINAL_RADIO_RECEIVER			0x0710
#define EMBEDDED_TERMINAL_RADIO_TRANSMITTER			0x0711
#define EMBEDDED_TERMINAL_MULTI_TRACK_RECORDER			0x0712
#define EMBEDDED_TERMINAL_SYNTHESIZER				0x0713
#define EMBEDDED_TERMINAL_PIANO					0x0714
#define EMBEDDED_TERMINAL_GUITAR				0x0715
#define EMBEDDED_TERMINAL_DRUMS_RHYTHM				0x0716
#define EMBEDDED_TERMINAL_OTHER_MUSICAL_INSTRUMENT		0x0717

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_USB_AUDIO_H */