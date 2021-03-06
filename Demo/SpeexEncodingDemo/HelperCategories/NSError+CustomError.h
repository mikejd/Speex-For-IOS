//
//  NSError+CustomError.h
//  SpeexEncodingDemo
//
//  Created by Mikhail Dudarev (mikejd@mikejd.ru) on 09.05.13.
//  Copyright (c) 2013 Mihteh Lab. All rights reserved.
//
#import <Foundation/Foundation.h>

typedef enum {
    ERROR_CODE_WAVE_PARSER_INCORRECT_FILESIZE,
    ERROR_CODE_WAVE_PARSER_CONTAINER_ID_NOT_FOUND,
    ERROR_CODE_WAVE_PARSER_FORMAT_ID_NOT_FOUND,
    ERROR_CODE_WAVE_PARSER_DATA_CHUNK_ID_NOT_FOUND,
    ERROR_CODE_WAVE_PARSER_AUDIO_PROPERTIES_NOT_EXTRACTED,
    ERROR_CODE_SPEEX_ENCODER_COULD_ALLOCATE_ENCODER_STATE,
    ERROR_CODE_SPEEX_ENCODER_COULD_NOT_SETUP_RESAMPLER,
    ERROR_CODE_SPEEX_ENCODER_COULD_NOT_OBTAIN_FRAME_SIZE,
    ERROR_CODE_SPEEX_ENCODER_COULD_NOT_OBTAIN_BITRATE,
    ERROR_CODE_SPEEX_ENCODER_COULD_NOT_SET_QUALITY,
    ERROR_CODE_SPEEX_ENCODER_NOT_ENOUGH_DATA_TO_CREATE_SPEEX_HEADER,
} ErrorCode;

@interface NSError (CustomError)

+(NSError *)errorWithCode:(ErrorCode)errorCode;

@end
