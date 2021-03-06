//
//  Actor.m
//  Game
//
//  Created by Tj Holowaychuk on 14/04/09.
//  Copyright 2009 Vision Media. All rights reserved.
//

#import "core.h"

@interface Actor : Layer {
	Sprite * torso;
	Sprite * shadow;
}
@property(readwrite, assign) Sprite * torso;
@property(readwrite, assign) Sprite * shadow;
+(id) actor;
@end
