//
//  KCAlbumTableViewController.h
//  Thousand Words
//
//  Created by Andres Kwan on 5/23/14.
//  Copyright (c) 2014 Kwan Castle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KCAlbumTableViewController : UITableViewController <UIAlertViewDelegate>
@property (nonatomic, strong) NSMutableArray * albums;
- (IBAction)addAlbumButtonBarButtonPressed:(id)sender;
@end
