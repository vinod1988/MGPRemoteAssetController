//
//  TestHelpers.h
//  MGPRemoteAssetController
//
//  Created by Saul Mora on 5/12/11.
//  Copyright 2011 Magical Panda Software LLC. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface TestHelpers : NSObject {
   
}

+ (id) dataForFixtureNamed:(NSString *)fixtureName;
+ (NSURL *) fileURLForFixtureNamed:(NSString *)fixtureName;
+ (NSString *) scratchPath;

@end