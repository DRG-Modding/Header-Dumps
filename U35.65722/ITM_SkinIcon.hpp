#ifndef UE4SS_SDK_ITM_SkinIcon_HPP
#define UE4SS_SDK_ITM_SkinIcon_HPP

class UITM_SkinIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* DefaultItem;
    class UUI_DLC_Indicator_C* DLC_Indicator;
    class USizeBox* IconSizer;
    class UImage* PaintBucketOverlay;
    class UImage* SkinIcon;
    class UItemSkin* Skin;
    float Size;
    bool IsLocked;
    bool IsDefault;
    bool ShowBucket;
    class UMaterialInstanceDynamic* Material;
    FLinearColor OutlineTint;
    TEnumAsByte<ENUM_SkinWidgetTypes::Type> BucketIcon;
    bool ShowDLC;

    void SetIconColor(FLinearColor InColorAndOpacity);
    void SetBucketVisibility(bool ShowBucket, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, class UTexture2D* Temp_object_Variable_12, class UTexture2D* Temp_object_Variable_13, EItemSkinType Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable_4, ESlateVisibility K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1, class UTexture2D* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default_3);
    void SetOutlineTint(FLinearColor Color, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void GetIsLocked(bool& IsLocked);
    void SetSize(float InSize, float CallFunc_Divide_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue_1);
    void SetFromMaterial(class UMaterialInterface* inMaterial, bool inIsLocked, bool InIsDefault, TEnumAsByte<ENUM_SkinWidgetTypes::Type> InBucketIcon, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInterface* K2Node_Select_Default);
    void SetSkin(class UItemSkin* InSkin, bool inIsLocked, bool InIsDefault, bool NewSkin, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable_1, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable_3, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable_4, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable_5, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable_6, TEnumAsByte<ENUM_SkinWidgetTypes::Type> Temp_byte_Variable_7, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, class UPlayerCharacterID* CallFunc_GetOwningCharacter_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UItemID* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, EItemCategory CallFunc_GetItemCategory_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, EItemCategory Temp_byte_Variable_8, TEnumAsByte<ENUM_SkinWidgetTypes::Type> K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UItemSkin* Temp_object_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UItemSkin* K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class UMaterialInterface* K2Node_Select_Default_2);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SkinIcon(int32 EntryPoint, class UDLCBase* Temp_object_Variable, class UDLCBase* Temp_object_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, class UDLCBase* K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
};

#endif
