//
//  Model.h
//  Mode自动解析
//
//  Created by 胡佳文 on 2017/6/24.
//  Copyright © 2017年 胡佳文. All rights reserved.
//

#import <Foundation/Foundation.h>

@class resultModel;
@class groupModel;
@class hotTagGroupModel;
@class sortModel;
@class selectedCountryIdsModel;
@class selectedCityIdsModel;
@class subGroupsModel;
@class tagModel;

@interface Model : NSObject

@property (nonatomic, copy)   NSString* success;
@property (nonatomic, strong) resultModel* result;

+ (instancetype)modelWithJson:(id)json;
@end

@interface resultModel : NSObject

@property (nonatomic, assign) NSInteger                                 count;
@property (nonatomic, strong) NSMutableArray<groupModel *>*             groups;
@property (nonatomic, strong) hotTagGroupModel*                         hotTagGroup;
@property (nonatomic, strong) NSMutableArray<sortModel *>*              sort;
@property (nonatomic, strong) NSMutableArray<sortModel *>*              productList;
@property (nonatomic, copy)   NSString*                                 selectedZoneId;
@property (nonatomic, strong) NSMutableArray<selectedCountryIdsModel*>* selectedCountryIds;
@property (nonatomic, strong) NSMutableArray<selectedCityIdsModel*>*    selectedCityIds;
@property (nonatomic, copy)   NSString*                                 selectedGroupId;
@property (nonatomic, copy)   NSString*                                 sortId;

@end
#pragma mark =========grouModel================
@interface groupModel : NSObject

@property (nonatomic, copy)   NSString* shoppingCartItemCount;
@property (nonatomic, copy)   NSString* groupName;
@property (nonatomic, copy)   NSString* groupNameEn;
@property (nonatomic, copy)   NSString* prefix;
@property (nonatomic, copy)   NSString* showOrder;
@property (nonatomic, strong) NSMutableArray<subGroupsModel*>* subGroups;

@end

@interface subGroupsModel : NSObject

@property (nonatomic, copy)   NSString* groupId;
@property (nonatomic, copy)   NSString* parentGroupId;
@property (nonatomic, copy)   NSString* groupName;
@property (nonatomic, copy)   NSString* filterType;
@property (nonatomic, copy)   NSString* icon;
@property (nonatomic, copy)   NSString* remark;
@property (nonatomic, copy)   NSString* level;
@property (nonatomic, copy)   NSString* productTypeIds;
@property (nonatomic, copy)   NSString* hasSubGroups;
@property (nonatomic, copy)   NSString* subGroups;
@property (nonatomic, strong) NSMutableArray<__kindof tagModel*>* tags;

@end

@interface tagModel : NSObject

@property (nonatomic, copy)   NSString* tagId;
@property (nonatomic, copy)   NSString* groupIds;
@property (nonatomic, copy)   NSString* tagName;
@property (nonatomic, copy)   NSString* icon;
@property (nonatomic, copy)   NSString* showOrder;
@property (nonatomic, copy)   NSString* remark;
@property (nonatomic, copy)   NSString* groupId;
@property (nonatomic, copy)   NSString* productNum;
@property (nonatomic, copy)   NSString* highLight;

@end
#pragma mark =========grouModel================
@interface hotTagGroupModel : NSObject

@property (nonatomic, copy) NSString* groupName;

@end

@interface sortModel : NSObject
@end

@interface selectedCountryIdsModel : NSObject

@end

@interface selectedCityIdsModel : NSObject

@end
