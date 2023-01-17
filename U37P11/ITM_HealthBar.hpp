#ifndef UE4SS_SDK_ITM_HealthBar_HPP
#define UE4SS_SDK_ITM_HealthBar_HPP

class UITM_HealthBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* HealthProgress;
    class UUI_ImageTinted_C* Image_Health;
    TEnumAsByte<ENUM_MenuColors::Type> SegmentInnerTint;

    void PreConstruct(bool IsDesignTime);
    void SetHealth(float Percent);
    void ExecuteUbergraph_ITM_HealthBar(int32 EntryPoint);
};

#endif
