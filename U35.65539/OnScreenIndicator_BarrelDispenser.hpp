#ifndef UE4SS_SDK_OnScreenIndicator_BarrelDispenser_HPP
#define UE4SS_SDK_OnScreenIndicator_BarrelDispenser_HPP

class UOnScreenIndicator_BarrelDispenser_C : UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_581;
    UTextBlock* TextBlock_1;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_BarrelDispenser(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime);
}

#endif
