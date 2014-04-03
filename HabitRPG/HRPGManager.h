//
//  HRPGManager.h
//  HabitRPG
//
//  Created by Phillip Thelen on 09/03/14.
//  Copyright (c) 2014 Phillip Thelen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Task.h"
#import "User.h"

@interface HRPGManager : NSObject

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;

- (void) loadObjectManager;
-(void) fetchContent:(void (^)())successBlock onError:(void (^)())errorBlock;
-(void) fetchTasks:(void (^)())successBlock onError:(void (^)())errorBlock;
-(void) fetchUser:(void (^)())successBlock onError:(void (^)())errorBlock;
-(void) fetchGroup:(NSString*)groupID onSuccess:(void (^)())successBlock onError:(void (^)())errorBlock;
-(void) fetchGroups:(NSString*)groupType onSuccess:(void (^)())successBlock onError:(void (^)())errorBlock;

-(void) upDownTask:(Task*)task direction:(NSString*)withDirection onSuccess:(void (^)())successBlock onError:(void (^)())errorBlock;
-(void) createTask:(Task*)task onSuccess:(void (^)())successBlock onError:(void (^)())errorBlock;
-(void) updateTask:(Task*)task onSuccess:(void (^)())successBlock onError:(void (^)())errorBlock;
-(void) loginUser:(NSString*)username withPassword:(NSString*)password onSuccess:(void (^)())successBlock onError:(void (^)())errorBlock;
-(void) sleepInn:(void (^)())successBlock onError:(void (^)())errorBlock;
-(NSManagedObjectContext *) getManagedObjectContext;
- (void) displayNetworkError;
- (void) setCredentials;
- (User*) getUser;

-(UIColor*) getColorForValue:(NSNumber*) value;

@end