#ifndef UE4SS_SDK_Lore_Content_ProgressBar_HPP
#define UE4SS_SDK_Lore_Content_ProgressBar_HPP

class ULore_Content_ProgressBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UTextBlock* MainText;
    class UProgressBar* ProgressBar_156;
    FText HeaderText;
    float NewVal;
    float StartTime;
    float OldVal;
    float ChangeTime;

    void SetProgress(int32 Progress);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Lore_Content_ProgressBar(int32 EntryPoint);
};

#endif
