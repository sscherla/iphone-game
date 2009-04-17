//
//  Actor.m
//  Game
//
//  Created by Tj Holowaychuk on 14/04/09.
//  Copyright 2009 Vision Media. All rights reserved.
//

#import "cocos2d.h"

@interface Actor : Layer {
	Sprite * torso;
	Sprite * shadow;
}
+(id) createActor;
@end