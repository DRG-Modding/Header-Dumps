#ifndef UE4SS_SDK_OnScreenIndicator_SlowGrenade_HPP
#define UE4SS_SDK_OnScreenIndicator_SlowGrenade_HPP

class UOnScreenIndicator_SlowGrenade_C : UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_SlowGrenade(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime);
}

#endif
