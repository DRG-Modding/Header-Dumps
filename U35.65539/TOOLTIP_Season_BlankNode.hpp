#ifndef UE4SS_SDK_TOOLTIP_Season_BlankNode_HPP
#define UE4SS_SDK_TOOLTIP_Season_BlankNode_HPP

class UTOOLTIP_Season_BlankNode_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro;
    UHorizontalBox* HorizontalBox_Cost;
    UImage* Image_213;
    UImage* Image_Background;
    UTextBlock* Text_Cost;
    UTextBlock* TextBlock_Category;
    UTextBlock* TextBlock_Title;

    void PlayIntro();
    void ExecuteUbergraph_TOOLTIP_Season_BlankNode(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
