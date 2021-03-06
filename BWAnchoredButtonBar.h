//
//  BWAnchoredButtonBar.h
//  BWToolkit
//
//  Created by Brandon Walkin (www.brandonwalkin.com)
//  All code is provided under the New BSD license.
//

#import <Cocoa/Cocoa.h>

@interface BWAnchoredButtonBar : NSView <NSSplitViewDelegate>
{
	BOOL isResizable, isAtBottom, handleIsRightAligned;
	int selectedIndex;
}

@property (nonatomic) BOOL isResizable, isAtBottom, handleIsRightAligned;
@property (nonatomic) int selectedIndex;

// The mode of this bar with a resize handle makes use of some NSSplitView delegate methods. Use the splitViewDelegate for any custom delegate implementations
// you'd like to provide.
@property (assign) id splitViewDelegate;

+ (BOOL)wasBorderedBar;

@end
