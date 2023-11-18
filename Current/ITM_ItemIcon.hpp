#ifndef UE4SS_SDK_ITM_ItemIcon_HPP
#define UE4SS_SDK_ITM_ItemIcon_HPP

class UITM_ItemIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BottomImage;
    class USizeBox* Icon_SizeBox;
    class UOverlay* IconOverlay;
    class UImage* PreviewImage;
    class UImage* TopImage;
    class UWidgetSwitcher* TypeSwitcher;
    class UItemData* ItemData;
    int32 Height;
    FMargin IconPadding;
    FMenuColorAndTint Color Gear BG;
    FMenuColorAndTint Color Gear Lines;
    bool UsePreviewImage;

    void FromItemID(class UItemID* InItem);
    void SetUsePreviewImage(bool InUsePreviewImage);
    void SetColorGearLines(FMenuColorAndTint InColor Gear Lines);
    void SetColorGearBG(FMenuColorAndTint InColor Gear BG);
    void SetIconPadding(FMargin InIconPadding);
    void SetHeight(int32 InHeight);
    void SetItemData(class UItemData* InItemData);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_ItemIcon(int32 EntryPoint);
};

#endif
