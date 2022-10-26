#ifndef UE4SS_SDK_TOOLTIP_Season_BlankNode_HPP
#define UE4SS_SDK_TOOLTIP_Season_BlankNode_HPP

class UTOOLTIP_Season_BlankNode_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UHorizontalBox* HorizontalBox_Cost;
    class UImage* Image_213;
    class UImage* Image_Background;
    class UTextBlock* Text_Cost;
    class UTextBlock* TextBlock_Category;
    class UTextBlock* TextBlock_Title;

    void PlayIntro();
    void ExecuteUbergraph_TOOLTIP_Season_BlankNode(int32 EntryPoint);
};

#endif
