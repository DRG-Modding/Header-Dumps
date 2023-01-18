#ifndef UE4SS_SDK_Widget_Biotank_DisplayName_HPP
#define UE4SS_SDK_Widget_Biotank_DisplayName_HPP

class UWidget_Biotank_DisplayName_C : public UUI_HackingPod_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation;
    class UBasic_Label_C* DisplayName;
    class UBasic_Label_C* DisplayName_2;
    class UBasic_Label_C* DisplayName_3;
    class UImage* Image;
    class UImage* Image_1;
    class ADisplayCase* DisplayCase;

    void SetCase(class ADisplayCase* Case);
    void ContentUpdated(const FDisplayContent& Content);
    void ExecuteUbergraph_Widget_Biotank_DisplayName(int32 EntryPoint);
};

#endif
