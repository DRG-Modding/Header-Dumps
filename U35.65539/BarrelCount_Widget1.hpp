#ifndef UE4SS_SDK_BarrelCount_Widget1_HPP
#define UE4SS_SDK_BarrelCount_Widget1_HPP

class UBarrelCount_Widget1_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_52;
    UTextBlock* ScoreText;

    void SetScore(int32 Score);
    void ExecuteUbergraph_BarrelCount_Widget1(int32 EntryPoint, int32 K2Node_CustomEvent_Score, FText CallFunc_Conv_IntToText_ReturnValue);
}

#endif
