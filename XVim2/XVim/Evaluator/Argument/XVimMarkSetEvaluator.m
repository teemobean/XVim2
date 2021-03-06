//
//  XVimMarkSetEvaluator.m
//  XVim
//
//  Created by Tomas Lundell on 21/04/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "XVimMarkSetEvaluator.h"
#import "XVim.h"
#import "XVimKeyStroke.h"
#import "XVimKeymapProvider.h"
#import "XVimMarks.h"
#import "XVimWindow.h"
#import "XVim2-Swift.h"

@implementation XVimMarkSetEvaluator

- (XVimKeymap*)selectKeymapWithProvider:(id<XVimKeymapProvider>)keymapProvider
{
    return [keymapProvider keymapForMode:XVIM_MODE_NONE];
}

- (XVimEvaluator*)eval:(XVimKeyStroke*)keyStroke
{
    if (keyStroke.modifier) {
        return XVimEvaluator.invalidEvaluator;
    }

    let mark = self.window.currentPositionMark;
    if (nil != mark) {
        [XVim.instance.marks setMark:mark forName:keyStroke.xvimString];
    }
    return nil;
}

@end
