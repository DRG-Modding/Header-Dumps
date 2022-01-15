#ifndef UE4SS_SDK_ITM_OverClock_Icon_HPP
#define UE4SS_SDK_ITM_OverClock_Icon_HPP

class UITM_Overclock_Icon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_Outer;
    USizeBox* IconSizer;
    UWidgetSwitcher* IconTypeSwitcher;
    UImage* ImgFrame;
    UImage* ImgIcon;
    UITM_SkinIcon_C* ITM_SkinIcon;
    int32 IconSize;
    UTexture2D* IconTexture;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    UTexture2D* FrameTexture;
    TEnumAsByte<ENUM_MenuColors::Type> FrameColor;
    bool HasTooltip;
    FText TooltipHeader;
    FText TooltipTxt;
    UItemUpgrade* Overclock;

    void SetOverclockTooltip(UItemUpgrade* Overclock);
    UWidget* GetOverclockTooltip(UTOOLTIP_Overclock_Item_C* ToolTip, bool CallFunc_IsValid_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UTOOLTIP_Overclock_Item_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void GetFrameLinearColor(FLinearColor& ColorAndOpacity);
    void FromSchematicType(ESchematicType InType, FSchematicType Data, UGameData* CallFunc_GetFSDGameData_ReturnValue, FSchematicType CallFunc_GetSchematicTypeData_ReturnValue);
    void SetCategory(USchematicCategory* InCategory, bool CallFunc_IsValid_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
    void SetFrameLinearColor(FLinearColor Color);
    void FromUpgrade(UItemUpgrade* InUpgrade, USchematicCategory*& OutSchematicCategory, USchematicCategory* Category, USchematicCategory* CallFunc_FindItemUpgradeSchematicCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void FromSchematic(USchematic* InSchematic, bool ShowState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanAffordSchematic_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, UTexture* CallFunc_GetIcon_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush, FColor CallFunc_GetIconTint_ReturnValue, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, USkinSchematicItem* K2Node_DynamicCast_AsSkin_Schematic_Item, bool K2Node_DynamicCast_bSuccess);
    void SetIconColor(uint8 Color, FLinearColor CallFunc_MenuColors_OutputColor);
    void SetIcon(UTexture2D* Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetFrame(UTexture2D* Texture);
    void SetFrameColor(uint8 ColorSelector, FLinearColor CallFunc_MenuColors_OutputColor);
    void SetIconSize(int32 InSize, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Overclock_Icon(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime);
}

#endif
