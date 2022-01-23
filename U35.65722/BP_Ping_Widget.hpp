#ifndef UE4SS_SDK_BP_Ping_Widget_HPP
#define UE4SS_SDK_BP_Ping_Widget_HPP

class UBP_Ping_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UImage* Image_82;

    void Construct();
    void ExecuteUbergraph_BP_Ping_Widget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
