#ifndef UE4SS_SDK_TOOLTIP_Season_Levels_HPP
#define UE4SS_SDK_TOOLTIP_Season_Levels_HPP

class UTOOLTIP_Season_Levels_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UImage* Image_Background;
    class UTextBlock* TextBlock_Status;
    class UTextBlock* TextBlock_Title;

    void SetData(ESeasonVisibilityState State);
    void ExecuteUbergraph_TOOLTIP_Season_Levels(int32 EntryPoint);
};

#endif
