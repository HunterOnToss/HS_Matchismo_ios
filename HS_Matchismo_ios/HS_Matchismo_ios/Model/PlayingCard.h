//
//  PlayingCard.h
//  HS_Matchismo_ios
//
//  Created by Стас  Каблуков on 05.07.16.
//  Copyright © 2016 RaeHunter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
