#ifndef UE4SS_SDK_BarrelCount_Widget1_HPP
#define UE4SS_SDK_BarrelCount_Widget1_HPP

class UBarrelCount_Widget1_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_52;
    class UTextBlock* ScoreText;

    void SetScore(int32 Score);
    void ExecuteUbergraph_BarrelCount_Widget1(int32 EntryPoint);
};

#endif
