//
//  NSError+CustomError.m
//  SpeexEncodingDemo
//
//  Created by Mikhail Dudarev (mikejd@mikejd.ru) on 09.05.13.
//  Copyright (c) 2013 Mihteh Lab. All rights reserved.
//

#import "NSError+CustomError.h"

@implementation NSError (CustomError)

+(NSError *)errorWithCode:(ErrorCode)errorCode {
    return [NSError errorWithDomain:@"com.mikejd.SpeexForIOS" code:errorCode userInfo:nil];
}

@end
