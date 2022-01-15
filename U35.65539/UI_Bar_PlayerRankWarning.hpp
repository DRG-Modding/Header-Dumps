#ifndef UE4SS_SDK_UI_Bar_PlayerRankWarning_HPP
#define UE4SS_SDK_UI_Bar_PlayerRankWarning_HPP

class UUI_Bar_PlayerRankWarning_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Anim_InfoBoxAppear;
    UImage* Image_82;
    UImage* Image_84;
    UImage* Image_85;
    UImage* Image_86;
    USizeBox* PlayerRankToolTip;
    UTextBlock* TextBlock_90;
    int32 Rank;

    void SetRank(int32 Value, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void AnimStop(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void AnimPlay(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_Bar_PlayerRankWarning(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
