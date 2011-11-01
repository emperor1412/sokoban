//
//  ESRenderer.h
//  SLQTSOR
//
//  Created by Michael Daley on 25/08/2009.
//  Copyright Michael Daley 2009. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>

@protocol ESRenderer <NSObject>

- (void) render;
- (BOOL) resizeFromLayer:(CAEAGLLayer *)layer;

@end
