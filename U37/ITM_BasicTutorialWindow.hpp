#ifndef UE4SS_SDK_ITM_BasicTutorialWindow_HPP
#define UE4SS_SDK_ITM_BasicTutorialWindow_HPP

class UITM_BasicTutorialWindow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TaskProgress;
    class UWidgetAnimation* CompleteAnim;
    class UWidgetAnimation* RemoveAnim;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UBorder* Border_Checkbox;
    class UHorizontalBox* HorizontalBox_TaskBar;
    class UImage* Image_79;
    class UImage* Image_BG;
    class UImage* Image_ColorBar;
    class UImage* Image_Tutorial;
    class URichTextSizable* MainText;
    class UOverlay* Overlay_ContentHolder;
    class URichTextSizable* TaskCounter;
    class URichTextSizable* TaskText;
    class UTextBlock* TextHeadline;
    FITM_BasicTutorialWindow_CCompleteAnimationFinished CompleteAnimationFinished;
    void CompleteAnimationFinished();
    FITM_BasicTutorialWindow_CRemoveAnimationFinished RemoveAnimationFinished;
    void RemoveAnimationFinished();
    bool TaskVisible;

    void SetText(FText Header, FText MainText, FText TaskText);
    void PlayRemove();
    void PlayShow();
    void PlayComplete();
    void CompleteAnimFinished();
    void SetImage(class UTexture2D* Texture);
    void PlayTaskProgress();
    void SetTaskCounter(int32 Counter, int32 Denominator);
    void Construct();
    void ExecuteUbergraph_ITM_BasicTutorialWindow(int32 EntryPoint);
    void RemoveAnimationFinished__DelegateSignature();
    void CompleteAnimationFinished__DelegateSignature();
};

#endif
