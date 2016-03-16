//
//  ALNewContactsViewController.h
//  ChatApp
//
//  Created by Gaurav Nigam on 16/08/15.
//  Copyright (c) 2015 AppLogic. All rights reserved.
//
#define GROUP_CREATION 1
#define GROUP_ADDITION 2
#define REGULAR_CONTACTS 0

#import <UIKit/UIKit.h>
#import "ALChannelService.h"
#import "ALMessageDBService.h"


@protocol ALContactDelegate <NSObject>
-(void)addNewMembertoGroup:(ALContact *)alcontact;
@end


@interface ALNewContactsViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UISearchBarDelegate>

@property (weak, nonatomic) IBOutlet UITableView *contactsTableView;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *mTableViewTopConstraint;

@property (nonatomic,strong) NSArray* colors;

-(UIView *)setCustomBackButton:(NSString *)text;

@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentControl;
- (IBAction)segmentControlAction:(id)sender;
@property (nonatomic,strong) NSNumber* forGroup;
@property (nonatomic,strong) UIBarButtonItem *done;
@property (nonatomic,strong) NSString* groupName;
@property (nonatomic,strong) NSNumber * forGroupAddition;
@property(nonatomic,assign)id delegate;
@end