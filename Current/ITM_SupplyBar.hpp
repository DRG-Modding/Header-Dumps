#ifndef UE4SS_SDK_ITM_SupplyBar_HPP
#define UE4SS_SDK_ITM_SupplyBar_HPP

class UITM_SupplyBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_ImageTinted_C* Image_SupplyType;
    class UITM_SupplyBarItem_C* ITM_SupplyBarItem_1;
    class UITM_SupplyBarItem_C* ITM_SupplyBarItem_2;
    class UITM_SupplyBarItem_C* ITM_SupplyBarItem_3;
    class UITM_SupplyBarItem_C* ITM_SupplyBarItem_4;
    class UProgressBar* ProgressBar;
    class UHorizontalBox* ProgressChunks;
    bool ShowAsProgressBar;
    bool ShowBlinkingSegments;
    class UTexture2D* SupplyIcon;
    TEnumAsByte<ENUM_MenuColors::Type> IconTint;
    TEnumAsByte<ENUM_MenuColors::Type> ProgressBarTint;
    TEnumAsByte<ENUM_MenuColors::Type> SegmentBorderTint;
    TEnumAsByte<ENUM_MenuColors::Type> SegmentInnerTint;
    TEnumAsByte<ENUM_MenuColors::Type> SegmentLowTint;

    void SetProgress(float Progress (0-1));
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SupplyBar(int32 EntryPoint);
};

#endif
