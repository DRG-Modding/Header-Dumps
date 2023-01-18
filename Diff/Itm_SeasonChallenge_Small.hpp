#ifndef UE4SS_SDK_Itm_SeasonChallenge_Small_HPP
#define UE4SS_SDK_Itm_SeasonChallenge_Small_HPP

class UItm_SeasonChallenge_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ImageLoaded;
    class UButton* Button_Outer;
    class UImage* I_Background;
    class UImage* I_ButtonStyle;
    class UImage* I_ButtonStyle_1;
    class UImage* I_ButtonStyle_2;
    class UImage* Image_297;
    class UImage* Image_Challenge;
    class UImage* Image_Type;
    class UProgressBar* ProgressBar_142;
    class URetainerBox* RetainerBox_Masking;
    class USizeBox* SizeBox_Outer;
    class UTextBlock* Text_NumberOfWins;
    class UTextBlock* TextBlock_ChallengeText;
    class UVerticalBox* VerticalBox_Content;
    FChallengeInfo ChallengeInfo;
    int32 ChallengeIndex;
    FItm_SeasonChallenge_Small_CHoverChanged HoverChanged;
    void HoverChanged(bool IsHovered, int32 Index);

    void Refresh();
    void Construct();
    void OnImageLoaded();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void SetHoverColor(FLinearColor InColorAndOpacity);
    void ExecuteUbergraph_Itm_SeasonChallenge_Small(int32 EntryPoint);
    void HoverChanged__DelegateSignature(bool IsHovered, int32 Index);
};

#endif
