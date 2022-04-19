#ifndef UE4SS_SDK_ITM_ServerList_AttentionBox_HPP
#define UE4SS_SDK_ITM_ServerList_AttentionBox_HPP

class UITM_ServerList_AttentionBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pulse;
    class UImage* Icon_Warning;

    void Construct();
    void ExecuteUbergraph_ITM_ServerList_AttentionBox(int32 EntryPoint);
};

#endif
