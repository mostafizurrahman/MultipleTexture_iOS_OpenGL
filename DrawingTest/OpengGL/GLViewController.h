//
//  GLViewController.h
//  DrawingTest
//
//  Created by Mostafizur Rahman on 10/25/17.
//  Copyright © 2017 Mostafizur Rahman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

// Inside @interface

@interface GLViewController : UIViewController{
    OpenGLView* _glView;
    
    // After @interface
    
}
@property (nonatomic, retain) IBOutlet OpenGLView *glView;
@end
