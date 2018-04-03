//
//  LastNameViewControllerDelegate.h
//  DelegateDemo
//
//  Created by Akshay on 4/3/18.
//  Copyright © 2018 TheAppGuruz. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LastNameViewControllerDelegate <NSObject>

-(void)setLastName:(NSString *)lastName;

@end
