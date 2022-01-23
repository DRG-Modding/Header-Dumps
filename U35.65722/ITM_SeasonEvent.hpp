#ifndef UE4SS_SDK_ITM_SeasonEvent_HPP
#define UE4SS_SDK_ITM_SeasonEvent_HPP

class UITM_SeasonEvent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UImage* Event_Icon;
    class UImage* Icon_SeasonXP_3;
    class UTextBlock* Text_Count;
    class UTextBlock* Text_XP_Gained_1;
    class UTextBlock* TextBlock_EventName;
    FText EventName;
    int32 PerformancePoints;
    class UTexture2D* Icon;
    class UWidgetAnimation* NewVar_0;
    int32 count;

    void Construct();
    void PlayIntro(float DelayBeforePlay);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SeasonEvent(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_CustomEvent_DelayBeforePlay, bool K2Node_Event_IsDesignTime, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
