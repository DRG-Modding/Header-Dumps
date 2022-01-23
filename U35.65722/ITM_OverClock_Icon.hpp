#ifndef UE4SS_SDK_ITM_OverClock_Icon_HPP
#define UE4SS_SDK_ITM_OverClock_Icon_HPP

class UITM_Overclock_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Outer;
    class USizeBox* IconSizer;
    class UWidgetSwitcher* IconTypeSwitcher;
    class UImage* ImgFrame;
    class UImage* ImgIcon;
    class UITM_SkinIcon_C* ITM_SkinIcon;
    int32 IconSize;
    class UTexture2D* IconTexture;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    class UTexture2D* FrameTexture;
    TEnumAsByte<ENUM_MenuColors::Type> FrameColor;
    bool HasTooltip;
    FText TooltipHeader;
    FText TooltipTxt;
    class UItemUpgrade* Overclock;

    void SetOverclockTooltip(class UItemUpgrade* Overclock);
    class UWidget* GetOverclockTooltip(class UTOOLTIP_Overclock_Item_C* ToolTip, bool CallFunc_IsValid_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UTOOLTIP_Overclock_Item_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void GetFrameLinearColor(FLinearColor& ColorAndOpacity);
    void FromSchematicType(ESchematicType InType, FSchematicType Data, class UGameData* CallFunc_GetFSDGameData_ReturnValue, FSchematicType CallFunc_GetSchematicTypeData_ReturnValue);
    void SetCategory(class USchematicCategory* InCategory, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
    void SetFrameLinearColor(FLinearColor Color);
    void FromUpgrade(class UItemUpgrade* InUpgrade, class USchematicCategory*& OutSchematicCategory, class USchematicCategory* Category, class USchematicCategory* CallFunc_FindItemUpgradeSchematicCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void FromSchematic(class USchematic* InSchematic, bool ShowState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanAffordSchematic_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UTexture* CallFunc_GetIcon_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush, FColor CallFunc_GetIconTint_ReturnValue, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, class USkinSchematicItem* K2Node_DynamicCast_AsSkin_Schematic_Item, bool K2Node_DynamicCast_bSuccess);
    void SetIconColor(TEnumAsByte<ENUM_MenuColors::Type> Color, FLinearColor CallFunc_MenuColors_OutputColor);
    void SetIcon(class UTexture2D* Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetFrame(class UTexture2D* Texture);
    void SetFrameColor(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector, FLinearColor CallFunc_MenuColors_OutputColor);
    void SetIconSize(int32 InSize, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Overclock_Icon(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime);
};

#endif
