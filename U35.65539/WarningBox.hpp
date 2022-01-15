#ifndef UE4SS_SDK_WarningBox_HPP
#define UE4SS_SDK_WarningBox_HPP

class UWarningBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* NewAnimation_1;
    UImage* Image_0;
    USizeBox* SizeBox_2;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WarningBox(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
