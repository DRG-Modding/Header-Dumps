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

    class UWidget* GetIconToolTip();
    void SetShowBackground(bool InBackgroundVisible);
    void SetRenderTarget(class UTextureRenderTarget2D* InTexture);
    void ReleaseRenderTarget();
    void SetShowBorders(bool InBorderVisible);
    void SetIconSize(int32 InSize);
    void SetShowPadlock(bool InVisible);
    void SetBorderColor(TEnumAsByte<ENUM_MenuColors::Type> InColor);
    void PreConstruct(bool IsDesignTime);
    void ShowAsItem(class UVanityItem* Item, class UPlayerCharacterID* Character);
    void ShowAsPickAxePart(class UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, class UPlayerCharacterID* Character);
    void ShowAsTexture(class UTexture2D* Texture, FLinearColor Tint);
    void ShowAsMaterial(class UMaterialInterface* Material, FLinearColor Tint);
    void HideIcon(class UWidget* AndSwitchTo);
    void ShowAsSoftMaterial(TSoftObjectPtr<UMaterialInterface> Material, FLinearColor Tint);
    void ForceIconOpacity(float StartDelay, float Opacity);
    void ShowAsSkin(class UItemSkin* Skin, class UPlayerCharacterID* Character);
    void ExecuteUbergraph_ITM_GeneratedIcon_Item(int32 EntryPoint);
};

#endif
