#ifndef UE4SS_SDK_ITM_GeneratedIcon_Item_HPP
#define UE4SS_SDK_ITM_GeneratedIcon_Item_HPP

class UITM_GeneratedIcon_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIconReady;
    class UBorder* Background;
    class UBorder* Border_Inside;
    class UBorder* Border_Outside;
    class UImage* ICON_Image;
    class UImage* ICON_Item;
    class UImage* ICON_Padlock;
    class UScaleBox* IconScaleBox;
    class USizeBox* IconSizer;
    class UWidgetSwitcher* IconTypeSwitcher;
    class UImage* Shadow;
    int32 IconSize;
    TEnumAsByte<ENUM_MenuColors::Type> BorderColor;
    bool ShowBorder;
    bool ShowBackground;
    bool ShowPadlock;
    class UTextureRenderTarget2D* IconRenderTarget;

    class UWidget* GetIconToolTip(class UITM_Wardrobe_ItemSelector_ToolTip_C* ToolTip, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UITM_Wardrobe_ItemSelector_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void SetShowBackground(bool InBackgroundVisible, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float K2Node_Select_Default, FLinearColor K2Node_MakeStruct_LinearColor, ESlateVisibility K2Node_Select_Default_1);
    void SetRenderTarget(class UTextureRenderTarget2D* InTexture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void ReleaseRenderTarget(bool CallFunc_IsValid_ReturnValue);
    void SetShowBorders(bool InBorderVisible, bool Temp_bool_Variable, FMargin Temp_struct_Variable, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_Select_Default);
    void SetIconSize(int32 InSize, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void SetShowPadlock(bool InVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetBorderColor(TEnumAsByte<ENUM_MenuColors::Type> InColor, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void ShowAsItem(class UVanityItem* Item, class UPlayerCharacterID* Character);
    void ShowAsPickAxePart(class UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, class UPlayerCharacterID* Character);
    void ShowAsTexture(class UTexture2D* Texture, FLinearColor Tint);
    void ShowAsMaterial(class UMaterialInterface* Material, FLinearColor Tint);
    void HideIcon(class UWidget* AndSwitchTo);
    void ShowAsSoftMaterial(TSoftObjectPtr<UMaterialInterface> Material, FLinearColor Tint);
    void ExecuteUbergraph_ITM_GeneratedIcon_Item(int32 EntryPoint, class UVanityItem* K2Node_CustomEvent_Item, class UPlayerCharacterID* K2Node_CustomEvent_character_1, bool CallFunc_IsValid_ReturnValue, class UArmorMaterialVanityItem* K2Node_DynamicCast_AsArmor_Material_Vanity_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UPickaxePart* K2Node_CustomEvent_part, EPickaxePartLocation K2Node_CustomEvent_pickaxePartLocation, class UPlayerCharacterID* K2Node_CustomEvent_character, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue, class UTextureRenderTarget2D* CallFunc_GeneratePickaxePartIcon_Async_icon, class UPickaxeMaterialPart* K2Node_DynamicCast_AsPickaxe_Material_Part, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue_1, class UTexture2D* K2Node_CustomEvent_Texture, FLinearColor K2Node_CustomEvent_Tint_2, class UTextureRenderTarget2D* CallFunc_GenerateVanityIcon_Async_icon, class UMaterialInterface* K2Node_CustomEvent_Material_1, FLinearColor K2Node_CustomEvent_Tint_1, FSlateColor K2Node_MakeStruct_SlateColor, class UWidget* K2Node_CustomEvent_AndSwitchTo, TSoftObjectPtr<UMaterialInterface> K2Node_CustomEvent_Material, FLinearColor K2Node_CustomEvent_Tint, FSlateColor K2Node_MakeStruct_SlateColor_1, bool K2Node_Event_IsDesignTime);
};

#endif
