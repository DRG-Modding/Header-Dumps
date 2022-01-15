#ifndef UE4SS_SDK_UI_RunningText_HPP
#define UE4SS_SDK_UI_RunningText_HPP

class UUI_RunningText_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFSDLabelWidget* RunningText;
    UFSDLabelWidget* TextForSize;
    FText Text;
    bool UpperCase;
    FSlateFontInfo Font;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;
    TEnumAsByte<ETextJustify::Type> Justification;
    int32 CurrentPos;
    float CurrentProgress;
    float Start Delay;
    float Total Duration;
    float CharactersPerSecond;
    FString String;
    bool Auto Play;
    int32 LengthNoWhiteSpaces;
    USoundCue* CharAudio;
    UAudioComponent* CharAudioComponent;
    FTimerHandle TimerHandle;
    FUI_RunningText_COnFinished OnFinished;
    void OnFinished();
    USoundCue* FinishedAudio;
    FString CursorText;
    float Time;
    float CursorBlinkSpeed;
    bool IsPlaying;

    FText GetCursorText(float Time, bool TextFinishedbool Temp_bool_Variable, FString Temp_string_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FString K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue);
    void SetFont(FSlateFontInfo InFontInfo);
    void step(float InDeltaTime, bool& Finished, int32 NewPos, float Temp_float_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FText CallFunc_GetCursorText_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_Variable, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_MidIgnoringWhiteSpace_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, float K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
    void SetJustification(uint8 InJustification);
    void SetTextColor(uint8 Color);
    void SetText(FText InText, FText CasedText, bool Temp_bool_Variable, int32 CallFunc_LengthIgnoringWhitespace_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, const FText K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Play();
    void Stop();
    void Play Timed(float Duration);
    void Destruct();
    void ExecuteUbergraph_UI_RunningText(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float K2Node_CustomEvent_Duration, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_Step_Finished);
    void OnFinished__DelegateSignature();
}

#endif
