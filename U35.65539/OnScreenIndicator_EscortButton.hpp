#ifndef UE4SS_SDK_OnScreenIndicator_EscortButton_HPP
#define UE4SS_SDK_OnScreenIndicator_EscortButton_HPP

class UOnScreenIndicator_EscortButton_C : UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_Arrow;
    UImage* Image_Icon;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_EscortButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
