#ifndef UE4SS_SDK_UI_MasteryUnlockLine_HPP
#define UE4SS_SDK_UI_MasteryUnlockLine_HPP

class UUI_MasteryUnlockLine_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextLabel;
    FText Text;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_MasteryUnlockLine(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
