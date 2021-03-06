//
//  ImageFilter.h
//
//  Created by Drew Dahlman 2/25/2012. 
//  Copyright 2012 Drew Dahlman. All rights reserved.
//  version 1.0

//  Current Filters:
//  none
//  stark
//  sunnySide
//  worn
//  vintage

/*
 Copyright (c) 2012 Drew Dahlman
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


#import <Foundation/Foundation.h>

/* COMMENT FOR CORDOVA USE */
#ifdef PHONEGAP_FRAMEWORK
#import <PhoneGap/PGPlugin.h>
#else
#import "PGPlugin.h"
#endif

/* 
UNCOMMENT FOR CORDOVA

#ifdef CORDOVA_FRAMEWORK
#import <Cordova/CDVPlugin.h>
#else
#import "CDVPlugin.h"
#endif

*/

@interface ImageFilter : PGPlugin {
    NSString* callbackID;
}
@property (nonatomic, retain) NSString* callbackID;


// GARBAGE
- (void)clean:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

// FILTERS
- (void)none:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void)stark:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void)sunnySide:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void)worn:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void)vintage:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
@end
