/*
 * Copyright (c) 2013 Dan Wilcox <danomatika@gmail.com>
 *
 * BSD Simplified License.
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/danomatika/ofxMidi for documentation
 *
 */
#include "ofMain.h"
#include "ofApp.h"

int main()
{
// #ifdef TARGET_OPENGLES
#ifdef __linux__
	ofGLESWindowSettings settings;
	settings.glesVersion = 2;
	settings.windowMode = OF_GAME_MODE;
	cout << "RPI main entry point" << endl;
#else
	ofGLWindowSettings settings;
	settings.setGLVersion(3, 2);
	settings.windowMode = OF_WINDOW;
	cout << "Other main entry point" << endl;
#endif
	settings.setSize(720, 480);
	ofCreateWindow(settings);
	ofRunApp(new ofApp());
}
