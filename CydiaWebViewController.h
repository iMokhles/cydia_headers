/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 3, 2015 at 6:37:31 AM Central European Summer Time
* Operating System: Version 8.3 (Build 12F70)
* Image Source: /private/var/db/stash/_.2t7K5z/Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteWebViewController.h>

@interface CydiaWebViewController : CyteWebViewController {

	MenesObjectHandle<CydiaObject, 0> cydia_;

}
+(void)addDiversion:(id)arg1 ;
+(void)didClearWindowObject:(id)arg1 forFrame:(id)arg2 withCydia:(id)arg3 ;
+(id)requestWithHeaders:(id)arg1 ;
+(void)_initialize;
-(id)navigationURL;
-(id)URLWithURL:(id)arg1 ;
-(void)_setupMail:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(id)applicationNameForUserAgent;
-(id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
@end

