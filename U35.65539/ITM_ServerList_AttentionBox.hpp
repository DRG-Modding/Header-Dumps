#ifndef UE4SS_SDK_ITM_ServerList_AttentionBox_HPP
#define UE4SS_SDK_ITM_ServerList_AttentionBox_HPP

class UITM_ServerList_AttentionBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Pulse;
    UImage* Icon_Warning;

    void Construct();
    void ExecuteUbergraph_ITM_ServerList_AttentionBox(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
