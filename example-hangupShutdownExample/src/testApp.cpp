#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    // To use ofxWatchdog addon, you have to add
    // some codes into main() function and testApp::update() function.
}

//--------------------------------------------------------------
void testApp::update(){
    ofxWatchdog::clear();
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(ofRandom(255), ofRandom(255), ofRandom(255));
}

//--------------------------------------------------------------
#pragma GCC push_options
#pragma GCC optimize ("O0")
#pragma clang optimize push
#pragma clang optimize "O0"
void testApp::keyPressed(int key){
    int volatile z = 1;
    char* volatile p = 0;
    
    switch (key) {
        case 'a':
        case 'A':
            // abort
            abort();
            break;
        case 'z':
        case 'Z':
            // zero devide
            z /= 0;
            break;
        case 'b':
        case 'B':
            // illegal access
            *p = 0xAB;
            break;
        case 'i':
        case 'I':
            // illegal instruction
            raise(SIGILL);
            break;
        case 's':
        case 'S':
            // segmentation fault
            (*((void(*)(int))&p))(z);
            break;
        case 'h':
        case 'H':
            // infinite loop
            while (true);
            break;
    }
}
#pragma clang optimize pop
#pragma GCC pop_options

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
