//
//  ViewController.m
//  Mode自动解析
//
//  Created by 胡佳文 on 2017/6/24.
//  Copyright © 2017年 胡佳文. All rights reserved.
//

#import "ViewController.h"
#import "Model.h"
#import <MJExtension/MJExtension.h>

@interface ViewController ()

@property (nonatomic, copy) NSDictionary* jsonDict;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSString* path = [[NSBundle mainBundle]pathForResource:@"Data" ofType:@"json"];
    NSData* jsonData = [NSData dataWithContentsOfFile:path];

    self.jsonDict = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingAllowFragments error:nil];
     
}
- (IBAction)getJsonData:(id)sender {

}
- (IBAction)startChangeModel:(id)sender {
    Model* dataModel = [Model modelWithJson:self.jsonDict];
    NSArray* array = dataModel.result.groups;

//    NSLog(@"%@======%@",dataModel.result.sortId,dataModel.result.hotTagGroup.groupName);
    groupModel* model = array.firstObject;
    subGroupsModel* subModel = model.subGroups.firstObject;
//    NSLog(@"%@----%@",subModel.groupName,subModel.tags.class);
    tagModel* tagModel = subModel.tags.firstObject;
    NSLog(@"%@",tagModel.tagName);

}


@end
