#ifndef UE4SS_SDK_BP_Ping_Widget_HPP
#define UE4SS_SDK_BP_Ping_Widget_HPP

class UBP_Ping_Widget_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Ping;
    UImage* Image_82;

    void Construct();
    void ExecuteUbergraph_BP_Ping_Widget(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
