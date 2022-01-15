#ifndef UE4SS_SDK_OnScreenIndicator_ActiveButton_HPP
#define UE4SS_SDK_OnScreenIndicator_ActiveButton_HPP

class UOnScreenIndicator_ActiveButton_C : UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_Arrow;
    UImage* Image_Icon;
    UCanvasPanel* RootCanvas;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_ActiveButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
