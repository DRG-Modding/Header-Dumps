#ifndef UE4SS_SDK_ITM_GeneratedIcon_Item_HPP
#define UE4SS_SDK_ITM_GeneratedIcon_Item_HPP

class UITM_GeneratedIcon_Item_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimIconReady;
    UBorder* Background;
    UBorder* Border_Inside;
    UBorder* Border_Outside;
    UImage* ICON_Image;
    UImage* ICON_Item;
    UImage* ICON_Padlock;
    UScaleBox* IconScaleBox;
    USizeBox* IconSizer;
    UWidgetSwitcher* IconTypeSwitcher;
    UImage* Shadow;
    int32 IconSize;
    TEnumAsByte<ENUM_MenuColors::Type> BorderColor;
    bool ShowBorder;
    bool ShowBackground;
    bool ShowPadlock;
    UTextureRenderTarget2D* IconRenderTarget;

    UWidget* GetIconToolTip(UITM_Wardrobe_ItemSelector_ToolTip_C* ToolTip, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UITM_Wardrobe_ItemSelector_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void SetShowBackground(bool InBackgroundVisible, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float K2Node_Select_Default, FLinearColor K2Node_MakeStruct_LinearColor, ESlateVisibility K2Node_Select_Default_1);
    void SetRenderTarget(UTextureRenderTarget2D* InTexture, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void ReleaseRenderTarget(bool CallFunc_IsValid_ReturnValue);
    void SetShowBorders(bool InBorderVisible, bool Temp_bool_Variable, FMargin Temp_struct_Variable, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_Select_Default);
    void SetIconSize(int32 InSize, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void SetShowPadlock(bool InVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetBorderColor(uint8 InColor, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void ShowAsItem(UVanityItem* Item, UPlayerCharacterID* Character);
    void ShowAsPickAxePart(UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character);
    void ShowAsTexture(UTexture2D* Texture, FLinearColor Tint);
    void ShowAsMaterial(UMaterialInterface* Material, FLinearColor Tint);
    void HideIcon(UWidget* AndSwitchTo);
    void ShowAsSoftMaterial(SoftObjectProperty Material, FLinearColor Tint);
    void ExecuteUbergraph_ITM_GeneratedIcon_Item(int32 EntryPoint, UVanityItem* K2Node_CustomEvent_Item, UPlayerCharacterID* K2Node_CustomEvent_character_1, bool CallFunc_IsValid_ReturnValue, UArmorMaterialVanityItem* K2Node_DynamicCast_AsArmor_Material_Vanity_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, UPickaxePart* K2Node_CustomEvent_part, EPickaxePartLocation K2Node_CustomEvent_pickaxePartLocation, UPlayerCharacterID* K2Node_CustomEvent_character, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue, UTextureRenderTarget2D* CallFunc_GeneratePickaxePartIcon_Async_icon, UPickaxeMaterialPart* K2Node_DynamicCast_AsPickaxe_Material_Part, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue_1, UTexture2D* K2Node_CustomEvent_Texture, FLinearColor K2Node_CustomEvent_Tint_2, UTextureRenderTarget2D* CallFunc_GenerateVanityIcon_Async_icon, UMaterialInterface* K2Node_CustomEvent_Material_1, FLinearColor K2Node_CustomEvent_Tint_1, FSlateColor K2Node_MakeStruct_SlateColor, UWidget* K2Node_CustomEvent_AndSwitchTo, SoftObjectProperty K2Node_CustomEvent_Material, FLinearColor K2Node_CustomEvent_Tint, FSlateColor K2Node_MakeStruct_SlateColor_1, bool K2Node_Event_IsDesignTime);
}

#endif
