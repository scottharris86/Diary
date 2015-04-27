//
//  DiaryEntry.h
//  Diary
//
//  Created by scott harris on 12/21/14.
//  Copyright (c) 2014 scott harris. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ENUM(int16_t, DiaryEntryMood) {
    DiaryEntryMoodGood = 0,
    DiaryEntryMoodAverage = 1,
    DiaryEntryMoodBad = 2
};


@interface DiaryEntry : NSManagedObject

@property (nonatomic) NSTimeInterval date;
@property (nonatomic, retain) NSString * body;
@property (nonatomic, retain) NSData * imageData;
@property (nonatomic, retain) NSString * location;
@property (nonatomic) int16_t mood;

@property (nonatomic, readonly) NSString *sectionName;

@end
