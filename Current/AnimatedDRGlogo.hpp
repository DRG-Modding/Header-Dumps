#ifndef UE4SS_SDK_AnimatedDRGlogo_HPP
#define UE4SS_SDK_AnimatedDRGlogo_HPP

class UAnimatedDRGlogo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Flash4;
    class UWidgetAnimation* Flash3;
    class UWidgetAnimation* Flash2;
    class UWidgetAnimation* Flash1;
    class UWidgetAnimation* Idle;
    class UImage* Logo;

    void Construct();
    void ExecuteUbergraph_AnimatedDRGlogo(int32 EntryPoint);
};

#endif
