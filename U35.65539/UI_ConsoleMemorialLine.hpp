#ifndef UE4SS_SDK_UI_ConsoleMemorialLine_HPP
#define UE4SS_SDK_UI_ConsoleMemorialLine_HPP

class UUI_ConsoleMemorialLine_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Move;
    UTextBlock* TXT_Main;
    float Duration;
    float AnimationSpeed;
    UConsoleScreenMemorialWall_C* Mywall;

    void AddBoard(UConsoleScreenMemorialWall_C* NewParam);
    void SetSpeed(float Speed);
    void SetText(FText Text);
    void Construct();
    void OnMoveFinished();
    void ExecuteUbergraph_UI_ConsoleMemorialLine(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
