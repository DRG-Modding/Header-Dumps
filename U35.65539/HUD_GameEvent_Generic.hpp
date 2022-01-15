#ifndef UE4SS_SDK_HUD_GameEvent_Generic_HPP
#define UE4SS_SDK_HUD_GameEvent_Generic_HPP

class UHUD_GameEvent_Generic_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UCanvasPanel* Canvas;
    UTextBlock* DATA_Header;
    UTextBlock* DATA_Objective;
    UTextBlock* DATA_ObjectiveCounter;
    UTextBlock* DATA_Timer;
    UHorizontalBox* ObjectiveHolder;
    UVerticalBox* VerticalBox_InProgress;
    AGameEvent* GameEvent;

    void RegisterGameEvent(AGameEvent* GameEvent);
    void UpdateTime(float CurrentProgress);
    void ShutDown();
    void Construct();
    void ProgressChanged(float CurrentProgress);
    void NumberObjectivesChanged(int32 stageCompleted);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_GameEvent_Generic(int32 EntryPoint, ProgressChangedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetEventFailed_ReturnValue, const FText CallFunc_GetObjectiveText_ReturnValue, const FText CallFunc_GetEventName_ReturnValue, bool CallFunc_GetShowScoreOnHUD_ReturnValue, bool CallFunc_GetShowTimeOnHUD_ReturnValue, float K2Node_CustomEvent_CurrentProgress_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_CustomEvent_CurrentProgress, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, StageCompleteSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_stageCompleted, float CallFunc_Multiply_IntFloat_ReturnValue, ProgressChangedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Conv_IntToString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1);
}

#endif
