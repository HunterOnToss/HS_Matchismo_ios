//
//  Card.m
//  HS_Matchismo_ios
//
//  Created by Стас  Каблуков on 05.07.16.
//  Copyright © 2016 RaeHunter. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards {
    
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
    
}

@end
