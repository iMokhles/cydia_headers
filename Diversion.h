/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 3, 2015 at 6:37:31 AM Central European Summer Time
* Operating System: Version 8.3 (Build 12F70)
* Image Source: /private/var/db/stash/_.2t7K5z/Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Cydia/Cydia-Structs.h>
@interface Diversion : NSObject {

	RegEx* pattern_;
	MenesObjectHandle<NSString, 0> key_;
	MenesObjectHandle<NSString, 0> format_;

}
+(id)divertURL:(id)arg1 ;
-(id)divert:(id)arg1 ;
-(id)initWithFrom:(id)arg1 to:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)key;
@end

