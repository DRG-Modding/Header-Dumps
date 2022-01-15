#ifndef UE4SS_SDK_ConsoleScreen_Jobs_HPP
#define UE4SS_SDK_ConsoleScreen_Jobs_HPP

class UConsoleScreen_Jobs_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    FText TextToDisplay;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_Jobs(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
