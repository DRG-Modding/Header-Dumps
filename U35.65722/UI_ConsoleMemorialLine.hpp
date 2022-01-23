#ifndef UE4SS_SDK_UI_ConsoleMemorialLine_HPP
#define UE4SS_SDK_UI_ConsoleMemorialLine_HPP

class UUI_ConsoleMemorialLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Move;
    class UTextBlock* TXT_Main;
    float Duration;
    float AnimationSpeed;
    class UConsoleScreenMemorialWall_C* Mywall;

    void AddBoard(class UConsoleScreenMemorialWall_C* NewParam);
    void SetSpeed(float Speed);
    void SetText(FText Text);
    void Construct();
    void OnMoveFinished();
    void ExecuteUbergraph_UI_ConsoleMemorialLine(int32 EntryPoint, FExecuteUbergraph_UI_ConsoleMemorialLineK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
