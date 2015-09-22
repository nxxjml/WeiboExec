//
//  AppDelegate.h
//  WeiboExec
//
//  Created by simao on 15/9/9.
//  Copyright (c) 2015年 simao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "SendMessageToWeiboViewController.h"
#import "WeiboSDK.h"

//@class SendMessageToWeiboViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate, WeiboSDKDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (strong, nonatomic) NSString *wbtoken;
@property (strong, nonatomic) NSString *wbCurrentUserID;
@property (strong, nonatomic) NSString *wbRefreshToken;

@property (strong, nonatomic) SendMessageToWeiboViewController *viewController;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

