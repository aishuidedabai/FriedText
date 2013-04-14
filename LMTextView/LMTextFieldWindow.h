//
//  LMTextFieldWindow.h
//  LMTextView
//
//  Created by Micha Mazaheri on 4/11/13.
//  Copyright (c) 2013 Lucky Marmot. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "LMTextField.h"

@interface LMTextFieldWindow : NSWindow <LMTextFieldDelegate>
@property (strong) IBOutlet LMTextField *jsonField;
@property (strong) IBOutlet LMTextField *jsonField2;
@property (strong) IBOutlet NSTextField *serializationTestField;

@end
