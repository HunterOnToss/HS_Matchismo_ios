//
//  Deck.h
//  HS_Matchismo_ios
//
//  Created by Стас  Каблуков on 05.07.16.
//  Copyright © 2016 RaeHunter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;

@end
