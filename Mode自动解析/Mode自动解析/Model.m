//
//  Model.m
//  Mode自动解析
//
//  Created by 胡佳文 on 2017/6/24.
//  Copyright © 2017年 胡佳文. All rights reserved.
//

#import "Model.h"
#import <MJExtension/MJExtension.h>


@implementation Model

+ (instancetype)modelWithJson:(NSDictionary *)json {
    Model* model = [Model mj_objectWithKeyValues:json];
    return model;
}
 
@end

@implementation resultModel


+ (NSDictionary *)mj_objectClassInArray {

    return @{
             @"groups" : @"groupModel",
             @"hotTagGroup" : @"hotTagGroupModel"
             };
}

+ (NSDictionary *)mj_replacedKeyFromPropertyName {
    return @{
             @"count" :@"shoppingCartItemCount",
             @"sortId" : @"selectedSortId",
             };
}



@end

@implementation groupModel

+ (NSDictionary *)mj_objectClassInArray {
    return @{
             @"subGroups" : @"subGroupsModel"
             };
}

@end
@implementation hotTagGroupModel

@end

@implementation subGroupsModel

+ (NSDictionary *)mj_objectClassInArray {
    return @{
             @"tags" : @"tagModel"
             };
}

@end

@implementation tagModel



@end
