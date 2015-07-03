/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 3, 2015 at 6:37:31 AM Central European Summer Time
* Operating System: Version 8.3 (Build 12F70)
* Image Source: /private/var/db/stash/_.2t7K5z/Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class Database, NSURLConnection;

@interface SourcesController : CyteViewController <UITableViewDataSource, UITableViewDelegate> {

	Database* database_;
	unsigned era_;
	MenesObjectHandle<UITableView, 2> list_;
	MenesObjectHandle<NSMutableArray, 0> sources_;
	int offset_;
	MenesObjectHandle<NSString, 0> href_;
	MenesObjectHandle<UIProgressHUD, 0> hud_;
	MenesObjectHandle<NSError, 0> error_;
	NSURLConnection* trivial_bz2_;
	NSURLConnection* trivial_gz_;
	char cydia_;

}
-(void)releaseSubviews;
-(id)navigationURL;
-(void)editButtonClicked;
-(void)refreshButtonClicked;
-(void)_releaseConnection:(id)arg1 ;
-(id)sourceAtIndexPath:(id)arg1 ;
-(void)updateButtonsForEditingStatusAnimated:(char)arg1 ;
-(id)getWarning;
-(void)_endConnection:(id)arg1 ;
-(id)_requestHRef:(id)arg1 method:(id)arg2 ;
-(void)addButtonClicked;
-(void)showAddSourcePrompt;
-(id)initWithDatabase:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)complete;
-(void)cancelButtonClicked;
@end

