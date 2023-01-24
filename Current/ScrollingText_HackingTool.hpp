#ifndef UE4SS_SDK_ScrollingText_HackingTool_HPP
#define UE4SS_SDK_ScrollingText_HackingTool_HPP

class UScrollingText_HackingTool_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation;
    class UImage* Image_346;
    class UImage* IMG_Caution;
    class UImage* IMG_Caution_1;
    class UImage* IMG_Caution_2;

    void Construct();
    void ExecuteUbergraph_ScrollingText_HackingTool(int32 EntryPoint);
};

#endif
