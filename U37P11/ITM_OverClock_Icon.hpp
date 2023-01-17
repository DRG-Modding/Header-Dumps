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
    class UWidget* GetOverclockTooltip();
    void GetFrameLinearColor(FLinearColor& ColorAndOpacity);
    void FromSchematicType(ESchematicType InType);
    void SetCategory(class USchematicCategory* InCategory);
    void SetFrameLinearColor(FLinearColor Color);
    void FromUpgrade(class UItemUpgrade* InUpgrade, class USchematicCategory*& OutSchematicCategory);
    void FromSchematic(class USchematic* InSchematic, bool ShowState);
    void SetIconColor(TEnumAsByte<ENUM_MenuColors::Type> Color);
    void SetIcon(class UTexture2D* Value);
    void SetFrame(class UTexture2D* Texture);
    void SetFrameColor(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector);
    void SetIconSize(int32 InSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Overclock_Icon(int32 EntryPoint);
};

#endif
