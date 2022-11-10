
#include "header.h"
#import <XCTest/XCTest.h>

@interface test : XCTestCase

@end

@implementation test

- (void)test_lab {
    const int n = 23;
    int s[n];
  
    int result = Sum(s,n);
    
    XCTAssertNotEqual(result, 1);
    
    
}



@end
