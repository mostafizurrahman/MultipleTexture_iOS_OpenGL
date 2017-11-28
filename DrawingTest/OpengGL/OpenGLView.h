//
//  OpenGLView.h
//  DrawingTest
//
//  Created by Mostafizur Rahman on 10/25/17.
//  Copyright © 2017 Mostafizur Rahman. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface OpenGLView : UIView{
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
    
    GLuint _texCoordSlot;
    GLuint _textureUniform;
    GLuint _textureFloorUniform;
    GLuint _textureTopUniform;
    GLuint _positionSlot;
    GLuint _colorSlot;
    
    GLuint _floorTexture;
    GLuint _bwTexture;
    GLuint _brushTexture;
    
    
    GLuint vertexBuffer;
    GLuint indexBuffer;
    GLuint _vertexBuffer2;
    GLuint _indexBuffer2;

}

@end
