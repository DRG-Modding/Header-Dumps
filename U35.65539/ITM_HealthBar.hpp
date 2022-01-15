#ifndef UE4SS_SDK_ITM_HealthBar_HPP
#define UE4SS_SDK_ITM_HealthBar_HPP

class UITM_HealthBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProgressBar* HealthProgress;
    UUI_ImageTinted_C* Image_Health;
    TEnumAsByte<ENUM_MenuColors::Type> SegmentInnerTint;

    void PreConstruct(bool IsDesignTime);
    void SetHealth(float Percent);
    void ExecuteUbergraph_ITM_HealthBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_Percent);
}

#endif
