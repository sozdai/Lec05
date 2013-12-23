//
//  MyCell.h
//  Lec05
//
//  Created by Alex on 05.12.13.
//  Copyright (c) 2013 alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *labelName;
@property (weak, nonatomic) IBOutlet UIButton *changeSectionButton;
- (IBAction)buttonClick:(id)sender;

@end
