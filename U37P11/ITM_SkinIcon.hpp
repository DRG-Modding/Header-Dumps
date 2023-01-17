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
    void SetBucketVisibility(bool ShowBucket);
    void SetOutlineTint(FLinearColor Color);
    void GetIsLocked(bool& IsLocked);
    void SetSize(float InSize);
    void SetFromMaterial(class UMaterialInterface* InMaterial, bool InIsLocked, bool inIsDefault, TEnumAsByte<ENUM_SkinWidgetTypes::Type> InBucketIcon);
    void SetSkin(class UItemSkin* InSkin, bool InIsLocked, bool inIsDefault);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SkinIcon(int32 EntryPoint);
};

#endif
