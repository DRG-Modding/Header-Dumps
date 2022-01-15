#ifndef UE4SS_SDK_ITM_SkinIcon_HPP
#define UE4SS_SDK_ITM_SkinIcon_HPP

class UITM_SkinIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* DefaultItem;
    UUI_DLC_Indicator_C* DLC_Indicator;
    USizeBox* IconSizer;
    UImage* PaintBucketOverlay;
    UImage* SkinIcon;
    UItemSkin* Skin;
    float Size;
    bool IsLocked;
    bool IsDefault;
    bool ShowBucket;
    UMaterialInstanceDynamic* Material;
    FLinearColor OutlineTint;
    TEnumAsByte<ENUM_SkinWidgetTypes::Type> BucketIcon;
    bool ShowDLC;

    void SetIconColor(FLinearColor InColorAndOpacity);
    void SetBucketVisibility(bool ShowBucket, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, UTexture2D* Temp_object_Variable_4, UTexture2D* Temp_object_Variable_5, UTexture2D* Temp_object_Variable_6, uint8 Temp_byte_Variable, UTexture2D* Temp_object_Variable_7, UTexture2D* Temp_object_Variable_8, UTexture2D* Temp_object_Variable_9, UTexture2D* Temp_object_Variable_10, UTexture2D* Temp_object_Variable_11, UTexture2D* Temp_object_Variable_12, UTexture2D* Temp_object_Variable_13, EItemSkinType Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, ESlateVisibility K2Node_Select_Default, UTexture2D* K2Node_Select_Default_1, UTexture2D* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue, UTexture2D* K2Node_Select_Default_3);
    void SetOutlineTint(FLinearColor Color, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void GetIsLocked(bool& IsLocked);
    void SetSize(float InSize, float CallFunc_Divide_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue_1);
    void SetFromMaterial(UMaterialInterface* inMaterial, bool inIsLocked, bool InIsDefault, uint8 InBucketIcon, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_BooleanOR_ReturnValue, UMaterialInterface* K2Node_Select_Default);
    void SetSkin(UItemSkin* InSkin, bool inIsLocked, bool InIsDefault, bool NewSkin, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, uint8 Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, uint8 Temp_byte_Variable_7, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, UPlayerCharacterID* CallFunc_GetOwningCharacter_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UItemID* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, EItemCategory CallFunc_GetItemCategory_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, EItemCategory Temp_byte_Variable_8, uint8 K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, UItemSkin* Temp_object_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, UItemSkin* K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, UMaterialInterface* K2Node_Select_Default_2);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SkinIcon(int32 EntryPoint, UDLCBase* Temp_object_Variable, UDLCBase* Temp_object_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, UDLCBase* K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
}

#endif
