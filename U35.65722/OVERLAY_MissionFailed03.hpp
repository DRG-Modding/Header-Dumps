#ifndef UE4SS_SDK_OVERLAY_MissionFailed03_HPP
#define UE4SS_SDK_OVERLAY_MissionFailed03_HPP

class UOVERLAY_MissionFailed03_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Enter;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow_0;
    class UImage* BGgradientBottom;
    class UImage* BGgradientTop;
    class UTextBlock* Text_Mission;
    class UTextBlock* Text_MissionStatus;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OVERLAY_MissionFailed03(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1);
};

#endif
