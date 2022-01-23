#ifndef UE4SS_SDK_LMST_Widget_HPP
#define UE4SS_SDK_LMST_Widget_HPP

class ULMST_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TotalDeathsIncrease;
    class UWidgetAnimation* TotalRevivedIncrease;
    class UWidgetAnimation* TotalMinedIncrease;
    class UWidgetAnimation* TotalKillsIncrease;
    class UImage* Label;
    class UTextBlock* TotalDeaths;
    class UTextBlock* TotalKills;
    class UTextBlock* TotalMined;
    class UTextBlock* TotalRevived;

    void TotalKillsIncreased(int32 Kills);
    void TotalMinedIncreased(float Mined);
    void TotalRevivedIncreased(int32 Revived);
    void TotalDeathsIncreased(int32 Deaths);
    void ExecuteUbergraph_LMST_Widget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 K2Node_CustomEvent_Kills, float K2Node_CustomEvent_Mined, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, int32 K2Node_CustomEvent_Revived, int32 K2Node_CustomEvent_Deaths, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
};

#endif
