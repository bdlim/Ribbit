//
//  InboxViewController.h
//  Ribbit
//
//  Created by Brandon Lim on 8/31/14.
//  Copyright (c) 2014 Brandon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

@interface InboxViewController : UITableViewController

@property (nonatomic, strong) NSArray *messages;
@property (nonatomic, strong) PFObject *selectedMessage;
@property (nonatomic, strong) MPMoviePlayerController *moviePlayer;
@property (nonatomic, strong) UIRefreshControl *refreshControl;

- (IBAction)logout:(id)sender;

@end
