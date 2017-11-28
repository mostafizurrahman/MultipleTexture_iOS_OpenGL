 precision mediump float;
attribute vec4 Position; // 1
attribute vec4 SourceColor; // 2
attribute vec2 TexCoordIn; // New


varying vec2 TexCoordOut; // New
varying vec4 DestinationColor; // 3


void main(void) { // 4
    DestinationColor = SourceColor; // 5
    gl_Position = Position; // 6
    TexCoordOut = TexCoordIn;
}
